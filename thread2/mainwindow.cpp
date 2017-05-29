#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QSysInfo>
#include "qblowfish-master/src/qblowfish.h"
#include <QMessageBox>
#include <QTime>
#include <QThread>
#include <QThreadPool>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>

// Random key generated at http://www.random.org/bytes/
#define KEY_HEX "ea462947a76af8a50dba0ad01455c8c3"

struct BytesForCipher{
    QByteArray srcArray;
    QByteArray* destArray;
};

static const int THREAD_COUNT = QThread::idealThreadCount();


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->selectFileBTN, SIGNAL(clicked(bool)), this, SLOT(loadFile()));
    connect(ui->encriptBTN, SIGNAL(clicked(bool)), this, SLOT(working()));
    connect(ui->optimThreadCB, SIGNAL(clicked(bool)), this, SLOT(optimThreadCB_Changed));

    ui->statusBar->addWidget(ui->statusText);

    //Получение технической информации
    QString arch = QSysInfo::currentCpuArchitecture();
    QString OS = QSysInfo::kernelType();
    QString idealThrCount = QString::number(QThread::idealThreadCount());
    ui->osLBL->setText(OS);
    ui->threadCountLBL->setText(idealThrCount);
    ui->platformLBL->setText(arch);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadFile()
{
    QString fileName = fileNameForEncr = QFileDialog::getOpenFileName(this);
    QString status;

    if (!fileName.isEmpty())
    {
        QFile inputFile(fileName);

        if(inputFile.open(QIODevice::ReadOnly)){
            array = inputFile.readAll();
            QFileInfo fileInfo(inputFile);
            ui->filePathLE->setText(fileName);
            ui->fileSizeLBL->setText(QString::number(fileInfo.size()*0.000001));
        }
        inputFile.close();
    }
}

QByteArray MainWindow::working(){
    QMessageBox msgBox;
    QByteArray encryptedBytes;

    encryptedBytes.resize(array.size());
    int dy,y;
    y=0;

    if (ui->optimThreadCB->isChecked())
        dy=array.size()/THREAD_COUNT;
    else
        dy=ui->optimThreadCountSB->value();

    QVector <BytesForCipher> tasks;

    for(; y<array.size()-dy; y+=dy){
        tasks << BytesForCipher {array, y, y+dy, &encryptedBytes};
    }

    QFuture <void> future = QtConcurrent::map(tasks, encrypt);
    encrypt(BytesForCipher{array, y, array.size(), &encryptedBytes});
    future.waitForFinished();

    msgBox.setText("Зашифровано! Затраченное время: " );
    msgBox.exec();
    ui->statusText->setText(worker->timeInfo);//выводим в статусбар затраченное на обработку время
    return encryptedBytes;


    /*QByteArray resultArray; //объявляем переменную для выгрузки обработанного массива

    if (ui->encryptRadio->isChecked()){ //если да, то шифруем

    }
    else {
        tempFileName=fileInfo.baseName()+"_decr.dat";
        QFile outFile(QFileDialog::getSaveFileName(this, tr("Сохранить файл"), tempFileName,tr("Data (*.dat) Other (*.*)")));

        resultArray = worker->decrypt();

        if(outFile.open(QIODevice::WriteOnly)){
            outFile.write(resultArray);
        }

        msgBox.setText("Расшифровано!");
        msgBox.exec();
    }*/
}

void encrypt(const BytesForCipher& task){
    QBlowfish bf(QByteArray::fromHex(KEY_HEX));
    bf.setPaddingEnabled(true);

    task.destArray = bf.encrypted(task.srcArray);
}

QByteArray MainWindow::decrypt(){
    QBlowfish bf(QByteArray::fromHex(KEY_HEX));
    QByteArray resultArray;

    bf.setPaddingEnabled(true);

    resultArray = bf.decrypted(bytes);

    return resultArray;
}

void MainWindow::textChange(){
    if(ui->encryptRadio->isChecked())
        ui->encriptBTN->setText(tr("Зашифровать"));
    if(ui->decryptRadio->isChecked())
        ui->encriptBTN->setText(tr("Расшифровать"));
}

void MainWindow::testBTN_click(){
    QByteArray bytes, oneArr, twoArr, ciphOne, ciphTwo, fullCiphArr;
    int bSize;
    bSize = bytes.size()/2-1;
    oneArr = bytes.mid(0, bSize);
    bSize = bytes.size()/2+1;
    twoArr = bytes.mid(bSize, bSize-1);

    QBlowfish bf(QByteArray::fromHex(KEY_HEX));
    bf.setPaddingEnabled(true);
    ciphOne=bf.encrypted(oneArr);
    ciphTwo=bf.encrypted(twoArr);
    fullCiphArr=ciphOne + ciphTwo;

    QFile outFile(QFileDialog::getSaveFileName(this, tr("Сохранить файл"), tr("зашифрованный блок"),tr("Data *.dat")));

    if(outFile.open(QIODevice::WriteOnly)){
        outFile.write(fullCiphArr);
    }
    QMessageBox msg;
    msg.setText("Объединенный блок зашифрован");
    msg.exec();
    //ui->recommendPTE->appendPlainText("oneArr: \n"+QString(oneArr));
    //ui->recommendPTE->appendPlainText("twoArr: \n"+QString(twoArr));
}

void MainWindow::write(QByteArray bytesForWrite){
    QString tempFileName; //в него будет записан обработанный файл

    //QFileInfo fileInfo(); //получаем информацию об открытом файле, из которого был считан изначальный массив
    tempFileName= "file_encr.dat";//fileInfo.baseName()+"_encr.dat"; //добавляем к названию открытого файла уточняющую строку с расширением
    QFile outFile(QFileDialog::getSaveFileName(this, tr("Сохранить файл"), tempFileName,tr("Data (*.dat)"))); //создаем файл для выгрузки обработанного массива

    if(outFile.open(QIODevice::WriteOnly)){
        outFile.write(bytesForWrite);//запись массива в файл
    }


}


void MainWindow::equalButton_Click(){
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Выберите два файла для сравнения"));
    QString fileName1, fileName2;
    fileName1 = fileNames.at(0);
    fileName2 = fileNames.at(1);

    QByteArray byteArr1, byteArr2;

    QFile inputFile1(fileName1), inputFile2(fileName2);

    if(inputFile1.open(QIODevice::ReadOnly)){
        byteArr1 = inputFile1.readAll();
    }
    inputFile1.close();

    if(inputFile2.open(QIODevice::ReadOnly)){
        byteArr2 = inputFile2.readAll();
    }

    QMessageBox msg;
    QString status;
    if(byteArr1==byteArr2)
        status="Файлы идентичны";
    else {
        status="Файлы разные";
    }
    msg.setText(status);
    msg.exec();
}

void MainWindow::optimThreadCB_Changed(){
    /*   Ставить в количество задействованных
     *   потоков число, полученное из теста   */

}

void MainWindow::tryThread(){

}

void MainWindow::smessage(){
    ui->filePathLE->setText("dfdfd");
}

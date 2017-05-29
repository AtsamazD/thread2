#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QSysInfo>
#include "qblowfish-master/src/qblowfish.h"
#include <QMessageBox>

// Random key generated at http://www.random.org/bytes/
#define KEY_HEX "ea462947a76af8a50dba0ad01455c8c3"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->selectFileBTN, SIGNAL(clicked(bool)), this, SLOT(loadFile()));
    connect(ui->encriptBTN, SIGNAL(clicked(bool)), this, SLOT(encrypt()));
    connect(ui->encryptRadio, SIGNAL(clicked(bool)), this, SLOT(textChange()));
    connect(ui->decryptRadio, SIGNAL(clicked(bool)), this, SLOT(textChange()));
    connect(ui->testBTN, SIGNAL(clicked(bool)), this, SLOT(testBTN_click()));
    ui->statusBar->addWidget(ui->statusText);

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
            bytes = inputFile.readAll();
            ui->recommendPTE->setPlainText(QString(bytes));
            QFileInfo fileInfo(inputFile);
            ui->filePathLE->setText(fileName);
            ui->fileSizeLBL->setText(QString::number(fileInfo.size()*0.000001));
        }
        inputFile.close();
    }
}

void MainWindow::encrypt(){
    QMessageBox msgBox;
    QFileInfo fileInfo(fileNameForEncr);
    QBlowfish bf(QByteArray::fromHex(KEY_HEX));
    QString tempFileName;

    if (ui->encryptRadio->isChecked()){
        tempFileName=fileInfo.baseName()+"_encr.dat";
        QFile outFile(QFileDialog::getSaveFileName(this, tr("Сохранить файл"), tempFileName,tr("Data (*.dat)")));

        bf.setPaddingEnabled(true);

        QByteArray cipherBytes = bf.encrypted(bytes);
        ui->recommendPTE->setPlainText(QString(bytes));

        if(outFile.open(QIODevice::WriteOnly)){
            outFile.write(cipherBytes);
        }

        msgBox.setText("Зашифровано!");
        msgBox.exec();
    }

    if (ui->decryptRadio->isChecked()){
        tempFileName=fileInfo.baseName()+"_decr.dat";
        QFile outFile(QFileDialog::getSaveFileName(this, tr("Сохранить файл"), tempFileName,tr("Data (*.dat) Other (*.*)")));

        bf.setPaddingEnabled(true);
        QByteArray decipherBytes = bf.decrypted(bytes);
        ui->recommendPTE->setPlainText(QString(decipherBytes));

        if(outFile.open(QIODevice::WriteOnly)){
            outFile.write(decipherBytes);
        }

        msgBox.setText("Расшифровано!");
        msgBox.exec();
    }
}

void MainWindow::textChange(){
    if(ui->encryptRadio->isChecked())
        ui->encriptBTN->setText(tr("Зашифровать"));
    if(ui->decryptRadio->isChecked())
        ui->encriptBTN->setText(tr("Расшифровать"));
}

void MainWindow::testBTN_click(){
    QByteArray oneArr, twoArr;
    int bSize;
    bSize = bytes.size()/2-1;
    oneArr = bytes.mid(0, bSize);
    bSize = bytes.size()/2+1;
    twoArr = bytes.mid(bSize, bSize-1);
    //ui->recommendPTE->appendPlainText("oneArr: \n"+QString(oneArr));
    //ui->recommendPTE->appendPlainText("twoArr: \n"+QString(twoArr));
}

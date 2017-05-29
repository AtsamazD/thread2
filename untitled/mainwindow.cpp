#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QTextStream>
#include <QCoreApplication>
#include "qblowfish-master/src/qblowfish.h"

// Random key generated at http://www.random.org/bytes/
#define KEY_HEX "ea462947a76af8a50dba0ad01455c8c3"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->openFileBTN, SIGNAL(clicked(bool)), this, SLOT(openFile()));
    statusBar()->addWidget(ui->loadedLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFile(){
    QString fileName = QFileDialog::getOpenFileName(this,"Открыть файл");
    QFile inputFile(fileName);
    if (inputFile.open(QIODevice::ReadOnly)){
        QFileInfo fileInfo(inputFile);
        ui->filePathEdit->setText(fileName);
        ui->fileSizeLabel->setText("Размер файла: " + QString::number(fileInfo.size()*0.001)+ " КиБ");

        //Считывание данных в двоичный массив
        bytes = inputFile.readAll();

        ui->loadedLabel->setText(QString::number(bytes.length()));
        QString str = bytes;
        ui->plainTextEdit->setPlainText(str);
        inputFile.close();
    }
}

void MainWindow::encrypt(){
    QBlowfish bf(QByteArray::fromHex(KEY_HEX));

    QFile encryptedFile("encrypted.dat");
    if (!encryptedFile.open(QFile::WriteOnly)) {
        ui->loadedLabel->setText("Could not open encrypted.dat for writing");
    }
    qint64 encryptedBytesWritten = 0;
    while (!clearFile.atEnd()) {
        QByteArray data = clearFile.read(8); // Let's process the file in 8-byte blocks (can use any multiple of 8)
        bf.setPaddingEnabled((clearFile.size() - encryptedBytesWritten) <= 8); // Enable padding for the last block only
        QByteArray encryptedData = bf.encrypted(data);
        Q_ASSERT(encryptedData.size() == 8);
        qint64 bytesWritten = encryptedFile.write(encryptedData);
        encryptedBytesWritten += bytesWritten;
    }
    encryptedFile.close();
    clearFile.close();
}

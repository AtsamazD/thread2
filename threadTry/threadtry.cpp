#include "threadtry.h"
#include "ui_threadtry.h"
#include <QThread>

threadTry::threadTry(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::threadTry)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(threadwork()));
}

void threadTry::threadwork(){
    QThread* thread = new QThread;
    Worker* worker = new Worker("true", "");
    worker->moveToThread(thread);
    connect(worker, SIGNAL(error(QString)), this, SLOT(errorString(QString)));
    connect(thread, SIGNAL(started()), worker, SLOT(process()));
    connect(worker, SIGNAL(finished()), thread, SLOT(quit()));
    connect(worker, SIGNAL(finished()), worker, SLOT(deleteLater()));
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}

threadTry::~threadTry()
{
    delete ui;
}

void Worker::process(){
    if(param1=="true")
        result="that's true!";
    else
        result="that's false!";
    qDebug("fine");
}

void Worker::error(QString err){

}

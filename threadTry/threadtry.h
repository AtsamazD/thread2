#ifndef THREADTRY_H
#define THREADTRY_H

#include <QMainWindow>

namespace Ui {
class threadTry;
}

class threadTry : public QMainWindow
{
    Q_OBJECT

public:
    explicit threadTry(QWidget *parent = 0);
    ~threadTry();

public slots:
    void threadwork();
private:
    Ui::threadTry *ui;
};

class Worker : public QObject
{
    Q_OBJECT

public:
    QString result;
    Worker(QString p1, QString p2) {
        param1 = p1;
        param2 = p2;
    }
    ~Worker(){
    };

public slots:
    void process();
    void error(QString err);

private:
    //мои переменные
    QString param1, param2;
};

#endif // THREADTRY_H

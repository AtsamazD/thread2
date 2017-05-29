#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QThread>
#include <QRunnable>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString fileNameForEncr;
    QByteArray array, a1,a2,a3;
private slots:
    void loadFile();
    QByteArray working();
    void testBTN_click();
    void equalButton_Click();
    void optimThreadCB_Changed();
    void tryThread();
    void smessage();
    void write(QByteArray bytesForWrite);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

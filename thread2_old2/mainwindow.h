#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

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

private slots:
    void loadFile();    
    void encrypt();
    void textChange();
    void testBTN_click();

private:
    Ui::MainWindow *ui;
    QByteArray bytes;
};

#endif // MAINWINDOW_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QByteArray bytes;

private:
    Ui::MainWindow *ui;

private slots:
    void openFile();
    void encrypt();
};

#endif // MAINWINDOW_H

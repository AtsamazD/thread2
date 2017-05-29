#include "threadtry.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    threadTry w;
    w.show();

    return a.exec();
}

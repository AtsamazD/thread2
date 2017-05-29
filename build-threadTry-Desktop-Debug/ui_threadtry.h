/********************************************************************************
** Form generated from reading UI file 'threadtry.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADTRY_H
#define UI_THREADTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_threadTry
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *threadTry)
    {
        if (threadTry->objectName().isEmpty())
            threadTry->setObjectName(QStringLiteral("threadTry"));
        threadTry->resize(400, 300);
        centralWidget = new QWidget(threadTry);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 100, 88, 34));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 113, 32));
        threadTry->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(threadTry);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 30));
        threadTry->setMenuBar(menuBar);
        mainToolBar = new QToolBar(threadTry);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        threadTry->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(threadTry);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        threadTry->setStatusBar(statusBar);

        retranslateUi(threadTry);

        QMetaObject::connectSlotsByName(threadTry);
    } // setupUi

    void retranslateUi(QMainWindow *threadTry)
    {
        threadTry->setWindowTitle(QApplication::translate("threadTry", "threadTry", Q_NULLPTR));
        pushButton->setText(QApplication::translate("threadTry", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class threadTry: public Ui_threadTry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADTRY_H

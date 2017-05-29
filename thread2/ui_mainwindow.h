/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *information;
    QGroupBox *tech_info_2;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *tech_info;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *platformLBL;
    QLabel *label_2;
    QLabel *osLBL;
    QLabel *label_5;
    QLabel *threadCountLBL;
    QGroupBox *test;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *perfomance_test;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *recommendLBL_3;
    QPlainTextEdit *recommendPTE_3;
    QGroupBox *selectFile;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *filePathLBL;
    QLabel *fileSizeCaptionLBL;
    QLineEdit *filePathLE;
    QLabel *fileSizeLBL;
    QPushButton *selectFileBTN;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *thread_count;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpinBox *optimThreadCountSB;
    QCheckBox *optimThreadCB;
    QGroupBox *encryptRadioBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *encryptRadio;
    QRadioButton *decryptRadio;
    QPushButton *encriptBTN;
    QLabel *statusText;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(692, 588);
        MainWindow->setMaximumSize(QSize(16777215, 800));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 600));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        information = new QHBoxLayout();
        information->setSpacing(6);
        information->setObjectName(QStringLiteral("information"));
        tech_info_2 = new QGroupBox(centralWidget);
        tech_info_2->setObjectName(QStringLiteral("tech_info_2"));
        tech_info_2->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_6 = new QHBoxLayout(tech_info_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tech_info = new QGroupBox(tech_info_2);
        tech_info->setObjectName(QStringLiteral("tech_info"));
        verticalLayout_7 = new QVBoxLayout(tech_info);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(tech_info);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        platformLBL = new QLabel(tech_info);
        platformLBL->setObjectName(QStringLiteral("platformLBL"));

        formLayout->setWidget(0, QFormLayout::FieldRole, platformLBL);

        label_2 = new QLabel(tech_info);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        osLBL = new QLabel(tech_info);
        osLBL->setObjectName(QStringLiteral("osLBL"));

        formLayout->setWidget(1, QFormLayout::FieldRole, osLBL);

        label_5 = new QLabel(tech_info);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        threadCountLBL = new QLabel(tech_info);
        threadCountLBL->setObjectName(QStringLiteral("threadCountLBL"));

        formLayout->setWidget(2, QFormLayout::FieldRole, threadCountLBL);


        verticalLayout_7->addLayout(formLayout);


        horizontalLayout_6->addWidget(tech_info);


        information->addWidget(tech_info_2);

        test = new QGroupBox(centralWidget);
        test->setObjectName(QStringLiteral("test"));
        test->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_5 = new QHBoxLayout(test);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        perfomance_test = new QGroupBox(test);
        perfomance_test->setObjectName(QStringLiteral("perfomance_test"));
        verticalLayout_12 = new QVBoxLayout(perfomance_test);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        recommendLBL_3 = new QLabel(perfomance_test);
        recommendLBL_3->setObjectName(QStringLiteral("recommendLBL_3"));

        verticalLayout_13->addWidget(recommendLBL_3);

        recommendPTE_3 = new QPlainTextEdit(perfomance_test);
        recommendPTE_3->setObjectName(QStringLiteral("recommendPTE_3"));
        recommendPTE_3->setEnabled(false);

        verticalLayout_13->addWidget(recommendPTE_3);


        verticalLayout_12->addLayout(verticalLayout_13);


        horizontalLayout_5->addWidget(perfomance_test);


        information->addWidget(test);


        verticalLayout->addLayout(information);

        selectFile = new QGroupBox(centralWidget);
        selectFile->setObjectName(QStringLiteral("selectFile"));
        selectFile->setEnabled(true);
        verticalLayout_9 = new QVBoxLayout(selectFile);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox = new QGroupBox(selectFile);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        filePathLBL = new QLabel(groupBox);
        filePathLBL->setObjectName(QStringLiteral("filePathLBL"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, filePathLBL);

        fileSizeCaptionLBL = new QLabel(groupBox);
        fileSizeCaptionLBL->setObjectName(QStringLiteral("fileSizeCaptionLBL"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, fileSizeCaptionLBL);

        filePathLE = new QLineEdit(groupBox);
        filePathLE->setObjectName(QStringLiteral("filePathLE"));
        filePathLE->setFocusPolicy(Qt::NoFocus);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, filePathLE);

        fileSizeLBL = new QLabel(groupBox);
        fileSizeLBL->setObjectName(QStringLiteral("fileSizeLBL"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, fileSizeLBL);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        selectFileBTN = new QPushButton(groupBox);
        selectFileBTN->setObjectName(QStringLiteral("selectFileBTN"));
        QFont font;
        font.setPointSize(10);
        selectFileBTN->setFont(font);

        gridLayout->addWidget(selectFileBTN, 0, 0, 1, 1);


        verticalLayout_8->addWidget(groupBox);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));

        verticalLayout_8->addLayout(verticalLayout_14);


        verticalLayout_9->addLayout(verticalLayout_8);

        thread_count = new QGroupBox(selectFile);
        thread_count->setObjectName(QStringLiteral("thread_count"));
        thread_count->setMaximumSize(QSize(16777215, 200));
        verticalLayout_6 = new QVBoxLayout(thread_count);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        optimThreadCountSB = new QSpinBox(thread_count);
        optimThreadCountSB->setObjectName(QStringLiteral("optimThreadCountSB"));
        optimThreadCountSB->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(optimThreadCountSB);

        optimThreadCB = new QCheckBox(thread_count);
        optimThreadCB->setObjectName(QStringLiteral("optimThreadCB"));

        horizontalLayout->addWidget(optimThreadCB);

        encryptRadioBox = new QGroupBox(thread_count);
        encryptRadioBox->setObjectName(QStringLiteral("encryptRadioBox"));
        horizontalLayout_3 = new QHBoxLayout(encryptRadioBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        encryptRadio = new QRadioButton(encryptRadioBox);
        encryptRadio->setObjectName(QStringLiteral("encryptRadio"));
        encryptRadio->setChecked(true);

        horizontalLayout_2->addWidget(encryptRadio);

        decryptRadio = new QRadioButton(encryptRadioBox);
        decryptRadio->setObjectName(QStringLiteral("decryptRadio"));

        horizontalLayout_2->addWidget(decryptRadio);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(encryptRadioBox);

        encriptBTN = new QPushButton(thread_count);
        encriptBTN->setObjectName(QStringLiteral("encriptBTN"));
        encriptBTN->setEnabled(true);
        encriptBTN->setBaseSize(QSize(120, 0));
        QFont font1;
        font1.setPointSize(12);
        encriptBTN->setFont(font1);

        horizontalLayout->addWidget(encriptBTN);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_9->addWidget(thread_count);


        verticalLayout->addWidget(selectFile);


        verticalLayout_3->addLayout(verticalLayout);

        statusText = new QLabel(centralWidget);
        statusText->setObjectName(QStringLiteral("statusText"));

        verticalLayout_3->addWidget(statusText);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", Q_NULLPTR));
        tech_info_2->setTitle(QString());
        tech_info->setTitle(QApplication::translate("MainWindow", "\320\242\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\260\321\202\321\204\320\276\321\200\320\274\320\260:", Q_NULLPTR));
        platformLBL->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260:", Q_NULLPTR));
        osLBL->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213\321\205 \320\277\320\276\321\202\320\276\320\272\320\276\320\262:", Q_NULLPTR));
        threadCountLBL->setText(QString());
        test->setTitle(QString());
        perfomance_test->setTitle(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", Q_NULLPTR));
        recommendLBL_3->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\272\320\276\320\274\320\265\320\275\320\264\320\260\321\206\320\270\320\270:", Q_NULLPTR));
        selectFile->setTitle(QApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        groupBox->setTitle(QString());
        filePathLBL->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203:", Q_NULLPTR));
        fileSizeCaptionLBL->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\204\320\260\320\271\320\273\320\260 (\320\234\320\221):", Q_NULLPTR));
        fileSizeLBL->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        selectFileBTN->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        thread_count->setTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\264\320\265\320\271\321\201\321\202\320\262\320\276\320\262\320\260\320\275\320\275\321\213\321\205 \320\277\320\276\321\202\320\276\320\272\320\276\320\262 \320\277\321\200\320\270 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\270", Q_NULLPTR));
        optimThreadCB->setText(QApplication::translate("MainWindow", "\320\236\320\277\321\202\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265", Q_NULLPTR));
        encryptRadioBox->setTitle(QString());
        encryptRadio->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        decryptRadio->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        encriptBTN->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        statusText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

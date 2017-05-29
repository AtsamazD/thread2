#-------------------------------------------------
#
# Project created by QtCreator 2017-04-18T10:35:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thread2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qblowfish-master/src/qblowfish.cpp

HEADERS  += mainwindow.h \
    qblowfish-master/src/qblowfish.h \
    qblowfish-master/src/qblowfish_p.h

FORMS    += \
    mainwindow.ui

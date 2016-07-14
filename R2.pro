#-------------------------------------------------
#
# Project created by QtCreator 2015-12-22T18:14:52
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = R2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    creadwritefile.cpp

HEADERS  += mainwindow.h \
    creadwritefile.h

FORMS    += mainwindow.ui

RESOURCES += resource.qrc

RC_FILE = resource.rc

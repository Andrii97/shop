#-------------------------------------------------
#
# Project created by QtCreator 2015-02-22T15:46:40
#
#-------------------------------------------------

QT       += core gui
QT       +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = e-shop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    registration.cpp

HEADERS  += mainwindow.h \
    registration.h

FORMS    += mainwindow.ui \
    registration.ui

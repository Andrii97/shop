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
    registration.cpp \
    manager.cpp \
    product_add.cpp

HEADERS  += mainwindow.h \
    registration.h \
    manager.h \
    product_add.h

FORMS    += mainwindow.ui \
    registration.ui \
    manager.ui \
    product_add.ui

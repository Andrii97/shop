#-------------------------------------------------
#
# Project created by QtCreator 2015-02-18T17:51:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    authorization.cpp \
    sqlite3.c

HEADERS  += mainwindow.h \
    sqlite3.h

FORMS    += mainwindow.ui

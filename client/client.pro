#-------------------------------------------------
#
# Project created by QtCreator 2014-06-17T11:36:23
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = client
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    worker.cpp


INCLUDEPATH += "/usr/local/bin/include/"

LIBS += "/usr/local/lib/liblua.a"

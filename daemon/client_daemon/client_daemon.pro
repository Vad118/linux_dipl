#-------------------------------------------------
#
# Project created by QtCreator 2014-06-17T22:06:22
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = client_daemon
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

INCLUDEPATH += "/usr/local/bin/include/"

LIBS += "/usr/local/lib/liblua.a"

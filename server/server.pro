#-------------------------------------------------
#
# Project created by QtCreator 2014-06-17T23:27:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app

SOURCES += \
    dispatcher.cpp \
    graphics.cpp \
    mainwindow.cpp \
    monitoring.cpp \
    server.cpp \
    main.cpp \
    monitoringsocket.cpp

HEADERS  += \
    dispatcher.h \
    graphics.h \
    mainwindow.h \
    monitoring.h \
    server.h \
    monitoringsocket.h

FORMS    += mainwindow.ui

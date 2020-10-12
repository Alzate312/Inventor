#-------------------------------------------------
#
# Project created by QtCreator 2018-04-08T22:19:53
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Inventor-GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/include/GL/

LIBS += -L"/usr/include/GL/" -lglfw -lglew

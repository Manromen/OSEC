#-------------------------------------------------
#
# Project created by QtCreator 2014-04-18T19:42:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = osec
TEMPLATE = app

# Inlcude our app source files
INCLUDEPATH += ../source

SOURCES += main.cpp\
    MainChatWindow.cpp

SOURCES += ../source/App.cpp

HEADERS  += \
    MainChatWindow.h

FORMS    += \
    MainChatWindow.ui

# Mac OS X minimum version 10.7
macx {
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.7
    QMAKE_CFLAGS += -mmacosx-version-min=10.7
}

# Add C++11
QMAKE_CXXFLAGS += -std=c++11 -stdlib=libc++
QMAKE_CFLAGS += -std=c++11 -stdlib=libc++
CONFIG += c++11

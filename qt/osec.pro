# Add more folders to ship with the application, here
folder_01.source = qml/osec
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

SOURCES += ../source/App.cpp

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp

# Inlcude our main source
INCLUDEPATH += ../source

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

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

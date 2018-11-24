include($$PWD/Design_mode.pri)
QT += core testlib
QT -= gui

CONFIG += c++11

TARGET = Design_mode
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

include($$PWD/src/simple_factory.pri)

INCLUDEPATH +=$$PWD/src

SOURCES += main.cpp \
    test/DesignTest.cpp \
    test/TestSimpleFactory.cpp

HEADERS += \
    test/DesignTest.h \
    test/TestSimpleFactory.h

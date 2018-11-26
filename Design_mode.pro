include($$PWD/Design_mode.pri)
QT += core testlib
QT -= gui

CONFIG += c++11

TARGET = Design_mode
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

include($$PWD/src/simple_factory.pri)
include($$PWD/src/factory_methor.pri)
include($$PWD/src/abstract_factory.pri)

INCLUDEPATH +=$$PWD/src
INCLUDEPATH +=$$PWD/src/factory_methor
INCLUDEPATH +=$$PWD/src/simple_factory
INCLUDEPATH +=$$PWD/src/abstract_factory


SOURCES += main.cpp \
    test/DesignTest.cpp \
    test/TestSimpleFactory.cpp \
    test/TestFactoryMethor.cpp \
    test/TestAbstractFactory.cpp

HEADERS += \
    test/DesignTest.h \
    test/TestSimpleFactory.h \
    test/TestFactoryMethor.h \
    test/TestHelper.h \
    test/TestAbstractFactory.h

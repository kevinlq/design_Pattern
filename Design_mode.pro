QT += core
QT -= gui

CONFIG += c++11

TARGET = Design_mode
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

win32{
    CONFIG += debug_and_release
    CONFIG(release, debug|release) {
            target_path = build_/release
            TARGET  = Design_mode
        } else {
            target_path = build_/debug
            TARGET  = Design_mode
        }
        DESTDIR = bin
        MOC_DIR = $$target_path/moc
        RCC_DIR = $$target_path/rcc
        UI_DIR  = $$target_path/ui
        OBJECTS_DIR = $$target_path/obj
}

DEPENDPATH += bin

SOURCES += main.cpp

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DESTDIR = $$PWD/../bin

include($$PWD/cell/cell.pri)
include($$PWD/lib/lib.pri)

FORMS += \
    dlg_login.ui

HEADERS += \
    dlg_login.h

SOURCES += \
    dlg_login.cpp

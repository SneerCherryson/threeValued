QT += core
QT -= gui

CONFIG += c++11

TARGET = threeValued
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Sources/main.cpp \
    main.cpp

HEADERS += \
    Headers/lukasiewiczlogic.hpp \
    lukasiewiczlogic.hpp

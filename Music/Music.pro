#-------------------------------------------------
#
# Project created by QtCreator 2013-03-30T12:41:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Music
TEMPLATE = app


SOURCES += main.cpp \
    music.cpp \
    playaudio.cpp

HEADERS  += \
    music.h \
    playaudio.h

FORMS    += music.ui

RESOURCES += \
    Resources.qrc

# Lib Fmod

# Par default : CPU - x86_64
CPU = x86_64
FLAGS += -m64

# Par default : Debug mode
FLAGS += -g
SUFFIX = L

INCLUDEPATH += /home/asifadam93/Bureau/fMod_Home/myFMod/UI/Music/inc/
LIBS += -L/home/asifadam93/Bureau/fMod_Home/myFMod/UI/Music/lib/x86_64/  -lfmod

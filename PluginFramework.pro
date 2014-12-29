#-------------------------------------------------
#
# Project created by Creator 2013-09-06T08:30:53
#
#-------------------------------------------------

QT    += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pluginframework
TEMPLATE = lib
CONFIG += staticlib
win32:DESTDIR += $$OUT_PWD

CONFIG(release, release|debug) {
    DEFINES -= WK2_DEBUG
    # We don't want the objects, or MOC sources
    # in the project directory, so tell qmake
    # where to put them
    unix:OBJECTS_DIR = obj/release.unix
    win32:OBJECTS_DIR = obj/release.win32
    MOC_DIR = moc/release
}

CONFIG(debug, debug|release) {
    DEFINES += WK2_DEBUG
    # We don't want the objects, or MOC sources
    # in the project directory, so tell qmake
    # where to put them
    unix:OBJECTS_DIR = obj/debug.unix
    win32:OBJECTS_DIR = obj/debug.win32
    MOC_DIR = moc/debug
}

SOURCES += \
    src/DocumentBase.cpp \
    src/GameDocument.cpp \
    src/PluginSettingsDialog.cpp

INCLUDEPATH += include

HEADERS += \
    include/PluginInterface.hpp \
    include/DocumentBase.hpp \
    include/GameDocument.hpp \
    include/WiiKeyManagerBase.hpp \
    include/MainWindowBase.hpp \
    include/PluginSettingsDialog.hpp



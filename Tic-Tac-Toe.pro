QT -= gui
QT += widgets

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cellbutton/cellbutton.cpp \
        main.cpp \
        windows/game.cpp \
        windows/gamewindow.cpp \
        windows/mainwindow.cpp \
        windows/settings.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    windows/game.ui \
    windows/gamewindow.ui \
    windows/mainwindow.ui \
    windows/settings.ui

HEADERS += \
    cellbutton/cellbutton.h \
    windows/game.h \
    windows/gamewindow.h \
    windows/mainwindow.h \
    windows/map_size.h \
    windows/settings.h \
    windows/ui_game.h \
    windows/ui_gamewindow.h \
    windows/ui_mainwindow.h \
    windows/ui_settings.h

RC_ICONS += icon2.ico

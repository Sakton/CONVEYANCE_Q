QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Modules/Adress/theadressform.cpp \
    Modules/Autopark/theautomobilform.cpp \
    Modules/BlackList/theblacklistform.cpp \
    Modules/Driver/thedriverform.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Modules/Adress/theadressform.h \
    Modules/Autopark/theautomobilform.h \
    Modules/BlackList/theblacklistform.h \
    Modules/Driver/thedriverform.h \
    mainwindow.h

FORMS += \
    Modules/Adress/theadressform.ui \
    Modules/Autopark/theautomobilform.ui \
    Modules/BlackList/theblacklistform.ui \
    Modules/Driver/thedriverform.ui \
    mainwindow.ui

TRANSLATIONS += \
    CONVEYANCE_Q_pl_PL.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

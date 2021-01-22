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
    Modules/Client/theclientform.cpp \
    Modules/Driver/thedriverform.cpp \
    Modules/Land/thelandform.cpp \
    Modules/Note/thenoteform.cpp \
    Modules/Orders/theorderform.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Modules/Adress/theadressform.h \
    Modules/Autopark/theautomobilform.h \
    Modules/BlackList/theblacklistform.h \
    Modules/Client/theclientform.h \
    Modules/Driver/thedriverform.h \
    Modules/Land/thelandform.h \
    Modules/Note/thenoteform.h \
    Modules/Orders/theorderform.h \
    mainwindow.h

FORMS += \
    Modules/Adress/theadressform.ui \
    Modules/Autopark/theautomobilform.ui \
    Modules/BlackList/theblacklistform.ui \
    Modules/Client/theclientform.ui \
    Modules/Driver/thedriverform.ui \
    Modules/Land/thelandform.ui \
    Modules/Note/thenoteform.ui \
    Modules/Orders/theorderform.ui \
    mainwindow.ui

TRANSLATIONS += \
    CONVEYANCE_Q_pl_PL.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Convection/naming.txt

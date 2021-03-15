QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Modules/Adress/theadressform.cpp \
    Modules/Autopark/AutoBrand/theautobrandform.cpp \
    Modules/Autopark/Delegat/DelegatForm/thedelegateformaauto.cpp \
    Modules/Autopark/Delegat/delegateauto.cpp \
    Modules/Autopark/Model/modellistauto.cpp \
    Modules/Autopark/Template/templateformauto.cpp \
    Modules/Autopark/Template/templatetheautomobilform.cpp \
    Modules/Autopark/Validator/validatorautodata.cpp \
    Modules/Autopark/View/InsertFormAuto/insertformauto.cpp \
    Modules/Autopark/View/UpdateFormAuto/updateformauto.cpp \
    Modules/Autopark/View/viewerdataautopark.cpp \
    Modules/Autopark/automobil.cpp \
    Modules/Autopark/theautomobilform.cpp \
    Modules/BlackList/theblacklistform.cpp \
    Modules/Client/theclientform.cpp \
    Modules/ContactPerson/thecontactpersonform.cpp \
    Modules/Driver/thedriverform.cpp \
    Modules/Country/thecountryform.cpp \
    Modules/Note/thenoteform.cpp \
    Modules/Orders/theorderform.cpp \
    Modules/Payment/thepaymentform.cpp \
    Modules/Post/thepostform.cpp \
    Utility/CreatorDbConveyance/conveyancesqldatabase.cpp \
    Utility/CreatorDbConveyance/dbcreator.cpp \
    Utility/CreatorDbConveyance/dbcreator.cpp \
    Utility/CreatorDbConveyance/dbtablecreator.cpp \
    Utility/CreatorDbConveyance/errordatabase.cpp \
    Utility/CreatorDbConveyance/querydriver.cpp \
    Utility/DataForCreateDBForm/thedataforcreatedbform.cpp \
    Utility/User/user.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Modules/Adress/theadressform.h \
    Modules/Autopark/AutoBrand/theautobrandform.h \
    Modules/Autopark/Delegat/DelegatForm/thedelegateformaauto.h \
    Modules/Autopark/Delegat/delegateauto.h \
    Modules/Autopark/Model/modellistauto.h \
    Modules/Autopark/Template/templateformauto.h \
    Modules/Autopark/Template/templatetheautomobilform.h \
    Modules/Autopark/Validator/validatorautodata.h \
    Modules/Autopark/View/InsertFormAuto/insertformauto.h \
    Modules/Autopark/View/UpdateFormAuto/updateformauto.h \
    Modules/Autopark/View/viewerdataautopark.h \
    Modules/Autopark/automobil.h \
    Modules/Autopark/theautomobilform.h \
    Modules/BlackList/theblacklistform.h \
    Modules/Client/theclientform.h \
    Modules/ContactPerson/thecontactpersonform.h \
    Modules/Driver/thedriverform.h \
    Modules/Country/thecountryform.h \
    Modules/Note/thenoteform.h \
    Modules/Orders/theorderform.h \
    Modules/Payment/thepaymentform.h \
    Modules/Post/thepostform.h \
    Utility/AllConstants.h \
    Utility/CreatorDbConveyance/conveyancesqldatabase.h \
    Utility/CreatorDbConveyance/dbcreator.h \
    Utility/CreatorDbConveyance/dbtablecreator.h \
    Utility/CreatorDbConveyance/errordatabase.h \
    Utility/CreatorDbConveyance/querydriver.h \
    Utility/DataForCreateDBForm/thedataforcreatedbform.h \
    Utility/User/user.h \
    mainwindow.h

FORMS += \
    Modules/Adress/theadressform.ui \
    Modules/Autopark/AutoBrand/theautobrandform.ui \
    Modules/Autopark/Delegat/DelegatForm/thedelegateformaauto.ui \
    Modules/Autopark/Template/templateformauto.ui \
    Modules/Autopark/Template/templatetheautomobilform.ui \
    Modules/Autopark/View/InsertFormAuto/insertformauto.ui \
    Modules/Autopark/View/UpdateFormAuto/updateformauto.ui \
    Modules/Autopark/View/viewerdataautopark.ui \
    Modules/Autopark/theautomobilform.ui \
    Modules/BlackList/theblacklistform.ui \
    Modules/Client/theclientform.ui \
    Modules/ContactPerson/thecontactpersonform.ui \
    Modules/Driver/thedriverform.ui \
    Modules/Country/thecountryform.ui \
    Modules/Note/thenoteform.ui \
    Modules/Orders/theorderform.ui \
    Modules/Payment/thepaymentform.ui \
    Modules/Post/thepostform.ui \
    Utility/DataForCreateDBForm/thedataforcreatedbform.ui \
    mainwindow.ui

TRANSLATIONS += \
    CONVEYANCE_Q_pl_PL.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    BUGS \
    Convection/naming.txt \
    DIAGRAMS_AND_OTHER/DB_Description.ods \
    DIAGRAMS_AND_OTHER/autoparkfragment.qmodel \
    TESTES/TESTES_DATA_FILES_FROM_CUSTOMERS/Adresses.ods \
    TESTES/TESTES_DATA_FILES_FROM_CUSTOMERS/Adresses.xls

RESOURCES += \
	img/image.qrc

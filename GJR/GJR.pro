QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controllers/createAirplane.cpp \
    controllers/createFlight.cpp \
    controllers/createTicket.cpp \
    controllers/deleteAirplane.cpp \
    controllers/deleteFlight.cpp \
    controllers/deleteTicket.cpp \
    controllers/loginScreen.cpp \
    controllers/readAirplane.cpp \
    controllers/readFlight.cpp \
    controllers/readTicket.cpp \
    controllers/updateAirplane.cpp \
    controllers/updateFlight.cpp \
    controllers/updateTicket.cpp \
    main.cpp \
    controllers/homeScreen.cpp \
    controllers/manageFlight.cpp \
    controllers/manageAirplane.cpp \
    controllers/manageTicket.cpp

HEADERS += \
    controllers/createAirplane.h \
    controllers/createFlight.h \
    controllers/createTicket.h \
    controllers/deleteAirplane.h \
    controllers/deleteFlight.h \
    controllers/deleteTicket.h \
    controllers/loginScreen.h \
    controllers/homeScreen.h \
    controllers/manageFlight.h \
    controllers/manageAirplane.h \
    controllers/manageTicket.h \
    controllers/readAirplane.h \
    controllers/readFlight.h \
    controllers/readTicket.h \
    controllers/updateAirplane.h \
    controllers/updateFlight.h \
    controllers/updateTicket.h

FORMS += \
    views/deleteAirplane.ui \
    views/deleteFlight.ui \
    views/deleteTicket.ui \
    views/readAirplane.ui \
    views/readFlight.ui \
    views/readTicket.ui \
    views/updateAirplane.ui \
    views/updateFlight.ui \
    views/updateTicket.ui \
    views/createAirplane.ui \
    views/createFlight.ui \
    views/createTicket.ui \
    views/homeScreen.ui \
    views/loginScreen.ui \
    views/manageAirplane.ui \
    views/manageFlight.ui \
    views/manageTicket.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

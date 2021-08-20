QT -= gui
QT += sql

TEMPLATE = lib
DEFINES += API_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    lib/airplaneImpl.cpp \
    lib/containerImpl.cpp \
    lib/flightImpl.cpp \
    lib/ticketImpl.cpp

HEADERS += \
    includes/API_global.h \
    includes/API_global.h \
    includes/airplane.h \
    includes/airplaneImpl.h \
    includes/container.h \
    includes/containerImpl.h \
    includes/flight.h \
    includes/flightImpl.h \
    includes/handleBody.h \
    includes/ticket.h \
    includes/ticketImpl.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

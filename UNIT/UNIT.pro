QT -= gui
QT += sql

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEPENDPATH  += . $$PWD/../API/includes
INCLUDEPATH +=   $$PWD/../API/includes
LIBS += -L$$PWD/../bin/API/debug/ -lAPI
LIBS += -L$$PWD/../bin/API/release/ -lAPI
LIBS += -L$$PWD/../bin/API/ -lAPI
LIBS += -L$$PWD/../bin/API/ -lAPI

SOURCES += \
        main.cpp \
        unit_airplane.cpp \
        unit_container.cpp \
        unit_flight.cpp \
        unit_ticket.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    unit_airplane.h \
    unit_container.h \
    unit_flight.h \
    unit_ticket.h

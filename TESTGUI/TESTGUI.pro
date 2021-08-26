QT += testlib gui sql widgets
CONFIG += qt warn_on depend_includepath testcase c++11

TEMPLATE = app

INCLUDEPATH +=   $$PWD/../API/includes
DEPENDPATH  += . $$PWD/../API/includes
LIBS += -L$$PWD/../bin/API/debug/ -lAPI
LIBS += -L$$PWD/../bin/API/release/ -lAPI
LIBS += -L$$PWD/../bin/API/ -lAPI
LIBS += -L$$PWD/../bin/API/ -lAPI

LIBS += -L$$PWD/../bin/GUI/debug/
LIBS += -L$$PWD/../bin/GUI/release/
LIBS += -L$$PWD/../bin/GUI/
LIBS += -L$$PWD/../bin/GUI/

SOURCES +=  \
    ../GJR/controllers/createAirplane.cpp \
    ../GJR/controllers/createFlight.cpp \
    ../GJR/controllers/createTicket.cpp \
    ../GJR/controllers/createUser.cpp \
    ../GJR/controllers/loginScreen.cpp \
    ../GJR/controllers/readAirplane.cpp \
    ../GJR/controllers/readFlight.cpp \
    ../GJR/controllers/readTicket.cpp \
    ../GJR/controllers/updateAirplane.cpp \
    ../GJR/controllers/updateFlight.cpp \
    ../GJR/controllers/updateTicket.cpp \
    ../GJR/controllers/homeScreen.cpp \
    ../GJR/controllers/manageFlight.cpp \
    ../GJR/controllers/manageAirplane.cpp \
    main.cpp \
    unit/homeScreenTestGUI.cpp \
    unit/loginScreenTestGUI.cpp

HEADERS += \
        ../GJR/controllers/createAirplane.h \
        ../GJR/controllers/createFlight.h \
        ../GJR/controllers/createTicket.h \
        ../GJR/controllers/createUser.h \
        ../GJR/controllers/loginScreen.h \
        ../GJR/controllers/homeScreen.h \
        ../GJR/controllers/manageFlight.h \
        ../GJR/controllers/manageAirplane.h \
        ../GJR/controllers/readAirplane.h \
        ../GJR/controllers/readFlight.h \
        ../GJR/controllers/readTicket.h \
        ../GJR/controllers/updateAirplane.h \
        ../GJR/controllers/updateFlight.h \
        ../GJR/controllers/updateTicket.h \
        ../API/includes/API_global.h

FORMS += \
        ../GJR/views/createUser.ui \
        ../GJR/views/readAirplane.ui \
        ../GJR/views/readFlight.ui \
        ../GJR/views/readTicket.ui \
        ../GJR/views/updateAirplane.ui \
        ../GJR/views/updateFlight.ui \
        ../GJR/views/updateTicket.ui \
        ../GJR/views/createAirplane.ui \
        ../GJR/views/createFlight.ui \
        ../GJR/views/createTicket.ui \
        ../GJR/views/homeScreen.ui \
        ../GJR/views/loginScreen.ui \
        ../GJR/views/manageAirplane.ui \
        ../GJR/views/manageFlight.ui

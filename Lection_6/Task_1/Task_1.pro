TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        meleeweapon.cpp \
        rangedamage.cpp \
        weapon.cpp

HEADERS += \
    meleeweapon.h \
    rangedamage.h \
    weapon.h

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        enemy.cpp \
        inventory_manager.cpp \
        main.cpp \
        meleeweapon.cpp \
        rangeweapon.cpp \
        weapon.cpp

HEADERS += \
    enemy.h \
    inventory_manager.h \
    meleeweapon.h \
    rangeweapon.h \
    weapon.h

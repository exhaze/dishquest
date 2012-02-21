#-------------------------------------------------
#
# Project created by QtCreator 2012-02-08T11:39:10
#
#-------------------------------------------------

QT       += core gui sql

TARGET = dq_level_creator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sqlhandler.cpp \
    addleveldialog.cpp \
    ../../dishquest/Classes/LevelModel.cpp \
    ../../dishquest/Classes/DishModel.cpp \
    ../../dishquest/Classes/DirtModel.cpp \
    ../../dishquest/Classes/CleanerModel.cpp

HEADERS  += mainwindow.h \
    sqlhandler.h \
    addleveldialog.h \
    ../../dishquest/Classes/LevelModel.h \
    ../../dishquest/Classes/DishModel.h \
    ../../dishquest/Classes/DirtModel.h \
    ../../dishquest/Classes/CleanerModel.h

FORMS    += mainwindow.ui \
    addleveldialog.ui


















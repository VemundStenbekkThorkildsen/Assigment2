TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH +=C:/qt/armadillo-8100.1/include
DEPENDPATH +=C:/qt/armadillo-8100.1/include
LIBS += -LC:/Qt/armadillo-8.100.1/examples/lib_win64 -llapack_win64_MT -lblas_win64_MT

SOURCES += main.cpp \
    jacobi.cpp \
    maxoffdiag.cpp \
    rotate.cpp

HEADERS += \
    jacobi.h

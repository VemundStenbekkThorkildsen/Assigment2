TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

<<<<<<< HEAD:src/cpp/cpp.pro
LIBS += -L/usr/local/lib
LIBS += -larmadillo -llapack -lblas
INCLUDEPATH += /usr/local/include

=======
>>>>>>> 048734d1aefc76afd343ca0125b0e01f8a297d23:src/sanders/Project2.pro
SOURCES += main.cpp \
    jacobi.cpp \
    maxoffdiag.cpp \
    rotate.cpp
INCLUDEPATH += C:/Qt/armadillo-8.100.1/include
DEPENDPATH += C:/Qt/armadillo-8.100.1/include
LIBS += -LC:/Qt/armadillo-8.100.1/examples/lib_win64 -llapack_win64_MT -lblas_win64_MT

HEADERS += \
    jaco.h

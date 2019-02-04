
TEMPLATE = app
TARGET = openpiv-c++

CONFIG *= warn_on
CONFIG *= silent

unix {
  MOC_DIR     = .moc
  OBJECTS_DIR = .obj
  UI_DIR      = .ui
  RCC_DIR     = .rcc
}

win32 {
  MOC_DIR     = _moc
  OBJECTS_DIR = _obj
  UI_DIR      = _ui
  RCC_DIR     = _rcc
}

QT += xml
QT += widgets

DEPENDPATH += .. \
    src \
    ui \
    ../share/icons \
    ../share/images
INCLUDEPATH += .. \
    src

include( libtiff.pri )
include( fftw.pri )

SOURCES += main.cpp \
    mainwindow.cpp \
    imagedata.cpp \
    pivdisplay.cpp \
    imagepaint.cpp \
    imagelist.cpp \
    importimages.cpp \
    importimagelist.cpp \
    maskdropdown.cpp \
    itempaint.cpp \
    settings.cpp \
    processing.cpp \
    fftcrosscorrelate.cpp \
    pivdata.cpp \
    gaussiansubpixel.cpp \
    datacontainer.cpp \
    filters.cpp \
    analysis.cpp \
    filteroptions.cpp \
    pivengine.cpp \
    output.cpp \
    vectorlist.cpp \
    batchwindow.cpp \
    pivthread.cpp \
    outputthread.cpp \
    colourbar.cpp \
    session.cpp \
    generategrid.cpp
HEADERS += mainwindow.h \
    imagedata.h \
    pivdisplay.h \
    imagepaint.h \
    imagelist.h \
    importimages.h \
    importimagelist.h \
    maskdropdown.h \
    itempaint.h \
    settings.h \
    processing.h \
    fftcrosscorrelate.h \
    pivdata.h \
    gaussiansubpixel.h \
    datacontainer.h \
    filters.h \
    analysis.h \
    filteroptions.h \
    pivengine.h \
    output.h \
    vectorlist.h \
    batchwindow.h \
    pivthread.h \
    outputthread.h \
    colourbar.h \
    session.h \
    generategrid.h
FORMS += ../ui/mainwindow.ui \
    ../ui/importimages.ui \
    ../ui/batchwindow.ui
RESOURCES += ../share/icons/icons.qrc \
    ../share/images/images.qrc





/****************************************************************************
** Meta object code from reading C++ file 'datacontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../datacontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datacontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataContainer_t {
    QByteArrayData data[15];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataContainer_t qt_meta_stringdata_DataContainer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataContainer"
QT_MOC_LITERAL(1, 14, 14), // "imagesImported"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "vectorListUpdated"
QT_MOC_LITERAL(4, 48, 10), // "maskLoaded"
QT_MOC_LITERAL(5, 59, 15), // "setCurrentIndex"
QT_MOC_LITERAL(6, 75, 16), // "currentIndexPass"
QT_MOC_LITERAL(7, 92, 7), // "isAPass"
QT_MOC_LITERAL(8, 100, 17), // "setCurrentPivData"
QT_MOC_LITERAL(9, 118, 8), // "PivData*"
QT_MOC_LITERAL(10, 127, 11), // "pivDataPass"
QT_MOC_LITERAL(11, 139, 13), // "setVectorFile"
QT_MOC_LITERAL(12, 153, 5), // "index"
QT_MOC_LITERAL(13, 159, 8), // "fileName"
QT_MOC_LITERAL(14, 168, 10) // "importMask"

    },
    "DataContainer\0imagesImported\0\0"
    "vectorListUpdated\0maskLoaded\0"
    "setCurrentIndex\0currentIndexPass\0"
    "isAPass\0setCurrentPivData\0PivData*\0"
    "pivDataPass\0setVectorFile\0index\0"
    "fileName\0importMask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   52,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      11,    2,   60,    2, 0x0a /* Public */,
      14,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   13,
    QMetaType::Void,

       0        // eod
};

void DataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataContainer *_t = static_cast<DataContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imagesImported(); break;
        case 1: _t->vectorListUpdated(); break;
        case 2: _t->maskLoaded(); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setCurrentPivData((*reinterpret_cast< PivData*(*)>(_a[1]))); break;
        case 5: _t->setVectorFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->importMask(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataContainer::imagesImported)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataContainer::vectorListUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DataContainer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataContainer::maskLoaded)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DataContainer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataContainer.data,
      qt_meta_data_DataContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataContainer.stringdata0))
        return static_cast<void*>(const_cast< DataContainer*>(this));
    return QObject::qt_metacast(_clname);
}

int DataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataContainer::imagesImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DataContainer::vectorListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DataContainer::maskLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

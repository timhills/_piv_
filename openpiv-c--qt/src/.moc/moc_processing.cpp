/****************************************************************************
** Meta object code from reading C++ file 'processing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../processing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Processing_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Processing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Processing_t qt_meta_stringdata_Processing = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Processing"
QT_MOC_LITERAL(1, 11, 16), // "currentProcessed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "batchProcessed"
QT_MOC_LITERAL(4, 44, 23), // "processCurrentImagePair"
QT_MOC_LITERAL(5, 68, 12), // "processBatch"
QT_MOC_LITERAL(6, 81, 17), // "launchBatchWindow"
QT_MOC_LITERAL(7, 99, 18), // "emitBatchProcessed"
QT_MOC_LITERAL(8, 118, 9) // "stopBatch"

    },
    "Processing\0currentProcessed\0\0"
    "batchProcessed\0processCurrentImagePair\0"
    "processBatch\0launchBatchWindow\0"
    "emitBatchProcessed\0stopBatch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Processing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    0,   54,    2, 0x09 /* Protected */,
       8,    0,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Processing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Processing *_t = static_cast<Processing *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentProcessed(); break;
        case 1: _t->batchProcessed(); break;
        case 2: _t->processCurrentImagePair(); break;
        case 3: _t->processBatch(); break;
        case 4: _t->launchBatchWindow(); break;
        case 5: _t->emitBatchProcessed(); break;
        case 6: _t->stopBatch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Processing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processing::currentProcessed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Processing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processing::batchProcessed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Processing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Processing.data,
      qt_meta_data_Processing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Processing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Processing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Processing.stringdata0))
        return static_cast<void*>(const_cast< Processing*>(this));
    return QObject::qt_metacast(_clname);
}

int Processing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Processing::currentProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Processing::batchProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'itempaint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../itempaint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itempaint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ItemPaint_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemPaint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemPaint_t qt_meta_stringdata_ItemPaint = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ItemPaint"
QT_MOC_LITERAL(1, 10, 9), // "gridDrawn"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12) // "vectorsDrawn"

    },
    "ItemPaint\0gridDrawn\0\0vectorsDrawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemPaint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ItemPaint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemPaint *_t = static_cast<ItemPaint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridDrawn(); break;
        case 1: _t->vectorsDrawn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemPaint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemPaint::gridDrawn)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemPaint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemPaint::vectorsDrawn)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ItemPaint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ItemPaint.data,
      qt_meta_data_ItemPaint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemPaint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemPaint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemPaint.stringdata0))
        return static_cast<void*>(const_cast< ItemPaint*>(this));
    return QObject::qt_metacast(_clname);
}

int ItemPaint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ItemPaint::gridDrawn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ItemPaint::vectorsDrawn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

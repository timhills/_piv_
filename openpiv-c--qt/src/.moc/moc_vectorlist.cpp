/****************************************************************************
** Meta object code from reading C++ file 'vectorlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vectorlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vectorlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VectorList_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VectorList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VectorList_t qt_meta_stringdata_VectorList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VectorList"
QT_MOC_LITERAL(1, 11, 11), // "fileClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "rowSelected"
QT_MOC_LITERAL(4, 36, 8), // "populate"
QT_MOC_LITERAL(5, 45, 6), // "update"
QT_MOC_LITERAL(6, 52, 12), // "highlightRow"
QT_MOC_LITERAL(7, 65, 14), // "clearHighlight"
QT_MOC_LITERAL(8, 80, 9), // "rowSelect"
QT_MOC_LITERAL(9, 90, 3), // "row"
QT_MOC_LITERAL(10, 94, 6), // "column"
QT_MOC_LITERAL(11, 101, 16) // "rowDoubleClicked"

    },
    "VectorList\0fileClicked\0\0rowSelected\0"
    "populate\0update\0highlightRow\0"
    "clearHighlight\0rowSelect\0row\0column\0"
    "rowDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VectorList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       6,    1,   54,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,
       8,    2,   58,    2, 0x09 /* Protected */,
      11,    2,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void VectorList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VectorList *_t = static_cast<VectorList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->populate(); break;
        case 2: _t->update(); break;
        case 3: _t->highlightRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearHighlight(); break;
        case 5: _t->rowSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rowDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VectorList::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VectorList::fileClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VectorList::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_VectorList.data,
      qt_meta_data_VectorList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VectorList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VectorList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VectorList.stringdata0))
        return static_cast<void*>(const_cast< VectorList*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int VectorList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
void VectorList::fileClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

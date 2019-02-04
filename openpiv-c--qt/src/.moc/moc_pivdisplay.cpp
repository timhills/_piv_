/****************************************************************************
** Meta object code from reading C++ file 'pivdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pivdisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pivdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PivDisplay_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PivDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PivDisplay_t qt_meta_stringdata_PivDisplay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PivDisplay"
QT_MOC_LITERAL(1, 11, 10), // "mouseMoved"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "pointPass"
QT_MOC_LITERAL(4, 33, 11), // "refreshView"
QT_MOC_LITERAL(5, 45, 14), // "displayCurrent"
QT_MOC_LITERAL(6, 60, 11), // "maskToggled"
QT_MOC_LITERAL(7, 72, 6), // "isTrue"
QT_MOC_LITERAL(8, 79, 14), // "vectorsToggled"
QT_MOC_LITERAL(9, 94, 6), // "zoomIn"
QT_MOC_LITERAL(10, 101, 7), // "zoomOut"
QT_MOC_LITERAL(11, 109, 7), // "zoomFit"
QT_MOC_LITERAL(12, 117, 14) // "vectorsChanged"

    },
    "PivDisplay\0mouseMoved\0\0pointPass\0"
    "refreshView\0displayCurrent\0maskToggled\0"
    "isTrue\0vectorsToggled\0zoomIn\0zoomOut\0"
    "zoomFit\0vectorsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PivDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PivDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PivDisplay *_t = static_cast<PivDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->refreshView(); break;
        case 2: _t->displayCurrent(); break;
        case 3: _t->maskToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->vectorsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->zoomIn(); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->zoomFit(); break;
        case 8: _t->vectorsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PivDisplay::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PivDisplay::mouseMoved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PivDisplay::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_PivDisplay.data,
      qt_meta_data_PivDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PivDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PivDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PivDisplay.stringdata0))
        return static_cast<void*>(const_cast< PivDisplay*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int PivDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PivDisplay::mouseMoved(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

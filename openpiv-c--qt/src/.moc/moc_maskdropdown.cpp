/****************************************************************************
** Meta object code from reading C++ file 'maskdropdown.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maskdropdown.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maskdropdown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MaskDropDown_t {
    QByteArrayData data[12];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaskDropDown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaskDropDown_t qt_meta_stringdata_MaskDropDown = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MaskDropDown"
QT_MOC_LITERAL(1, 13, 17), // "importMaskClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "gridToggled"
QT_MOC_LITERAL(4, 44, 6), // "isTrue"
QT_MOC_LITERAL(5, 51, 9), // "clearMask"
QT_MOC_LITERAL(6, 61, 11), // "imageLoaded"
QT_MOC_LITERAL(7, 73, 10), // "maskLoaded"
QT_MOC_LITERAL(8, 84, 13), // "importTrigger"
QT_MOC_LITERAL(9, 98, 11), // "gridTrigger"
QT_MOC_LITERAL(10, 110, 10), // "checkState"
QT_MOC_LITERAL(11, 121, 12) // "clearTrigger"

    },
    "MaskDropDown\0importMaskClicked\0\0"
    "gridToggled\0isTrue\0clearMask\0imageLoaded\0"
    "maskLoaded\0importTrigger\0gridTrigger\0"
    "checkState\0clearTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaskDropDown[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   61,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x09 /* Protected */,
       9,    1,   64,    2, 0x09 /* Protected */,
      11,    0,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void MaskDropDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaskDropDown *_t = static_cast<MaskDropDown *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->importMaskClicked(); break;
        case 1: _t->gridToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clearMask((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->imageLoaded(); break;
        case 4: _t->maskLoaded(); break;
        case 5: _t->importTrigger(); break;
        case 6: _t->gridTrigger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->clearTrigger(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MaskDropDown::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaskDropDown::importMaskClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MaskDropDown::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaskDropDown::gridToggled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MaskDropDown::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaskDropDown::clearMask)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MaskDropDown::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_MaskDropDown.data,
      qt_meta_data_MaskDropDown,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MaskDropDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaskDropDown::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MaskDropDown.stringdata0))
        return static_cast<void*>(const_cast< MaskDropDown*>(this));
    return QMenu::qt_metacast(_clname);
}

int MaskDropDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MaskDropDown::importMaskClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MaskDropDown::gridToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MaskDropDown::clearMask(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'importimagelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../importimagelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importimagelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ImportPopUp_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImportPopUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImportPopUp_t qt_meta_stringdata_ImportPopUp = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImportPopUp"
QT_MOC_LITERAL(1, 12, 11), // "removeItems"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "flag"
QT_MOC_LITERAL(4, 30, 19), // "removeThoseSelected"
QT_MOC_LITERAL(5, 50, 22) // "removeThoseNotSelected"

    },
    "ImportPopUp\0removeItems\0\0flag\0"
    "removeThoseSelected\0removeThoseNotSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImportPopUp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImportPopUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportPopUp *_t = static_cast<ImportPopUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->removeThoseSelected(); break;
        case 2: _t->removeThoseNotSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImportPopUp::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImportPopUp::removeItems)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ImportPopUp::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_ImportPopUp.data,
      qt_meta_data_ImportPopUp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImportPopUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportPopUp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImportPopUp.stringdata0))
        return static_cast<void*>(const_cast< ImportPopUp*>(this));
    return QMenu::qt_metacast(_clname);
}

int ImportPopUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ImportPopUp::removeItems(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ImportImageList_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImportImageList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImportImageList_t qt_meta_stringdata_ImportImageList = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ImportImageList"
QT_MOC_LITERAL(1, 16, 14), // "removeSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "QList<int>"
QT_MOC_LITERAL(4, 43, 12), // "selectedPass"
QT_MOC_LITERAL(5, 56, 11), // "removeFiles"
QT_MOC_LITERAL(6, 68, 4) // "flag"

    },
    "ImportImageList\0removeSelected\0\0"
    "QList<int>\0selectedPass\0removeFiles\0"
    "flag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImportImageList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void ImportImageList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportImageList *_t = static_cast<ImportImageList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeSelected((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: _t->removeFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ImportImageList::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ImportImageList::removeSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ImportImageList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_ImportImageList.data,
      qt_meta_data_ImportImageList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ImportImageList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportImageList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ImportImageList.stringdata0))
        return static_cast<void*>(const_cast< ImportImageList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int ImportImageList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ImportImageList::removeSelected(QList<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

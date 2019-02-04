/****************************************************************************
** Meta object code from reading C++ file 'batchwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../batchwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BatchWindow_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatchWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatchWindow_t qt_meta_stringdata_BatchWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BatchWindow"
QT_MOC_LITERAL(1, 12, 12), // "startProcess"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "stopProcess"
QT_MOC_LITERAL(4, 38, 16), // "setProgressRange"
QT_MOC_LITERAL(5, 55, 3), // "max"
QT_MOC_LITERAL(6, 59, 13), // "addToProgress"
QT_MOC_LITERAL(7, 73, 14), // "refreshEnabled"
QT_MOC_LITERAL(8, 88, 14), // "commitSettings"
QT_MOC_LITERAL(9, 103, 12), // "startClicked"
QT_MOC_LITERAL(10, 116, 11) // "stopClicked"

    },
    "BatchWindow\0startProcess\0\0stopProcess\0"
    "setProgressRange\0max\0addToProgress\0"
    "refreshEnabled\0commitSettings\0"
    "startClicked\0stopClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatchWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x09 /* Protected */,
       8,    0,   61,    2, 0x09 /* Protected */,
       9,    0,   62,    2, 0x09 /* Protected */,
      10,    0,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BatchWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BatchWindow *_t = static_cast<BatchWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startProcess(); break;
        case 1: _t->stopProcess(); break;
        case 2: _t->setProgressRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addToProgress(); break;
        case 4: _t->refreshEnabled(); break;
        case 5: _t->commitSettings(); break;
        case 6: _t->startClicked(); break;
        case 7: _t->stopClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BatchWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BatchWindow::startProcess)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BatchWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BatchWindow::stopProcess)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BatchWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchWindow.data,
      qt_meta_data_BatchWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BatchWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BatchWindow.stringdata0))
        return static_cast<void*>(const_cast< BatchWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void BatchWindow::startProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BatchWindow::stopProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

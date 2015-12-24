/****************************************************************************
** Meta object code from reading C++ file 'ccheck_software_upgrade.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ccheck_software_upgrade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccheck_software_upgrade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE_t qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CCHECK_SOFTWARE_UPGRADE"
QT_MOC_LITERAL(1, 24, 9), // "s_restart"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5) // "Check"

    },
    "CCHECK_SOFTWARE_UPGRADE\0s_restart\0\0"
    "Check"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCHECK_SOFTWARE_UPGRADE[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

       0        // eod
};

void CCHECK_SOFTWARE_UPGRADE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CCHECK_SOFTWARE_UPGRADE *_t = static_cast<CCHECK_SOFTWARE_UPGRADE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s_restart(); break;
        case 1: _t->Check((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CCHECK_SOFTWARE_UPGRADE::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CCHECK_SOFTWARE_UPGRADE::s_restart)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CCHECK_SOFTWARE_UPGRADE::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE.data,
      qt_meta_data_CCHECK_SOFTWARE_UPGRADE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CCHECK_SOFTWARE_UPGRADE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCHECK_SOFTWARE_UPGRADE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CCHECK_SOFTWARE_UPGRADE.stringdata0))
        return static_cast<void*>(const_cast< CCHECK_SOFTWARE_UPGRADE*>(this));
    return QObject::qt_metacast(_clname);
}

int CCHECK_SOFTWARE_UPGRADE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CCHECK_SOFTWARE_UPGRADE::s_restart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'cselect_simulation_engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cselect_simulation_engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cselect_simulation_engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CSELECT_SIMULATION_ENGINE_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSELECT_SIMULATION_ENGINE_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSELECT_SIMULATION_ENGINE_t qt_meta_stringdata_CSELECT_SIMULATION_ENGINE = {
    {
QT_MOC_LITERAL(0, 0, 25), // "CSELECT_SIMULATION_ENGINE"
QT_MOC_LITERAL(1, 26, 22), // "s_simulationEngineName"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 21), // "InitializeConnections"
QT_MOC_LITERAL(4, 72, 22), // "SelectSimulationEngine"
QT_MOC_LITERAL(5, 95, 24), // "SendSimulationEngineName"
QT_MOC_LITERAL(6, 120, 20) // "UserSelectionChanged"

    },
    "CSELECT_SIMULATION_ENGINE\0"
    "s_simulationEngineName\0\0InitializeConnections\0"
    "SelectSimulationEngine\0SendSimulationEngineName\0"
    "UserSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSELECT_SIMULATION_ENGINE[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   48,    2, 0x0a /* Public */,
       4,    0,   49,    2, 0x0a /* Public */,
       5,    0,   50,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CSELECT_SIMULATION_ENGINE::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSELECT_SIMULATION_ENGINE *_t = static_cast<CSELECT_SIMULATION_ENGINE *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s_simulationEngineName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->InitializeConnections(); break;
        case 2: _t->SelectSimulationEngine(); break;
        case 3: _t->SendSimulationEngineName(); break;
        case 4: _t->UserSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSELECT_SIMULATION_ENGINE::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSELECT_SIMULATION_ENGINE::s_simulationEngineName)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CSELECT_SIMULATION_ENGINE::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CSELECT_SIMULATION_ENGINE.data,
      qt_meta_data_CSELECT_SIMULATION_ENGINE,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CSELECT_SIMULATION_ENGINE::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSELECT_SIMULATION_ENGINE::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CSELECT_SIMULATION_ENGINE.stringdata0))
        return static_cast<void*>(const_cast< CSELECT_SIMULATION_ENGINE*>(this));
    return QDialog::qt_metacast(_clname);
}

int CSELECT_SIMULATION_ENGINE::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CSELECT_SIMULATION_ENGINE::s_simulationEngineName(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

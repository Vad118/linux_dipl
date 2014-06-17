/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__server_t {
    QByteArrayData data[19];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata__server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata__server_t qt_meta_stringdata__server = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 16),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 1),
QT_MOC_LITERAL(4, 28, 1),
QT_MOC_LITERAL(5, 30, 5),
QT_MOC_LITERAL(6, 36, 3),
QT_MOC_LITERAL(7, 40, 18),
QT_MOC_LITERAL(8, 59, 8),
QT_MOC_LITERAL(9, 68, 8),
QT_MOC_LITERAL(10, 77, 4),
QT_MOC_LITERAL(11, 82, 22),
QT_MOC_LITERAL(12, 105, 9),
QT_MOC_LITERAL(13, 115, 9),
QT_MOC_LITERAL(14, 125, 4),
QT_MOC_LITERAL(15, 130, 13),
QT_MOC_LITERAL(16, 144, 17),
QT_MOC_LITERAL(17, 162, 27),
QT_MOC_LITERAL(18, 190, 10)
    },
    "_server\0showClientSignal\0\0x\0y\0char*\0"
    "str\0paintArbiterSignal\0client_x\0"
    "client_y\0text\0paintTraceObjectSignal\0"
    "arbiter_x\0arbiter_y\0type\0graphicsClear\0"
    "paintConfigurator\0showClientDisconnectedError\0"
    "globalQuit\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x05,
       7,    5,   56,    2, 0x05,
      11,    6,   67,    2, 0x05,
      15,    0,   80,    2, 0x05,
      16,    0,   81,    2, 0x05,
      17,    0,   82,    2, 0x05,
      18,    0,   83,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, QMetaType::Int,    3,    4,   12,   13,   10,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void _server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        _server *_t = static_cast<_server *>(_o);
        switch (_id) {
        case 0: _t->showClientSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 1: _t->paintArbiterSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 2: _t->paintTraceObjectSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->graphicsClear(); break;
        case 4: _t->paintConfigurator(); break;
        case 5: _t->showClientDisconnectedError(); break;
        case 6: _t->globalQuit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (_server::*_t)(int , int , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::showClientSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (_server::*_t)(int , int , int , int , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::paintArbiterSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (_server::*_t)(int , int , int , int , char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::paintTraceObjectSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (_server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::graphicsClear)) {
                *result = 3;
            }
        }
        {
            typedef void (_server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::paintConfigurator)) {
                *result = 4;
            }
        }
        {
            typedef void (_server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::showClientDisconnectedError)) {
                *result = 5;
            }
        }
        {
            typedef void (_server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&_server::globalQuit)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject _server::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata__server.data,
      qt_meta_data__server,  qt_static_metacall, 0, 0}
};


const QMetaObject *_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata__server.stringdata))
        return static_cast<void*>(const_cast< _server*>(this));
    return QThread::qt_metacast(_clname);
}

int _server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void _server::showClientSignal(int _t1, int _t2, char * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void _server::paintArbiterSignal(int _t1, int _t2, int _t3, int _t4, char * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void _server::paintTraceObjectSignal(int _t1, int _t2, int _t3, int _t4, char * _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void _server::graphicsClear()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void _server::paintConfigurator()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void _server::showClientDisconnectedError()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void _server::globalQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE

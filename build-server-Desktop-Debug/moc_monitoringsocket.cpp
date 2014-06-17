/****************************************************************************
** Meta object code from reading C++ file 'monitoringsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/monitoringsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitoringsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MonitoringSocket_t {
    QByteArrayData data[16];
    char stringdata[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MonitoringSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MonitoringSocket_t qt_meta_stringdata_MonitoringSocket = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 16),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 1),
QT_MOC_LITERAL(4, 37, 1),
QT_MOC_LITERAL(5, 39, 5),
QT_MOC_LITERAL(6, 45, 3),
QT_MOC_LITERAL(7, 49, 18),
QT_MOC_LITERAL(8, 68, 8),
QT_MOC_LITERAL(9, 77, 8),
QT_MOC_LITERAL(10, 86, 4),
QT_MOC_LITERAL(11, 91, 22),
QT_MOC_LITERAL(12, 114, 9),
QT_MOC_LITERAL(13, 124, 9),
QT_MOC_LITERAL(14, 134, 4),
QT_MOC_LITERAL(15, 139, 13)
    },
    "MonitoringSocket\0showClientSignal\0\0x\0"
    "y\0char*\0str\0paintArbiterSignal\0client_x\0"
    "client_y\0text\0paintTraceObjectSignal\0"
    "arbiter_x\0arbiter_y\0type\0graphicsClear\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitoringSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x05,
       7,    5,   41,    2, 0x05,
      11,    6,   52,    2, 0x05,
      15,    0,   65,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, QMetaType::Int,    3,    4,   12,   13,   10,   14,
    QMetaType::Void,

       0        // eod
};

void MonitoringSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MonitoringSocket *_t = static_cast<MonitoringSocket *>(_o);
        switch (_id) {
        case 0: _t->showClientSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 1: _t->paintArbiterSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 2: _t->paintTraceObjectSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->graphicsClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MonitoringSocket::*_t)(int , int , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MonitoringSocket::showClientSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (MonitoringSocket::*_t)(int , int , int , int , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MonitoringSocket::paintArbiterSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (MonitoringSocket::*_t)(int , int , int , int , char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MonitoringSocket::paintTraceObjectSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (MonitoringSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MonitoringSocket::graphicsClear)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MonitoringSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MonitoringSocket.data,
      qt_meta_data_MonitoringSocket,  qt_static_metacall, 0, 0}
};


const QMetaObject *MonitoringSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitoringSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitoringSocket.stringdata))
        return static_cast<void*>(const_cast< MonitoringSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int MonitoringSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MonitoringSocket::showClientSignal(int _t1, int _t2, char * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MonitoringSocket::paintArbiterSignal(int _t1, int _t2, int _t3, int _t4, char * _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MonitoringSocket::paintTraceObjectSignal(int _t1, int _t2, int _t3, int _t4, char * _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MonitoringSocket::graphicsClear()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
struct qt_meta_stringdata_MonitoringCheckNewMultithread_t {
    QByteArrayData data[3];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MonitoringCheckNewMultithread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MonitoringCheckNewMultithread_t qt_meta_stringdata_MonitoringCheckNewMultithread = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 10),
QT_MOC_LITERAL(2, 41, 0)
    },
    "MonitoringCheckNewMultithread\0globalQuit\0"
    "\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitoringCheckNewMultithread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MonitoringCheckNewMultithread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MonitoringCheckNewMultithread *_t = static_cast<MonitoringCheckNewMultithread *>(_o);
        switch (_id) {
        case 0: _t->globalQuit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MonitoringCheckNewMultithread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MonitoringCheckNewMultithread.data,
      qt_meta_data_MonitoringCheckNewMultithread,  qt_static_metacall, 0, 0}
};


const QMetaObject *MonitoringCheckNewMultithread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitoringCheckNewMultithread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitoringCheckNewMultithread.stringdata))
        return static_cast<void*>(const_cast< MonitoringCheckNewMultithread*>(this));
    return QThread::qt_metacast(_clname);
}

int MonitoringCheckNewMultithread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

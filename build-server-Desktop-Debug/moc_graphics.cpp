/****************************************************************************
** Meta object code from reading C++ file 'graphics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../server/graphics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__graphics_t {
    QByteArrayData data[16];
    char stringdata[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata__graphics_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata__graphics_t qt_meta_stringdata__graphics = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 11),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 1),
QT_MOC_LITERAL(4, 25, 1),
QT_MOC_LITERAL(5, 27, 5),
QT_MOC_LITERAL(6, 33, 4),
QT_MOC_LITERAL(7, 38, 12),
QT_MOC_LITERAL(8, 51, 8),
QT_MOC_LITERAL(9, 60, 8),
QT_MOC_LITERAL(10, 69, 16),
QT_MOC_LITERAL(11, 86, 9),
QT_MOC_LITERAL(12, 96, 9),
QT_MOC_LITERAL(13, 106, 4),
QT_MOC_LITERAL(14, 111, 5),
QT_MOC_LITERAL(15, 117, 27)
    },
    "_graphics\0paintClient\0\0x\0y\0char*\0text\0"
    "paintArbiter\0client_x\0client_y\0"
    "paintTraceObject\0arbiter_x\0arbiter_y\0"
    "type\0clear\0showClientDisconnectedError\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__graphics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x0a,
       7,    5,   46,    2, 0x0a,
      10,    6,   57,    2, 0x0a,
      14,    0,   70,    2, 0x0a,
      15,    0,   71,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    8,    9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, QMetaType::Int,    3,    4,   11,   12,    6,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void _graphics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        _graphics *_t = static_cast<_graphics *>(_o);
        switch (_id) {
        case 0: _t->paintClient((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 1: _t->paintArbiter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5]))); break;
        case 2: _t->paintTraceObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->clear(); break;
        case 4: _t->showClientDisconnectedError(); break;
        default: ;
        }
    }
}

const QMetaObject _graphics::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata__graphics.data,
      qt_meta_data__graphics,  qt_static_metacall, 0, 0}
};


const QMetaObject *_graphics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_graphics::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata__graphics.stringdata))
        return static_cast<void*>(const_cast< _graphics*>(this));
    return QObject::qt_metacast(_clname);
}

int _graphics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

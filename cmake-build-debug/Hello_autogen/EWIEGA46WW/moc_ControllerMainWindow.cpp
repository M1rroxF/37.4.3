/****************************************************************************
** Meta object code from reading C++ file 'ControllerMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ControllerMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControllerMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerMainWindow_t {
    QByteArrayData data[17];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerMainWindow_t qt_meta_stringdata_ControllerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ControllerMainWindow"
QT_MOC_LITERAL(1, 21, 4), // "add0"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "add1"
QT_MOC_LITERAL(4, 32, 4), // "add2"
QT_MOC_LITERAL(5, 37, 4), // "add3"
QT_MOC_LITERAL(6, 42, 4), // "add4"
QT_MOC_LITERAL(7, 47, 4), // "add5"
QT_MOC_LITERAL(8, 52, 4), // "add6"
QT_MOC_LITERAL(9, 57, 4), // "add7"
QT_MOC_LITERAL(10, 62, 4), // "add8"
QT_MOC_LITERAL(11, 67, 4), // "add9"
QT_MOC_LITERAL(12, 72, 6), // "louder"
QT_MOC_LITERAL(13, 79, 7), // "quieter"
QT_MOC_LITERAL(14, 87, 4), // "next"
QT_MOC_LITERAL(15, 92, 8), // "previous"
QT_MOC_LITERAL(16, 101, 6) // "select"

    },
    "ControllerMainWindow\0add0\0\0add1\0add2\0"
    "add3\0add4\0add5\0add6\0add7\0add8\0add9\0"
    "louder\0quieter\0next\0previous\0select"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ControllerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add0(); break;
        case 1: _t->add1(); break;
        case 2: _t->add2(); break;
        case 3: _t->add3(); break;
        case 4: _t->add4(); break;
        case 5: _t->add5(); break;
        case 6: _t->add6(); break;
        case 7: _t->add7(); break;
        case 8: _t->add8(); break;
        case 9: _t->add9(); break;
        case 10: _t->louder(); break;
        case 11: _t->quieter(); break;
        case 12: _t->next(); break;
        case 13: _t->previous(); break;
        case 14: _t->select(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ControllerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ControllerMainWindow.data,
    qt_meta_data_ControllerMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ControllerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

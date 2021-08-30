/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../junqi/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[30];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 24), // "on_actionStart_triggered"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 31), // "on_actionAdmit_Defeat_triggered"
QT_MOC_LITERAL(69, 40), // "on_actionCreate_the_Connectio..."
QT_MOC_LITERAL(110, 36), // "on_actionConnect_to_Server_tr..."
QT_MOC_LITERAL(147, 17), // "onClientConnected"
QT_MOC_LITERAL(165, 20), // "onClientDisconnected"
QT_MOC_LITERAL(186, 17), // "onSocketReadyRead"
QT_MOC_LITERAL(204, 11), // "onConnected"
QT_MOC_LITERAL(216, 14), // "onDisconnected"
QT_MOC_LITERAL(231, 13), // "my_timer_down"
QT_MOC_LITERAL(245, 29), // "on_actionDisconnect_triggered"
QT_MOC_LITERAL(275, 12), // "test_connect"
QT_MOC_LITERAL(288, 16) // "check_if_connect"

    },
    "MainWindow\0on_actionStart_triggered\0"
    "\0on_actionAdmit_Defeat_triggered\0"
    "on_actionCreate_the_Connection_triggered\0"
    "on_actionConnect_to_Server_triggered\0"
    "onClientConnected\0onClientDisconnected\0"
    "onSocketReadyRead\0onConnected\0"
    "onDisconnected\0my_timer_down\0"
    "on_actionDisconnect_triggered\0"
    "test_connect\0check_if_connect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    0 /* Private */,
       3,    0,   93,    2, 0x08,    1 /* Private */,
       4,    0,   94,    2, 0x08,    2 /* Private */,
       5,    0,   95,    2, 0x08,    3 /* Private */,
       6,    0,   96,    2, 0x08,    4 /* Private */,
       7,    0,   97,    2, 0x08,    5 /* Private */,
       8,    0,   98,    2, 0x08,    6 /* Private */,
       9,    0,   99,    2, 0x08,    7 /* Private */,
      10,    0,  100,    2, 0x08,    8 /* Private */,
      11,    0,  101,    2, 0x08,    9 /* Private */,
      12,    0,  102,    2, 0x08,   10 /* Private */,
      13,    0,  103,    2, 0x08,   11 /* Private */,
      14,    0,  104,    2, 0x08,   12 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionStart_triggered(); break;
        case 1: _t->on_actionAdmit_Defeat_triggered(); break;
        case 2: _t->on_actionCreate_the_Connection_triggered(); break;
        case 3: _t->on_actionConnect_to_Server_triggered(); break;
        case 4: _t->onClientConnected(); break;
        case 5: _t->onClientDisconnected(); break;
        case 6: _t->onSocketReadyRead(); break;
        case 7: _t->onConnected(); break;
        case 8: _t->onDisconnected(); break;
        case 9: _t->my_timer_down(); break;
        case 10: _t->on_actionDisconnect_triggered(); break;
        case 11: _t->test_connect(); break;
        case 12: _t->check_if_connect(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

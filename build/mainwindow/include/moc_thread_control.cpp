/****************************************************************************
** Meta object code from reading C++ file 'thread_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mainwindow/include/thread_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadControl_t {
    QByteArrayData data[21];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadControl_t qt_meta_stringdata_ThreadControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ThreadControl"
QT_MOC_LITERAL(1, 14, 27), // "sig_thread_control_finished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "sig_update_status_bar"
QT_MOC_LITERAL(4, 65, 1), // "s"
QT_MOC_LITERAL(5, 67, 26), // "set_gimbal_config_finished"
QT_MOC_LITERAL(6, 94, 31), // "sig_update_plainTextEdit_status"
QT_MOC_LITERAL(7, 126, 17), // "set_gimbal_config"
QT_MOC_LITERAL(8, 144, 15), // "set_gimbal_zoom"
QT_MOC_LITERAL(9, 160, 2), // "up"
QT_MOC_LITERAL(10, 163, 24), // "set_gimbol_focus_restore"
QT_MOC_LITERAL(11, 188, 15), // "set_gimbol_down"
QT_MOC_LITERAL(12, 204, 17), // "set_gimabl_center"
QT_MOC_LITERAL(13, 222, 16), // "set_gimbol_angle"
QT_MOC_LITERAL(14, 239, 5), // "pitch"
QT_MOC_LITERAL(15, 245, 3), // "yaw"
QT_MOC_LITERAL(16, 249, 9), // "open_file"
QT_MOC_LITERAL(17, 259, 11), // "std::string"
QT_MOC_LITERAL(18, 271, 14), // "save_directory"
QT_MOC_LITERAL(19, 286, 10), // "write_file"
QT_MOC_LITERAL(20, 297, 4) // "mode"

    },
    "ThreadControl\0sig_thread_control_finished\0"
    "\0sig_update_status_bar\0s\0"
    "set_gimbal_config_finished\0"
    "sig_update_plainTextEdit_status\0"
    "set_gimbal_config\0set_gimbal_zoom\0up\0"
    "set_gimbol_focus_restore\0set_gimbol_down\0"
    "set_gimabl_center\0set_gimbol_angle\0"
    "pitch\0yaw\0open_file\0std::string\0"
    "save_directory\0write_file\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   82,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
      10,    0,   86,    2, 0x0a /* Public */,
      11,    0,   87,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x0a /* Public */,
      13,    2,   89,    2, 0x0a /* Public */,
      16,    1,   94,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void ThreadControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_thread_control_finished(); break;
        case 1: _t->sig_update_status_bar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->set_gimbal_config_finished(); break;
        case 3: _t->sig_update_plainTextEdit_status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->set_gimbal_config(); break;
        case 5: _t->set_gimbal_zoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->set_gimbol_focus_restore(); break;
        case 7: _t->set_gimbol_down(); break;
        case 8: _t->set_gimabl_center(); break;
        case 9: _t->set_gimbol_angle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->open_file((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 11: _t->write_file((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadControl::sig_thread_control_finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadControl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadControl::sig_update_status_bar)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThreadControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadControl::set_gimbal_config_finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ThreadControl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadControl::sig_update_plainTextEdit_status)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ThreadControl.data,
    qt_meta_data_ThreadControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ThreadControl::sig_thread_control_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ThreadControl::sig_update_status_bar(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadControl::set_gimbal_config_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ThreadControl::sig_update_plainTextEdit_status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

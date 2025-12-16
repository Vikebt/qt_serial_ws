/****************************************************************************
** Meta object code from reading C++ file 'threadPointcloud.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mainwindow/include/threadPointcloud.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadPointcloud.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadPointcloud_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadPointcloud_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadPointcloud_t qt_meta_stringdata_ThreadPointcloud = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ThreadPointcloud"
QT_MOC_LITERAL(1, 17, 17), // "sig_save_finished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "slot_save_pointcloud"
QT_MOC_LITERAL(4, 57, 20), // "slot_save_point_data"
QT_MOC_LITERAL(5, 78, 31), // "pcl::PointCloud<pcl::PointXYZ>&"
QT_MOC_LITERAL(6, 110, 5), // "point"
QT_MOC_LITERAL(7, 116, 11), // "std::string"
QT_MOC_LITERAL(8, 128, 4) // "path"

    },
    "ThreadPointcloud\0sig_save_finished\0\0"
    "slot_save_pointcloud\0slot_save_point_data\0"
    "pcl::PointCloud<pcl::PointXYZ>&\0point\0"
    "std::string\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadPointcloud[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,

       0        // eod
};

void ThreadPointcloud::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadPointcloud *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_save_finished(); break;
        case 1: _t->slot_save_pointcloud(); break;
        case 2: _t->slot_save_point_data((*reinterpret_cast< pcl::PointCloud<pcl::PointXYZ>(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadPointcloud::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadPointcloud::sig_save_finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadPointcloud::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ThreadPointcloud.data,
    qt_meta_data_ThreadPointcloud,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadPointcloud::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadPointcloud::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadPointcloud.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadPointcloud::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ThreadPointcloud::sig_save_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

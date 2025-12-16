/****************************************************************************
** Meta object code from reading C++ file 'qnode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mainwindow/include/qnode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNode_t {
    QByteArrayData data[32];
    char stringdata0[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNode_t qt_meta_stringdata_QNode = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QNode"
QT_MOC_LITERAL(1, 6, 11), // "rosShutdown"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 18), // "sig_qnode_finished"
QT_MOC_LITERAL(4, 38, 16), // "sig_update_image"
QT_MOC_LITERAL(5, 55, 5), // "frame"
QT_MOC_LITERAL(6, 61, 22), // "sig_update_GNSS_result"
QT_MOC_LITERAL(7, 84, 11), // "Gnss_result"
QT_MOC_LITERAL(8, 96, 6), // "result"
QT_MOC_LITERAL(9, 103, 24), // "sig_update_gimbal_result"
QT_MOC_LITERAL(10, 128, 13), // "Gimbal_result"
QT_MOC_LITERAL(11, 142, 29), // "sig_update_airPressure_result"
QT_MOC_LITERAL(12, 172, 18), // "AirPressure_result"
QT_MOC_LITERAL(13, 191, 29), // "sig_update_airPressure_status"
QT_MOC_LITERAL(14, 221, 11), // "std::string"
QT_MOC_LITERAL(15, 233, 6), // "status"
QT_MOC_LITERAL(16, 240, 32), // "sig_update_radio_altitude_result"
QT_MOC_LITERAL(17, 273, 12), // "Radio_result"
QT_MOC_LITERAL(18, 286, 21), // "sig_update_status_bar"
QT_MOC_LITERAL(19, 308, 7), // "message"
QT_MOC_LITERAL(20, 316, 26), // "sig_update_label_image_num"
QT_MOC_LITERAL(21, 343, 3), // "num"
QT_MOC_LITERAL(22, 347, 21), // "sig_update_label_time"
QT_MOC_LITERAL(23, 369, 4), // "time"
QT_MOC_LITERAL(24, 374, 17), // "sig_clear_message"
QT_MOC_LITERAL(25, 392, 19), // "sig_connect_succeed"
QT_MOC_LITERAL(26, 412, 31), // "sig_update_plainTextEdit_status"
QT_MOC_LITERAL(27, 444, 12), // "sig_save_pts"
QT_MOC_LITERAL(28, 457, 31), // "pcl::PointCloud<pcl::PointXYZ>&"
QT_MOC_LITERAL(29, 489, 5), // "point"
QT_MOC_LITERAL(30, 495, 4), // "path"
QT_MOC_LITERAL(31, 500, 3) // "run"

    },
    "QNode\0rosShutdown\0\0sig_qnode_finished\0"
    "sig_update_image\0frame\0sig_update_GNSS_result\0"
    "Gnss_result\0result\0sig_update_gimbal_result\0"
    "Gimbal_result\0sig_update_airPressure_result\0"
    "AirPressure_result\0sig_update_airPressure_status\0"
    "std::string\0status\0sig_update_radio_altitude_result\0"
    "Radio_result\0sig_update_status_bar\0"
    "message\0sig_update_label_image_num\0"
    "num\0sig_update_label_time\0time\0"
    "sig_clear_message\0sig_connect_succeed\0"
    "sig_update_plainTextEdit_status\0"
    "sig_save_pts\0pcl::PointCloud<pcl::PointXYZ>&\0"
    "point\0path\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    1,  101,    2, 0x06 /* Public */,
       6,    1,  104,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,
      11,    1,  110,    2, 0x06 /* Public */,
      13,    1,  113,    2, 0x06 /* Public */,
      16,    1,  116,    2, 0x06 /* Public */,
      18,    1,  119,    2, 0x06 /* Public */,
      20,    1,  122,    2, 0x06 /* Public */,
      22,    1,  125,    2, 0x06 /* Public */,
      24,    0,  128,    2, 0x06 /* Public */,
      25,    0,  129,    2, 0x06 /* Public */,
      26,    1,  130,    2, 0x06 /* Public */,
      27,    2,  133,    2, 0x06 /* Public */,
      27,    0,  138,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, 0x80000000 | 12,    8,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,    8,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 14,   29,   30,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rosShutdown(); break;
        case 1: _t->sig_qnode_finished(); break;
        case 2: _t->sig_update_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->sig_update_GNSS_result((*reinterpret_cast< Gnss_result(*)>(_a[1]))); break;
        case 4: _t->sig_update_gimbal_result((*reinterpret_cast< Gimbal_result(*)>(_a[1]))); break;
        case 5: _t->sig_update_airPressure_result((*reinterpret_cast< AirPressure_result(*)>(_a[1]))); break;
        case 6: _t->sig_update_airPressure_status((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 7: _t->sig_update_radio_altitude_result((*reinterpret_cast< Radio_result(*)>(_a[1]))); break;
        case 8: _t->sig_update_status_bar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->sig_update_label_image_num((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->sig_update_label_time((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->sig_clear_message(); break;
        case 12: _t->sig_connect_succeed(); break;
        case 13: _t->sig_update_plainTextEdit_status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->sig_save_pts((*reinterpret_cast< pcl::PointCloud<pcl::PointXYZ>(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 15: _t->sig_save_pts(); break;
        case 16: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_qnode_finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_image)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QNode::*)(Gnss_result );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_GNSS_result)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QNode::*)(Gimbal_result );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_gimbal_result)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QNode::*)(AirPressure_result );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_airPressure_result)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QNode::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_airPressure_status)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QNode::*)(Radio_result );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_radio_altitude_result)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_status_bar)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QNode::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_label_image_num)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_label_time)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_clear_message)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_connect_succeed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_update_plainTextEdit_status)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QNode::*)(pcl::PointCloud<pcl::PointXYZ> & , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_save_pts)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::sig_save_pts)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QNode.data,
    qt_meta_data_QNode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNode::sig_qnode_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNode::sig_update_image(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNode::sig_update_GNSS_result(Gnss_result _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNode::sig_update_gimbal_result(Gimbal_result _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNode::sig_update_airPressure_result(AirPressure_result _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QNode::sig_update_airPressure_status(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QNode::sig_update_radio_altitude_result(Radio_result _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QNode::sig_update_status_bar(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QNode::sig_update_label_image_num(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QNode::sig_update_label_time(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QNode::sig_clear_message()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QNode::sig_connect_succeed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QNode::sig_update_plainTextEdit_status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QNode::sig_save_pts(pcl::PointCloud<pcl::PointXYZ> & _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QNode::sig_save_pts()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

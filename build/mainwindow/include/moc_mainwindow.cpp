/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mainwindow/include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[73];
    char stringdata0[1495];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "closed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "sig_start_qnode"
QT_MOC_LITERAL(4, 35, 17), // "sig_start_control"
QT_MOC_LITERAL(5, 53, 16), // "sig_zoom_control"
QT_MOC_LITERAL(6, 70, 2), // "up"
QT_MOC_LITERAL(7, 73, 24), // "sig_gimbol_focus_restore"
QT_MOC_LITERAL(8, 98, 17), // "sig_angle_control"
QT_MOC_LITERAL(9, 116, 5), // "pitch"
QT_MOC_LITERAL(10, 122, 3), // "yaw"
QT_MOC_LITERAL(11, 126, 16), // "sig_set_downward"
QT_MOC_LITERAL(12, 143, 14), // "sig_set_center"
QT_MOC_LITERAL(13, 158, 21), // "sig_start_image_match"
QT_MOC_LITERAL(14, 180, 23), // "sig_start_terrain_match"
QT_MOC_LITERAL(15, 204, 22), // "sig_stop_terrain_match"
QT_MOC_LITERAL(16, 227, 28), // "slot_action_connect_triggred"
QT_MOC_LITERAL(17, 256, 20), // "slot_connect_succeed"
QT_MOC_LITERAL(18, 277, 25), // "slot_action_save_triggred"
QT_MOC_LITERAL(19, 303, 22), // "slot_rBtn_GNSS_clicked"
QT_MOC_LITERAL(20, 326, 7), // "checked"
QT_MOC_LITERAL(21, 334, 38), // "slot_rBtn_barometric_altimete..."
QT_MOC_LITERAL(22, 373, 33), // "slot_rBtn_radio_altimeter_cli..."
QT_MOC_LITERAL(23, 407, 29), // "slot_btn_camera_apply_clicked"
QT_MOC_LITERAL(24, 437, 31), // "slot_spinBox_focus_valueChanged"
QT_MOC_LITERAL(25, 469, 5), // "value"
QT_MOC_LITERAL(26, 475, 45), // "slot_comboBox_camera_mode_cur..."
QT_MOC_LITERAL(27, 521, 19), // "slot_qnode_finished"
QT_MOC_LITERAL(28, 541, 17), // "slot_update_image"
QT_MOC_LITERAL(29, 559, 2), // "im"
QT_MOC_LITERAL(30, 562, 24), // "slot_update_GNSS_Message"
QT_MOC_LITERAL(31, 587, 11), // "std::string"
QT_MOC_LITERAL(32, 599, 7), // "message"
QT_MOC_LITERAL(33, 607, 23), // "slot_update_GNSS_result"
QT_MOC_LITERAL(34, 631, 11), // "Gnss_result"
QT_MOC_LITERAL(35, 643, 6), // "result"
QT_MOC_LITERAL(36, 650, 25), // "slot_update_gimbal_result"
QT_MOC_LITERAL(37, 676, 13), // "Gimbal_result"
QT_MOC_LITERAL(38, 690, 32), // "slot_update_air_pressure_message"
QT_MOC_LITERAL(39, 723, 30), // "slot_update_airPressure_result"
QT_MOC_LITERAL(40, 754, 18), // "AirPressure_result"
QT_MOC_LITERAL(41, 773, 30), // "slot_update_airPressure_status"
QT_MOC_LITERAL(42, 804, 6), // "status"
QT_MOC_LITERAL(43, 811, 34), // "slot_update_radio_altitude_me..."
QT_MOC_LITERAL(44, 846, 33), // "slot_update_radio_altitude_re..."
QT_MOC_LITERAL(45, 880, 12), // "Radio_result"
QT_MOC_LITERAL(46, 893, 22), // "slot_update_status_bar"
QT_MOC_LITERAL(47, 916, 32), // "slot_update_plainTextEdit_status"
QT_MOC_LITERAL(48, 949, 27), // "slot_update_label_image_num"
QT_MOC_LITERAL(49, 977, 3), // "num"
QT_MOC_LITERAL(50, 981, 22), // "slot_update_label_time"
QT_MOC_LITERAL(51, 1004, 4), // "time"
QT_MOC_LITERAL(52, 1009, 32), // "slot_action_GNSS_reload_triggred"
QT_MOC_LITERAL(53, 1042, 24), // "slot_tBn_zoom_up_clicked"
QT_MOC_LITERAL(54, 1067, 26), // "slot_tBn_zoom_down_clicked"
QT_MOC_LITERAL(55, 1094, 27), // "slot_gimbal_config_finished"
QT_MOC_LITERAL(56, 1122, 18), // "slot_clear_message"
QT_MOC_LITERAL(57, 1141, 18), // "slot_control_angle"
QT_MOC_LITERAL(58, 1160, 31), // "slot_btn_scene_matching_clicked"
QT_MOC_LITERAL(59, 1192, 33), // "slot_btn_terrain_matching_cli..."
QT_MOC_LITERAL(60, 1226, 28), // "slot_btn_high_fusion_clicked"
QT_MOC_LITERAL(61, 1255, 25), // "slot_btn_downward_clicked"
QT_MOC_LITERAL(62, 1281, 23), // "slot_btn_center_clicked"
QT_MOC_LITERAL(63, 1305, 35), // "slot_action_serial_setting_tr..."
QT_MOC_LITERAL(64, 1341, 23), // "slot_setserial_finished"
QT_MOC_LITERAL(65, 1365, 32), // "slot_single_image_match_finished"
QT_MOC_LITERAL(66, 1398, 3), // "img"
QT_MOC_LITERAL(67, 1402, 3), // "lon"
QT_MOC_LITERAL(68, 1406, 3), // "lat"
QT_MOC_LITERAL(69, 1410, 25), // "slot_image_match_finished"
QT_MOC_LITERAL(70, 1436, 27), // "slot_terrain_match_finished"
QT_MOC_LITERAL(71, 1464, 10), // "updateTime"
QT_MOC_LITERAL(72, 1475, 19) // "update_match_result"

    },
    "MainWindow\0closed\0\0sig_start_qnode\0"
    "sig_start_control\0sig_zoom_control\0"
    "up\0sig_gimbol_focus_restore\0"
    "sig_angle_control\0pitch\0yaw\0"
    "sig_set_downward\0sig_set_center\0"
    "sig_start_image_match\0sig_start_terrain_match\0"
    "sig_stop_terrain_match\0"
    "slot_action_connect_triggred\0"
    "slot_connect_succeed\0slot_action_save_triggred\0"
    "slot_rBtn_GNSS_clicked\0checked\0"
    "slot_rBtn_barometric_altimeter_clicked\0"
    "slot_rBtn_radio_altimeter_clicked\0"
    "slot_btn_camera_apply_clicked\0"
    "slot_spinBox_focus_valueChanged\0value\0"
    "slot_comboBox_camera_mode_currentIndexChanged\0"
    "slot_qnode_finished\0slot_update_image\0"
    "im\0slot_update_GNSS_Message\0std::string\0"
    "message\0slot_update_GNSS_result\0"
    "Gnss_result\0result\0slot_update_gimbal_result\0"
    "Gimbal_result\0slot_update_air_pressure_message\0"
    "slot_update_airPressure_result\0"
    "AirPressure_result\0slot_update_airPressure_status\0"
    "status\0slot_update_radio_altitude_message\0"
    "slot_update_radio_altitude_result\0"
    "Radio_result\0slot_update_status_bar\0"
    "slot_update_plainTextEdit_status\0"
    "slot_update_label_image_num\0num\0"
    "slot_update_label_time\0time\0"
    "slot_action_GNSS_reload_triggred\0"
    "slot_tBn_zoom_up_clicked\0"
    "slot_tBn_zoom_down_clicked\0"
    "slot_gimbal_config_finished\0"
    "slot_clear_message\0slot_control_angle\0"
    "slot_btn_scene_matching_clicked\0"
    "slot_btn_terrain_matching_clicked\0"
    "slot_btn_high_fusion_clicked\0"
    "slot_btn_downward_clicked\0"
    "slot_btn_center_clicked\0"
    "slot_action_serial_setting_triggred\0"
    "slot_setserial_finished\0"
    "slot_single_image_match_finished\0img\0"
    "lon\0lat\0slot_image_match_finished\0"
    "slot_terrain_match_finished\0updateTime\0"
    "update_match_result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  274,    2, 0x06 /* Public */,
       3,    0,  275,    2, 0x06 /* Public */,
       4,    0,  276,    2, 0x06 /* Public */,
       5,    1,  277,    2, 0x06 /* Public */,
       7,    0,  280,    2, 0x06 /* Public */,
       8,    2,  281,    2, 0x06 /* Public */,
      11,    0,  286,    2, 0x06 /* Public */,
      12,    0,  287,    2, 0x06 /* Public */,
      13,    0,  288,    2, 0x06 /* Public */,
      14,    0,  289,    2, 0x06 /* Public */,
      15,    0,  290,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  291,    2, 0x0a /* Public */,
      17,    0,  292,    2, 0x0a /* Public */,
      18,    0,  293,    2, 0x0a /* Public */,
      19,    1,  294,    2, 0x0a /* Public */,
      21,    1,  297,    2, 0x0a /* Public */,
      22,    1,  300,    2, 0x0a /* Public */,
      23,    0,  303,    2, 0x0a /* Public */,
      24,    1,  304,    2, 0x0a /* Public */,
      26,    1,  307,    2, 0x0a /* Public */,
      27,    0,  310,    2, 0x0a /* Public */,
      28,    1,  311,    2, 0x0a /* Public */,
      30,    1,  314,    2, 0x0a /* Public */,
      33,    1,  317,    2, 0x0a /* Public */,
      36,    1,  320,    2, 0x0a /* Public */,
      38,    1,  323,    2, 0x0a /* Public */,
      39,    1,  326,    2, 0x0a /* Public */,
      41,    1,  329,    2, 0x0a /* Public */,
      43,    1,  332,    2, 0x0a /* Public */,
      44,    1,  335,    2, 0x0a /* Public */,
      46,    1,  338,    2, 0x0a /* Public */,
      47,    1,  341,    2, 0x0a /* Public */,
      48,    1,  344,    2, 0x0a /* Public */,
      50,    1,  347,    2, 0x0a /* Public */,
      52,    0,  350,    2, 0x0a /* Public */,
      53,    0,  351,    2, 0x0a /* Public */,
      54,    0,  352,    2, 0x0a /* Public */,
      55,    0,  353,    2, 0x0a /* Public */,
      56,    0,  354,    2, 0x0a /* Public */,
      57,    0,  355,    2, 0x0a /* Public */,
      58,    0,  356,    2, 0x0a /* Public */,
      59,    0,  357,    2, 0x0a /* Public */,
      60,    0,  358,    2, 0x0a /* Public */,
      61,    0,  359,    2, 0x0a /* Public */,
      62,    0,  360,    2, 0x0a /* Public */,
      63,    0,  361,    2, 0x0a /* Public */,
      64,    0,  362,    2, 0x0a /* Public */,
      65,    3,  363,    2, 0x0a /* Public */,
      69,    0,  370,    2, 0x0a /* Public */,
      70,    0,  371,    2, 0x0a /* Public */,
      71,    0,  372,    2, 0x0a /* Public */,
      72,    0,  373,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37,   35,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 40,   35,
    QMetaType::Void, 0x80000000 | 31,   42,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, 0x80000000 | 45,   35,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::QString,   51,
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
    QMetaType::Void, QMetaType::QImage, QMetaType::Float, QMetaType::Float,   66,   67,   68,
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
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->sig_start_qnode(); break;
        case 2: _t->sig_start_control(); break;
        case 3: _t->sig_zoom_control((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sig_gimbol_focus_restore(); break;
        case 5: _t->sig_angle_control((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->sig_set_downward(); break;
        case 7: _t->sig_set_center(); break;
        case 8: _t->sig_start_image_match(); break;
        case 9: _t->sig_start_terrain_match(); break;
        case 10: _t->sig_stop_terrain_match(); break;
        case 11: _t->slot_action_connect_triggred(); break;
        case 12: _t->slot_connect_succeed(); break;
        case 13: _t->slot_action_save_triggred(); break;
        case 14: _t->slot_rBtn_GNSS_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slot_rBtn_barometric_altimeter_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slot_rBtn_radio_altimeter_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slot_btn_camera_apply_clicked(); break;
        case 18: _t->slot_spinBox_focus_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slot_comboBox_camera_mode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->slot_qnode_finished(); break;
        case 21: _t->slot_update_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 22: _t->slot_update_GNSS_Message((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 23: _t->slot_update_GNSS_result((*reinterpret_cast< Gnss_result(*)>(_a[1]))); break;
        case 24: _t->slot_update_gimbal_result((*reinterpret_cast< Gimbal_result(*)>(_a[1]))); break;
        case 25: _t->slot_update_air_pressure_message((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 26: _t->slot_update_airPressure_result((*reinterpret_cast< AirPressure_result(*)>(_a[1]))); break;
        case 27: _t->slot_update_airPressure_status((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 28: _t->slot_update_radio_altitude_message((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 29: _t->slot_update_radio_altitude_result((*reinterpret_cast< Radio_result(*)>(_a[1]))); break;
        case 30: _t->slot_update_status_bar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->slot_update_plainTextEdit_status((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->slot_update_label_image_num((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->slot_update_label_time((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->slot_action_GNSS_reload_triggred(); break;
        case 35: _t->slot_tBn_zoom_up_clicked(); break;
        case 36: _t->slot_tBn_zoom_down_clicked(); break;
        case 37: _t->slot_gimbal_config_finished(); break;
        case 38: _t->slot_clear_message(); break;
        case 39: _t->slot_control_angle(); break;
        case 40: _t->slot_btn_scene_matching_clicked(); break;
        case 41: _t->slot_btn_terrain_matching_clicked(); break;
        case 42: _t->slot_btn_high_fusion_clicked(); break;
        case 43: _t->slot_btn_downward_clicked(); break;
        case 44: _t->slot_btn_center_clicked(); break;
        case 45: _t->slot_action_serial_setting_triggred(); break;
        case 46: _t->slot_setserial_finished(); break;
        case 47: _t->slot_single_image_match_finished((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 48: _t->slot_image_match_finished(); break;
        case 49: _t->slot_terrain_match_finished(); break;
        case 50: _t->updateTime(); break;
        case 51: _t->update_match_result(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::closed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_start_qnode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_start_control)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_zoom_control)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_gimbol_focus_restore)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_angle_control)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_set_downward)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_set_center)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_start_image_match)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_start_terrain_match)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sig_stop_terrain_match)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::sig_start_qnode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::sig_start_control()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::sig_zoom_control(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::sig_gimbol_focus_restore()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::sig_angle_control(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::sig_set_downward()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MainWindow::sig_set_center()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::sig_start_image_match()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::sig_start_terrain_match()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MainWindow::sig_stop_terrain_match()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

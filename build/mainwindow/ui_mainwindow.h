/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qfi/qfi_AI.h"
#include "qfi/qfi_ALT.h"
#include "qfi/qfi_EADI.h"
#include "qfi/qfi_HI.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_connect;
    QAction *action_open;
    QAction *action_GNSS_reload;
    QAction *action_save;
    QAction *action_play;
    QAction *action_serial_setting;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_display;
    QFrame *line_4;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_pitch;
    QLabel *label_3;
    QLineEdit *lineEdit_yaw;
    QLabel *label_2;
    QLineEdit *lineEdit_roll;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_camera_mode;
    QFrame *line_3;
    QLabel *label_4;
    QSpinBox *spinBox_focus;
    QPushButton *btn_camera_apply;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_center;
    QPushButton *btn_downward;
    QFrame *line;
    QLabel *label_7;
    QToolButton *tBn_zoom_up;
    QToolButton *tBn_zoom_down;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *label_image_num;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *edit_latitude_scene;
    QPushButton *btn_scene_matching;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *edit_longitude_scene;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_16;
    QGridLayout *gridLayout_3;
    QLineEdit *edit_latitude_terrain;
    QLabel *label_13;
    QPushButton *btn_terrain_matching;
    QLineEdit *edit_longitude_terrain;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLineEdit *edit_height_terrain;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_17;
    QGridLayout *gridLayout_5;
    QLabel *label_18;
    QLineEdit *edit_height;
    QLabel *label_17;
    QPushButton *btn_high_fusion;
    QWidget *VWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_10;
    qfi_HI *graphicsHI;
    qfi_AI *graphicsAI;
    QGridLayout *gridLayout_2;
    QLabel *label_roll;
    QLabel *label_10;
    QLabel *label_pitch;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_yaw;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    qfi_EADI *graphicsEADI;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rBtn_GNSS;
    QPlainTextEdit *plainTextEdit_GNSS;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_9;
    qfi_ALT *graphicsALT;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *rBtn_barometric_altimeter;
    QPlainTextEdit *plainTextEdit_barometric_altimeter;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rBtn_radio_altimeter;
    QPlainTextEdit *plainTextEdit_radio_altimeter;
    QPlainTextEdit *plainTextEdit_status;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_time;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1559, 1015);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/WindowsQGC.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_connect = new QAction(MainWindow);
        action_connect->setObjectName(QString::fromUtf8("action_connect"));
        action_connect->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_connect->setIcon(icon1);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/OpenFile.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon2);
        action_GNSS_reload = new QAction(MainWindow);
        action_GNSS_reload->setObjectName(QString::fromUtf8("action_GNSS_reload"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_GNSS_reload->setIcon(icon3);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        action_save->setCheckable(true);
        action_save->setChecked(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon4);
        action_play = new QAction(MainWindow);
        action_play->setObjectName(QString::fromUtf8("action_play"));
        action_play->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_play->setIcon(icon5);
        action_serial_setting = new QAction(MainWindow);
        action_serial_setting->setObjectName(QString::fromUtf8("action_serial_setting"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_serial_setting->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_display = new QLabel(groupBox);
        label_display->setObjectName(QString::fromUtf8("label_display"));
        label_display->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        label_display->setMargin(0);

        verticalLayout_2->addWidget(label_display);

        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        groupBox_10 = new QGroupBox(groupBox);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_10);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_pitch = new QLineEdit(groupBox_10);
        lineEdit_pitch->setObjectName(QString::fromUtf8("lineEdit_pitch"));

        horizontalLayout_3->addWidget(lineEdit_pitch);

        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_yaw = new QLineEdit(groupBox_10);
        lineEdit_yaw->setObjectName(QString::fromUtf8("lineEdit_yaw"));

        horizontalLayout_3->addWidget(lineEdit_yaw);

        label_2 = new QLabel(groupBox_10);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_roll = new QLineEdit(groupBox_10);
        lineEdit_roll->setObjectName(QString::fromUtf8("lineEdit_roll"));

        horizontalLayout_3->addWidget(lineEdit_roll);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_camera_mode = new QComboBox(groupBox_10);
        comboBox_camera_mode->addItem(QString());
        comboBox_camera_mode->addItem(QString());
        comboBox_camera_mode->setObjectName(QString::fromUtf8("comboBox_camera_mode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_camera_mode->sizePolicy().hasHeightForWidth());
        comboBox_camera_mode->setSizePolicy(sizePolicy);
        comboBox_camera_mode->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(12);
        comboBox_camera_mode->setFont(font);

        horizontalLayout_4->addWidget(comboBox_camera_mode);

        line_3 = new QFrame(groupBox_10);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        label_4 = new QLabel(groupBox_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spinBox_focus = new QSpinBox(groupBox_10);
        spinBox_focus->setObjectName(QString::fromUtf8("spinBox_focus"));
        spinBox_focus->setMinimum(1);
        spinBox_focus->setMaximum(8);

        horizontalLayout_4->addWidget(spinBox_focus);

        btn_camera_apply = new QPushButton(groupBox_10);
        btn_camera_apply->setObjectName(QString::fromUtf8("btn_camera_apply"));
        btn_camera_apply->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/set.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btn_camera_apply->setIcon(icon7);
        btn_camera_apply->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(btn_camera_apply);

        line_2 = new QFrame(groupBox_10);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_center = new QPushButton(groupBox_10);
        btn_center->setObjectName(QString::fromUtf8("btn_center"));
        btn_center->setMinimumSize(QSize(120, 0));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/FocusCamera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_center->setIcon(icon8);

        horizontalLayout_4->addWidget(btn_center);

        btn_downward = new QPushButton(groupBox_10);
        btn_downward->setObjectName(QString::fromUtf8("btn_downward"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_downward->sizePolicy().hasHeightForWidth());
        btn_downward->setSizePolicy(sizePolicy1);
        btn_downward->setMinimumSize(QSize(120, 0));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/downward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_downward->setIcon(icon9);

        horizontalLayout_4->addWidget(btn_downward);

        line = new QFrame(groupBox_10);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        tBn_zoom_up = new QToolButton(groupBox_10);
        tBn_zoom_up->setObjectName(QString::fromUtf8("tBn_zoom_up"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBn_zoom_up->setIcon(icon10);

        horizontalLayout_4->addWidget(tBn_zoom_up);

        tBn_zoom_down = new QToolButton(groupBox_10);
        tBn_zoom_down->setObjectName(QString::fromUtf8("tBn_zoom_down"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        tBn_zoom_down->setIcon(icon11);

        horizontalLayout_4->addWidget(tBn_zoom_down);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_10);

        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        label_image_num = new QLabel(groupBox);
        label_image_num->setObjectName(QString::fromUtf8("label_image_num"));

        horizontalLayout_6->addWidget(label_image_num);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout_2->setStretch(0, 12);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, -1, 5, -1);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        edit_latitude_scene = new QLineEdit(groupBox_5);
        edit_latitude_scene->setObjectName(QString::fromUtf8("edit_latitude_scene"));
        QFont font1;
        font1.setPointSize(10);
        edit_latitude_scene->setFont(font1);
        edit_latitude_scene->setReadOnly(true);

        gridLayout_4->addWidget(edit_latitude_scene, 1, 2, 1, 1);

        btn_scene_matching = new QPushButton(groupBox_5);
        btn_scene_matching->setObjectName(QString::fromUtf8("btn_scene_matching"));
        btn_scene_matching->setMinimumSize(QSize(90, 0));
        btn_scene_matching->setMaximumSize(QSize(100, 16777215));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/Image.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_scene_matching->setIcon(icon12);
        btn_scene_matching->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(btn_scene_matching, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_9, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 0, 2, 1, 1);

        edit_longitude_scene = new QLineEdit(groupBox_5);
        edit_longitude_scene->setObjectName(QString::fromUtf8("edit_longitude_scene"));
        edit_longitude_scene->setFont(font1);
        edit_longitude_scene->setReadOnly(true);

        gridLayout_4->addWidget(edit_longitude_scene, 1, 1, 1, 1);


        horizontalLayout_15->addLayout(gridLayout_4);


        verticalLayout_4->addLayout(horizontalLayout_15);


        horizontalLayout_7->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(5, -1, 5, -1);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(7);
        edit_latitude_terrain = new QLineEdit(groupBox_6);
        edit_latitude_terrain->setObjectName(QString::fromUtf8("edit_latitude_terrain"));
        edit_latitude_terrain->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edit_latitude_terrain->sizePolicy().hasHeightForWidth());
        edit_latitude_terrain->setSizePolicy(sizePolicy2);
        edit_latitude_terrain->setFont(font1);
        edit_latitude_terrain->setReadOnly(true);

        gridLayout_3->addWidget(edit_latitude_terrain, 1, 2, 1, 1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        btn_terrain_matching = new QPushButton(groupBox_6);
        btn_terrain_matching->setObjectName(QString::fromUtf8("btn_terrain_matching"));
        btn_terrain_matching->setMinimumSize(QSize(90, 0));
        btn_terrain_matching->setMaximumSize(QSize(100, 16777215));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/Grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_terrain_matching->setIcon(icon13);
        btn_terrain_matching->setIconSize(QSize(32, 32));
        btn_terrain_matching->setCheckable(true);

        gridLayout_3->addWidget(btn_terrain_matching, 0, 0, 1, 1);

        edit_longitude_terrain = new QLineEdit(groupBox_6);
        edit_longitude_terrain->setObjectName(QString::fromUtf8("edit_longitude_terrain"));
        edit_longitude_terrain->setEnabled(true);
        sizePolicy2.setHeightForWidth(edit_longitude_terrain->sizePolicy().hasHeightForWidth());
        edit_longitude_terrain->setSizePolicy(sizePolicy2);
        edit_longitude_terrain->setFont(font1);
        edit_longitude_terrain->setReadOnly(true);

        gridLayout_3->addWidget(edit_longitude_terrain, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_16, 0, 2, 1, 1);

        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_19, 0, 3, 1, 1);

        edit_height_terrain = new QLineEdit(groupBox_6);
        edit_height_terrain->setObjectName(QString::fromUtf8("edit_height_terrain"));
        edit_height_terrain->setFont(font1);
        edit_height_terrain->setReadOnly(true);

        gridLayout_3->addWidget(edit_height_terrain, 1, 3, 1, 1);


        horizontalLayout_16->addLayout(gridLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_16);


        horizontalLayout_7->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setFont(font);
        verticalLayout_9 = new QVBoxLayout(groupBox_7);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, -1, 5, -1);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(7);
        label_18 = new QLabel(groupBox_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_18, 0, 1, 1, 1);

        edit_height = new QLineEdit(groupBox_7);
        edit_height->setObjectName(QString::fromUtf8("edit_height"));
        edit_height->setEnabled(true);
        sizePolicy2.setHeightForWidth(edit_height->sizePolicy().hasHeightForWidth());
        edit_height->setSizePolicy(sizePolicy2);
        edit_height->setFont(font1);
        edit_height->setReadOnly(true);

        gridLayout_5->addWidget(edit_height, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 1, 0, 1, 1);

        btn_high_fusion = new QPushButton(groupBox_7);
        btn_high_fusion->setObjectName(QString::fromUtf8("btn_high_fusion"));
        btn_high_fusion->setMinimumSize(QSize(90, 0));
        btn_high_fusion->setMaximumSize(QSize(100, 16777215));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/height.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_high_fusion->setIcon(icon14);
        btn_high_fusion->setIconSize(QSize(32, 32));
        btn_high_fusion->setCheckable(true);

        gridLayout_5->addWidget(btn_high_fusion, 0, 0, 1, 1);


        horizontalLayout_17->addLayout(gridLayout_5);


        verticalLayout_9->addLayout(horizontalLayout_17);


        horizontalLayout_7->addWidget(groupBox_7);

        horizontalLayout_7->setStretch(0, 4);
        horizontalLayout_7->setStretch(1, 5);
        horizontalLayout_7->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_7);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        VWidget = new QWidget(centralwidget);
        VWidget->setObjectName(QString::fromUtf8("VWidget"));
        VWidget->setMinimumSize(QSize(0, 0));
        VWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(VWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 3);
        groupBox_9 = new QGroupBox(VWidget);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy3);
        groupBox_9->setStyleSheet(QString::fromUtf8(""));
        groupBox_9->setCheckable(false);
        horizontalLayout_12 = new QHBoxLayout(groupBox_9);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        graphicsHI = new qfi_HI(groupBox_9);
        graphicsHI->setObjectName(QString::fromUtf8("graphicsHI"));
        graphicsHI->setEnabled(false);
        graphicsHI->setMinimumSize(QSize(0, 0));
        graphicsHI->setMaximumSize(QSize(16777215, 16777215));
        graphicsHI->setFrameShape(QFrame::NoFrame);
        graphicsHI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsHI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsHI->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        graphicsHI->setInteractive(true);

        horizontalLayout_10->addWidget(graphicsHI);

        graphicsAI = new qfi_AI(groupBox_9);
        graphicsAI->setObjectName(QString::fromUtf8("graphicsAI"));
        graphicsAI->setEnabled(false);
        graphicsAI->setMinimumSize(QSize(0, 0));
        graphicsAI->setMaximumSize(QSize(16777215, 16777215));
        graphicsAI->setFrameShape(QFrame::NoFrame);
        graphicsAI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsAI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsAI->setInteractive(false);

        horizontalLayout_10->addWidget(graphicsAI);


        horizontalLayout_12->addLayout(horizontalLayout_10);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_roll = new QLabel(groupBox_9);
        label_roll->setObjectName(QString::fromUtf8("label_roll"));
        label_roll->setMinimumSize(QSize(50, 0));
        label_roll->setMaximumSize(QSize(50, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_roll->setFont(font2);

        gridLayout_2->addWidget(label_roll, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_9);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(65, 40));
        label_10->setMaximumSize(QSize(65, 40));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        label_pitch = new QLabel(groupBox_9);
        label_pitch->setObjectName(QString::fromUtf8("label_pitch"));
        label_pitch->setMinimumSize(QSize(50, 0));
        label_pitch->setMaximumSize(QSize(50, 16777215));
        label_pitch->setFont(font2);

        gridLayout_2->addWidget(label_pitch, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(65, 40));
        label_12->setMaximumSize(QSize(65, 40));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(65, 40));
        label_14->setMaximumSize(QSize(65, 40));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        label_yaw = new QLabel(groupBox_9);
        label_yaw->setObjectName(QString::fromUtf8("label_yaw"));
        label_yaw->setMinimumSize(QSize(50, 0));
        label_yaw->setMaximumSize(QSize(50, 16777215));
        label_yaw->setFont(font2);

        gridLayout_2->addWidget(label_yaw, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 2);

        horizontalLayout_12->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(groupBox_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        groupBox_8 = new QGroupBox(VWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy1.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy1);
        groupBox_8->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_8 = new QHBoxLayout(groupBox_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        graphicsEADI = new qfi_EADI(groupBox_8);
        graphicsEADI->setObjectName(QString::fromUtf8("graphicsEADI"));
        graphicsEADI->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(graphicsEADI->sizePolicy().hasHeightForWidth());
        graphicsEADI->setSizePolicy(sizePolicy4);
        graphicsEADI->setMinimumSize(QSize(250, 250));
        graphicsEADI->setMaximumSize(QSize(300, 300));
        graphicsEADI->setLayoutDirection(Qt::LeftToRight);
        graphicsEADI->setFrameShape(QFrame::NoFrame);
        graphicsEADI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsEADI->setInteractive(false);

        horizontalLayout_13->addWidget(graphicsEADI);


        horizontalLayout_8->addLayout(horizontalLayout_13);


        horizontalLayout_11->addWidget(groupBox_8);

        groupBox_4 = new QGroupBox(VWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy5);
        groupBox_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        rBtn_GNSS = new QRadioButton(groupBox_4);
        rBtn_GNSS->setObjectName(QString::fromUtf8("rBtn_GNSS"));
        rBtn_GNSS->setFont(font1);
        rBtn_GNSS->setStyleSheet(QString::fromUtf8("color: rgb(56, 99, 154);"));
        rBtn_GNSS->setChecked(true);

        verticalLayout_5->addWidget(rBtn_GNSS);

        plainTextEdit_GNSS = new QPlainTextEdit(groupBox_4);
        plainTextEdit_GNSS->setObjectName(QString::fromUtf8("plainTextEdit_GNSS"));
        plainTextEdit_GNSS->setReadOnly(true);

        verticalLayout_5->addWidget(plainTextEdit_GNSS);


        horizontalLayout_11->addWidget(groupBox_4);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_3 = new QGroupBox(VWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_14 = new QHBoxLayout(groupBox_3);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        graphicsALT = new qfi_ALT(groupBox_3);
        graphicsALT->setObjectName(QString::fromUtf8("graphicsALT"));
        graphicsALT->setEnabled(false);
        graphicsALT->setMinimumSize(QSize(0, 0));
        graphicsALT->setMaximumSize(QSize(16777215, 16777215));
        graphicsALT->setFrameShape(QFrame::NoFrame);
        graphicsALT->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsALT->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsALT->setInteractive(false);

        horizontalLayout_9->addWidget(graphicsALT);

        horizontalLayout_9->setStretch(0, 3);

        horizontalLayout_14->addLayout(horizontalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        rBtn_barometric_altimeter = new QRadioButton(groupBox_3);
        rBtn_barometric_altimeter->setObjectName(QString::fromUtf8("rBtn_barometric_altimeter"));
        rBtn_barometric_altimeter->setFont(font1);
        rBtn_barometric_altimeter->setLayoutDirection(Qt::LeftToRight);
        rBtn_barometric_altimeter->setStyleSheet(QString::fromUtf8("color: rgb(56, 99, 154);"));
        rBtn_barometric_altimeter->setChecked(true);

        verticalLayout_7->addWidget(rBtn_barometric_altimeter);

        plainTextEdit_barometric_altimeter = new QPlainTextEdit(groupBox_3);
        plainTextEdit_barometric_altimeter->setObjectName(QString::fromUtf8("plainTextEdit_barometric_altimeter"));
        plainTextEdit_barometric_altimeter->setReadOnly(true);

        verticalLayout_7->addWidget(plainTextEdit_barometric_altimeter);


        horizontalLayout_14->addLayout(verticalLayout_7);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);

        horizontalLayout_5->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(VWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(3, -1, 3, -1);
        rBtn_radio_altimeter = new QRadioButton(groupBox_2);
        rBtn_radio_altimeter->setObjectName(QString::fromUtf8("rBtn_radio_altimeter"));
        rBtn_radio_altimeter->setFont(font1);
        rBtn_radio_altimeter->setStyleSheet(QString::fromUtf8("color: rgb(56, 99, 154);"));
        rBtn_radio_altimeter->setChecked(true);

        verticalLayout_6->addWidget(rBtn_radio_altimeter);

        plainTextEdit_radio_altimeter = new QPlainTextEdit(groupBox_2);
        plainTextEdit_radio_altimeter->setObjectName(QString::fromUtf8("plainTextEdit_radio_altimeter"));
        plainTextEdit_radio_altimeter->setReadOnly(true);

        verticalLayout_6->addWidget(plainTextEdit_radio_altimeter);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        plainTextEdit_status = new QPlainTextEdit(VWidget);
        plainTextEdit_status->setObjectName(QString::fromUtf8("plainTextEdit_status"));
        plainTextEdit_status->setReadOnly(true);

        verticalLayout_3->addWidget(plainTextEdit_status);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_time = new QLabel(VWidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(label_time);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 4);
        verticalLayout_3->setStretch(2, 3);
        verticalLayout_3->setStretch(3, 1);

        horizontalLayout->addWidget(VWidget);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1559, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFont(font1);
        toolBar->setStyleSheet(QString::fromUtf8(""));
        toolBar->setIconSize(QSize(32, 32));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_connect);
        toolBar->addAction(action_GNSS_reload);
        toolBar->addAction(action_save);
        toolBar->addAction(action_serial_setting);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\234\272\350\275\275\345\272\224\347\224\250\345\271\263\345\217\260\347\256\241\347\220\206\350\275\257\344\273\266", nullptr));
        action_connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\344\274\240\346\204\237\345\231\250", nullptr));
#ifndef QT_NO_TOOLTIP
        action_connect->setToolTip(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
#endif // QT_NO_TOOLTIP
        action_open->setText(QApplication::translate("MainWindow", "\345\233\236\346\224\276", nullptr));
#ifndef QT_NO_TOOLTIP
        action_open->setToolTip(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\233\236\346\224\276", nullptr));
#endif // QT_NO_TOOLTIP
        action_GNSS_reload->setText(QApplication::translate("MainWindow", "GNSS\351\251\261\345\212\250\345\210\267\346\226\260", nullptr));
#ifndef QT_NO_TOOLTIP
        action_GNSS_reload->setToolTip(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\277\220\350\241\214GNSS\351\251\261\345\212\250", nullptr));
#endif // QT_NO_TOOLTIP
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#ifndef QT_NO_TOOLTIP
        action_save->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\344\274\240\346\204\237\345\231\250\344\277\241\346\201\257", nullptr));
#endif // QT_NO_TOOLTIP
        action_play->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_TOOLTIP
        action_play->setToolTip(QApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
#endif // QT_NO_TOOLTIP
        action_serial_setting->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        action_serial_setting->setToolTip(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\220\212\350\210\261", nullptr));
        label_display->setText(QString());
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\277\257\344\273\260\350\247\222(\302\260):", nullptr));
        lineEdit_pitch->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\201\217\350\210\252\350\247\222(\302\260):", nullptr));
        lineEdit_yaw->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\273\232\345\212\250\350\247\222(\302\260):", nullptr));
        lineEdit_roll->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\250\241\345\274\217\345\210\207\346\215\242:", nullptr));
        comboBox_camera_mode->setItemText(0, QApplication::translate("MainWindow", "\345\217\257\350\247\201\345\205\211", nullptr));
        comboBox_camera_mode->setItemText(1, QApplication::translate("MainWindow", "\347\272\242\345\244\226", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "\347\204\246\350\267\235:", nullptr));
        btn_camera_apply->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        btn_center->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\345\233\236\344\270\255", nullptr));
        btn_downward->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\345\220\221\344\270\213", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\215\225\346\255\245\350\260\203\347\204\246: ", nullptr));
        tBn_zoom_up->setText(QApplication::translate("MainWindow", "...", nullptr));
        tBn_zoom_down->setText(QApplication::translate("MainWindow", "...", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\267\262\344\277\235\345\255\230\345\233\276\346\225\260\351\207\217:", nullptr));
        label_image_num->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\231\257\350\261\241\345\214\271\351\205\215", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201:", nullptr));
        btn_scene_matching->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\347\273\217\345\272\246", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\347\272\254\345\272\246", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\345\234\260\345\275\242\345\214\271\351\205\215", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
        btn_terrain_matching->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "\347\273\217\345\272\246", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "\347\272\254\345\272\246", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\351\253\230\345\272\246", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\351\253\230\345\272\246\350\236\215\345\220\210", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\351\253\230\345\272\246", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
        btn_high_fusion->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\345\220\212\350\210\261\347\212\266\346\200\201", nullptr));
        label_roll->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "roll:", nullptr));
        label_pitch->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "pitch:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "yaw:", nullptr));
        label_yaw->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\351\243\236\346\234\272\347\212\266\346\200\201", nullptr));
        groupBox_4->setTitle(QString());
        rBtn_GNSS->setText(QApplication::translate("MainWindow", "\347\273\204\345\220\210\345\257\274\350\210\252\357\274\210GNSS+\346\203\257\345\257\274\357\274\211", nullptr));
        rBtn_barometric_altimeter->setText(QApplication::translate("MainWindow", "\346\260\224\345\216\213\351\253\230\345\272\246\350\256\241", nullptr));
        rBtn_radio_altimeter->setText(QApplication::translate("MainWindow", "\346\227\240\347\272\277\347\224\265\351\253\230\345\272\246\350\256\241", nullptr));
        label_time->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

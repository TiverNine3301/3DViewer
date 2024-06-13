/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <glview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *Setting;
    QPushButton *open_file;
    QLineEdit *path;
    QPushButton *download;
    QPushButton *remove;
    QGroupBox *groupBox_geometry;
    QGroupBox *groupBox;
    QSlider *x_rorate_slider;
    QSlider *y_rorate_slider;
    QSlider *z_rorate_slider;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *x_rorate_spin;
    QDoubleSpinBox *y_rorate_spin;
    QDoubleSpinBox *z_rorate_spin;
    QGroupBox *groupBox_2;
    QSlider *x_pos_slider;
    QSlider *y_pos_slider;
    QSlider *z_pos_slider;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *z_pos_spin;
    QDoubleSpinBox *x_pos_spin;
    QDoubleSpinBox *y_pos_spin;
    QGroupBox *groupBox_4;
    QSlider *scale_slider;
    QDoubleSpinBox *scale_spin;
    QPushButton *pushButton_geometry;
    QGroupBox *groupBox_color;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_color;
    QPushButton *but_color;
    QPushButton *but_color_back;
    QLabel *label_11;
    QPushButton *but_color_ver;
    QGroupBox *groupBox_vertices;
    QRadioButton *radioButton_no;
    QRadioButton *radioButton_circle;
    QRadioButton *radioButton_square;
    QPushButton *pushButton_vertices;
    QSlider *ver_slider;
    QLabel *label_9;
    QDoubleSpinBox *ver_spin;
    QGroupBox *groupBox_edges;
    QRadioButton *radioButton_solid;
    QRadioButton *radioButton_dashes;
    QPushButton *pushButton_edges;
    QSlider *ed_slider;
    QLabel *label_10;
    QDoubleSpinBox *ed_spin;
    QGroupBox *groupBox_project;
    QPushButton *pushButton_project;
    QRadioButton *radioButton_central;
    QRadioButton *radioButton_ortho;
    QGroupBox *groupBox_save;
    QPushButton *pushButton_save;
    QPushButton *make_jpeg;
    QPushButton *make_bmp;
    QPushButton *make_gif;
    QLabel *error;
    QWidget *view;
    QFrame *line;
    QLabel *label_23;
    glView *openGLWidget;
    QPushButton *auto_rotate;
    QGroupBox *groupBox_info;
    QLabel *label_12;
    QLabel *label_name;
    QLabel *label_count_vert;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_count_edge;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1403, 1025);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #606060, stop:0.1 #808080, stop:0.9 #505050, stop:1 #707070);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Setting = new QGroupBox(centralwidget);
        Setting->setObjectName("Setting");
        Setting->setGeometry(QRect(10, 3, 321, 991));
        QFont font;
        font.setFamilies({QString::fromUtf8("AppleGothic")});
        font.setPointSize(20);
        font.setBold(false);
        Setting->setFont(font);
        Setting->setStyleSheet(QString::fromUtf8("border-radius: 40px;\n"
"padding: 0.2em 0.2em 0.3em 0.2em;\n"
"border: 1px solid rgb(100, 100, 100);\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #4c87a1, stop:0.1 rgb(58, 104, 124), stop:1 #2a4b59);\n"
"color: white;"));
        Setting->setAlignment(Qt::AlignCenter);
        open_file = new QPushButton(Setting);
        open_file->setObjectName("open_file");
        open_file->setGeometry(QRect(263, 26, 51, 51));
        QFont font1;
        font1.setPointSize(31);
        open_file->setFont(font1);
        open_file->setAutoFillBackground(false);
        open_file->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"\n"
""));
        open_file->setIconSize(QSize(50, 50));
        open_file->setCheckable(true);
        path = new QLineEdit(Setting);
        path->setObjectName("path");
        path->setGeometry(QRect(2, 31, 261, 41));
        path->setFocusPolicy(Qt::ClickFocus);
        path->setContextMenuPolicy(Qt::CustomContextMenu);
        path->setLayoutDirection(Qt::LeftToRight);
        path->setStyleSheet(QString::fromUtf8("border: 0px;"));
        path->setFrame(true);
        path->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        path->setClearButtonEnabled(false);
        download = new QPushButton(Setting);
        download->setObjectName("download");
        download->setGeometry(QRect(0, 74, 127, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Chalkboard")});
        font2.setPointSize(18);
        font2.setBold(true);
        download->setFont(font2);
        download->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    padding: 0.2em 0.2em 0.3em 0.2em;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #33ff33, stop:0.1 #00cc00, stop:1 #00e600); \n"
"    color: white;\n"
"}\n"
"QPushButton::hover {\n"
"    border: 2px solid rgb(100, 100, 100);\n"
"}\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #00e600, stop:0.1 #009900, stop:1 #00cc00); \n"
"}\n"
""));
        remove = new QPushButton(Setting);
        remove->setObjectName("remove");
        remove->setGeometry(QRect(140, 74, 127, 41));
        remove->setFont(font2);
        remove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    padding: 0.2em 0.2em 0.3em 0.2em;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #ff3333, stop:0.1 #cc0000, stop:1 #e60000);\n"
"    color: white;\n"
"}\n"
"QPushButton::hover {\n"
"    border: 2px solid rgb(100, 100, 100); \n"
"}\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #e60000, stop:0.1 #990000, stop:1 #cc0000);\n"
"}"));
        groupBox_geometry = new QGroupBox(Setting);
        groupBox_geometry->setObjectName("groupBox_geometry");
        groupBox_geometry->setGeometry(QRect(0, 133, 321, 32));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("AppleGothic")});
        font3.setPointSize(18);
        groupBox_geometry->setFont(font3);
        groupBox_geometry->setStyleSheet(QString::fromUtf8("background-color: #091114;\n"
"border-radius: 0px;\n"
""));
        groupBox_geometry->setFlat(false);
        groupBox_geometry->setCheckable(false);
        groupBox = new QGroupBox(groupBox_geometry);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 31, 321, 111));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("AppleGothic")});
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
""));
        groupBox->setAlignment(Qt::AlignCenter);
        x_rorate_slider = new QSlider(groupBox);
        x_rorate_slider->setObjectName("x_rorate_slider");
        x_rorate_slider->setGeometry(QRect(30, 20, 221, 25));
        x_rorate_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        x_rorate_slider->setMinimum(-360);
        x_rorate_slider->setMaximum(360);
        x_rorate_slider->setOrientation(Qt::Horizontal);
        y_rorate_slider = new QSlider(groupBox);
        y_rorate_slider->setObjectName("y_rorate_slider");
        y_rorate_slider->setGeometry(QRect(30, 45, 221, 25));
        y_rorate_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        y_rorate_slider->setMinimum(-360);
        y_rorate_slider->setMaximum(360);
        y_rorate_slider->setOrientation(Qt::Horizontal);
        z_rorate_slider = new QSlider(groupBox);
        z_rorate_slider->setObjectName("z_rorate_slider");
        z_rorate_slider->setGeometry(QRect(30, 70, 221, 25));
        z_rorate_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        z_rorate_slider->setMinimum(-360);
        z_rorate_slider->setMaximum(360);
        z_rorate_slider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 17, 21, 31));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 43, 21, 31));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 67, 21, 31));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_5->setAlignment(Qt::AlignCenter);
        x_rorate_spin = new QDoubleSpinBox(groupBox);
        x_rorate_spin->setObjectName("x_rorate_spin");
        x_rorate_spin->setGeometry(QRect(259, 20, 61, 22));
        x_rorate_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        x_rorate_spin->setMinimum(-360.000000000000000);
        x_rorate_spin->setMaximum(360.000000000000000);
        y_rorate_spin = new QDoubleSpinBox(groupBox);
        y_rorate_spin->setObjectName("y_rorate_spin");
        y_rorate_spin->setGeometry(QRect(259, 45, 61, 22));
        y_rorate_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        y_rorate_spin->setMinimum(-360.000000000000000);
        y_rorate_spin->setMaximum(360.000000000000000);
        z_rorate_spin = new QDoubleSpinBox(groupBox);
        z_rorate_spin->setObjectName("z_rorate_spin");
        z_rorate_spin->setGeometry(QRect(259, 70, 61, 22));
        z_rorate_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        z_rorate_spin->setMinimum(-360.000000000000000);
        z_rorate_spin->setMaximum(360.000000000000000);
        groupBox_2 = new QGroupBox(groupBox_geometry);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 141, 321, 111));
        groupBox_2->setFont(font4);
        groupBox_2->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        x_pos_slider = new QSlider(groupBox_2);
        x_pos_slider->setObjectName("x_pos_slider");
        x_pos_slider->setGeometry(QRect(30, 20, 221, 25));
        x_pos_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        x_pos_slider->setMinimum(-100);
        x_pos_slider->setMaximum(100);
        x_pos_slider->setSingleStep(1);
        x_pos_slider->setOrientation(Qt::Horizontal);
        y_pos_slider = new QSlider(groupBox_2);
        y_pos_slider->setObjectName("y_pos_slider");
        y_pos_slider->setGeometry(QRect(30, 45, 221, 25));
        y_pos_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        y_pos_slider->setMinimum(-100);
        y_pos_slider->setMaximum(100);
        y_pos_slider->setSingleStep(1);
        y_pos_slider->setOrientation(Qt::Horizontal);
        z_pos_slider = new QSlider(groupBox_2);
        z_pos_slider->setObjectName("z_pos_slider");
        z_pos_slider->setGeometry(QRect(30, 70, 221, 25));
        z_pos_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        z_pos_slider->setMinimum(-100);
        z_pos_slider->setMaximum(100);
        z_pos_slider->setSingleStep(1);
        z_pos_slider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 18, 21, 31));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 44, 21, 31));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 69, 21, 31));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_8->setAlignment(Qt::AlignCenter);
        z_pos_spin = new QDoubleSpinBox(groupBox_2);
        z_pos_spin->setObjectName("z_pos_spin");
        z_pos_spin->setGeometry(QRect(259, 70, 61, 22));
        z_pos_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        z_pos_spin->setMinimum(-100.000000000000000);
        z_pos_spin->setMaximum(100.000000000000000);
        z_pos_spin->setSingleStep(1.000000000000000);
        x_pos_spin = new QDoubleSpinBox(groupBox_2);
        x_pos_spin->setObjectName("x_pos_spin");
        x_pos_spin->setGeometry(QRect(259, 20, 61, 22));
        x_pos_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        x_pos_spin->setMinimum(-100.000000000000000);
        x_pos_spin->setMaximum(100.000000000000000);
        x_pos_spin->setSingleStep(1.000000000000000);
        y_pos_spin = new QDoubleSpinBox(groupBox_2);
        y_pos_spin->setObjectName("y_pos_spin");
        y_pos_spin->setGeometry(QRect(259, 45, 61, 22));
        y_pos_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        y_pos_spin->setMinimum(-100.000000000000000);
        y_pos_spin->setMaximum(100.000000000000000);
        y_pos_spin->setSingleStep(1.000000000000000);
        groupBox_4 = new QGroupBox(groupBox_geometry);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 251, 321, 51));
        groupBox_4->setFont(font4);
        groupBox_4->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
""));
        groupBox_4->setAlignment(Qt::AlignCenter);
        scale_slider = new QSlider(groupBox_4);
        scale_slider->setObjectName("scale_slider");
        scale_slider->setGeometry(QRect(30, 20, 221, 25));
        scale_slider->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: 0px;\n"
"color: green;"));
        scale_slider->setMinimum(10);
        scale_slider->setMaximum(1000);
        scale_slider->setSingleStep(10);
        scale_slider->setValue(100);
        scale_slider->setOrientation(Qt::Horizontal);
        scale_spin = new QDoubleSpinBox(groupBox_4);
        scale_spin->setObjectName("scale_spin");
        scale_spin->setGeometry(QRect(259, 20, 61, 22));
        scale_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        scale_spin->setMinimum(10.000000000000000);
        scale_spin->setMaximum(1000.000000000000000);
        scale_spin->setSingleStep(10.000000000000000);
        scale_spin->setValue(100.000000000000000);
        pushButton_geometry = new QPushButton(groupBox_geometry);
        pushButton_geometry->setObjectName("pushButton_geometry");
        pushButton_geometry->setGeometry(QRect(0, 0, 321, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("AppleGothic")});
        font5.setPointSize(18);
        font5.setBold(true);
        pushButton_geometry->setFont(font5);
        pushButton_geometry->setLayoutDirection(Qt::LeftToRight);
        pushButton_geometry->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        groupBox_color = new QGroupBox(Setting);
        groupBox_color->setObjectName("groupBox_color");
        groupBox_color->setGeometry(QRect(0, 165, 321, 32));
        groupBox_color->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
"border-radius: 0px;"));
        label = new QLabel(groupBox_color);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 43, 101, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("AppleGothic")});
        font6.setPointSize(16);
        label->setFont(font6);
        label->setStyleSheet(QString::fromUtf8("border: 0px;"));
        label_2 = new QLabel(groupBox_color);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 75, 141, 31));
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("border: 0px;"));
        pushButton_color = new QPushButton(groupBox_color);
        pushButton_color->setObjectName("pushButton_color");
        pushButton_color->setGeometry(QRect(0, 0, 321, 31));
        pushButton_color->setFont(font5);
        pushButton_color->setLayoutDirection(Qt::LeftToRight);
        pushButton_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        but_color = new QPushButton(groupBox_color);
        but_color->setObjectName("but_color");
        but_color->setGeometry(QRect(110, 40, 51, 32));
        but_color_back = new QPushButton(groupBox_color);
        but_color_back->setObjectName("but_color_back");
        but_color_back->setGeometry(QRect(170, 70, 51, 32));
        but_color_back->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 104, 124);"));
        label_11 = new QLabel(groupBox_color);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 110, 111, 31));
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8("border: 0px;"));
        but_color_ver = new QPushButton(groupBox_color);
        but_color_ver->setObjectName("but_color_ver");
        but_color_ver->setGeometry(QRect(130, 110, 51, 32));
        groupBox_vertices = new QGroupBox(Setting);
        groupBox_vertices->setObjectName("groupBox_vertices");
        groupBox_vertices->setGeometry(QRect(0, 197, 321, 32));
        groupBox_vertices->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
"border-radius: 0px;"));
        radioButton_no = new QRadioButton(groupBox_vertices);
        radioButton_no->setObjectName("radioButton_no");
        radioButton_no->setGeometry(QRect(27, 32, 61, 31));
        radioButton_no->setFont(font6);
        radioButton_no->setFocusPolicy(Qt::TabFocus);
        radioButton_no->setStyleSheet(QString::fromUtf8("border: 0px;"));
        radioButton_no->setChecked(true);
        radioButton_circle = new QRadioButton(groupBox_vertices);
        radioButton_circle->setObjectName("radioButton_circle");
        radioButton_circle->setGeometry(QRect(117, 33, 71, 31));
        radioButton_circle->setFont(font6);
        radioButton_circle->setStyleSheet(QString::fromUtf8("border: 0px;"));
        radioButton_square = new QRadioButton(groupBox_vertices);
        radioButton_square->setObjectName("radioButton_square");
        radioButton_square->setGeometry(QRect(217, 33, 81, 31));
        radioButton_square->setFont(font6);
        radioButton_square->setStyleSheet(QString::fromUtf8("border: 0px;"));
        pushButton_vertices = new QPushButton(groupBox_vertices);
        pushButton_vertices->setObjectName("pushButton_vertices");
        pushButton_vertices->setGeometry(QRect(0, 0, 321, 31));
        pushButton_vertices->setFont(font5);
        pushButton_vertices->setLayoutDirection(Qt::LeftToRight);
        pushButton_vertices->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        ver_slider = new QSlider(groupBox_vertices);
        ver_slider->setObjectName("ver_slider");
        ver_slider->setGeometry(QRect(40, 70, 211, 25));
        ver_slider->setStyleSheet(QString::fromUtf8("border: 0px;"));
        ver_slider->setMaximum(30);
        ver_slider->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(groupBox_vertices);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1, 65, 41, 30));
        QFont font7;
        font7.setPointSize(16);
        label_9->setFont(font7);
        label_9->setStyleSheet(QString::fromUtf8("border: 0px;"));
        ver_spin = new QDoubleSpinBox(groupBox_vertices);
        ver_spin->setObjectName("ver_spin");
        ver_spin->setGeometry(QRect(259, 70, 61, 22));
        ver_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        ver_spin->setMaximum(30.000000000000000);
        groupBox_edges = new QGroupBox(Setting);
        groupBox_edges->setObjectName("groupBox_edges");
        groupBox_edges->setGeometry(QRect(0, 229, 321, 32));
        groupBox_edges->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
"border-radius: 0px;"));
        radioButton_solid = new QRadioButton(groupBox_edges);
        radioButton_solid->setObjectName("radioButton_solid");
        radioButton_solid->setGeometry(QRect(60, 32, 71, 31));
        radioButton_solid->setFont(font7);
        radioButton_solid->setStyleSheet(QString::fromUtf8("border:0px;"));
        radioButton_solid->setChecked(true);
        radioButton_dashes = new QRadioButton(groupBox_edges);
        radioButton_dashes->setObjectName("radioButton_dashes");
        radioButton_dashes->setGeometry(QRect(180, 32, 81, 31));
        radioButton_dashes->setFont(font7);
        radioButton_dashes->setStyleSheet(QString::fromUtf8("border:0px;"));
        pushButton_edges = new QPushButton(groupBox_edges);
        pushButton_edges->setObjectName("pushButton_edges");
        pushButton_edges->setGeometry(QRect(0, 0, 321, 31));
        pushButton_edges->setFont(font5);
        pushButton_edges->setLayoutDirection(Qt::LeftToRight);
        pushButton_edges->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        ed_slider = new QSlider(groupBox_edges);
        ed_slider->setObjectName("ed_slider");
        ed_slider->setGeometry(QRect(40, 70, 211, 25));
        ed_slider->setStyleSheet(QString::fromUtf8("border: 0px;"));
        ed_slider->setMaximum(30);
        ed_slider->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(groupBox_edges);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1, 65, 41, 30));
        label_10->setFont(font7);
        label_10->setStyleSheet(QString::fromUtf8("border: 0px;"));
        ed_spin = new QDoubleSpinBox(groupBox_edges);
        ed_spin->setObjectName("ed_spin");
        ed_spin->setGeometry(QRect(259, 70, 61, 22));
        ed_spin->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    background: #757476;\n"
"    color: black;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #757476, stop: 1 #5E5E5F);\n"
"    border: 1px solid black;\n"
"    border-radius: 5px;\n"
"    width: 12px;\n"
"}\n"
"\n"
"QDoubleSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"}\n"
"\n"
"QDoubleSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"QDoubleSpinBox::up-button:pressed, QDoubleSpinBox::down-button:pressed {\n"
"    background: #5E5E5F;\n"
"    border: 1px solid black;\n"
"}"));
        ed_spin->setMaximum(30.000000000000000);
        groupBox_project = new QGroupBox(Setting);
        groupBox_project->setObjectName("groupBox_project");
        groupBox_project->setGeometry(QRect(0, 261, 321, 32));
        groupBox_project->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
"border-radius: 0px;"));
        pushButton_project = new QPushButton(groupBox_project);
        pushButton_project->setObjectName("pushButton_project");
        pushButton_project->setGeometry(QRect(0, 0, 321, 31));
        pushButton_project->setFont(font5);
        pushButton_project->setLayoutDirection(Qt::LeftToRight);
        pushButton_project->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        radioButton_central = new QRadioButton(groupBox_project);
        radioButton_central->setObjectName("radioButton_central");
        radioButton_central->setGeometry(QRect(20, 40, 111, 31));
        radioButton_central->setFont(font7);
        radioButton_central->setStyleSheet(QString::fromUtf8("border:0px;"));
        radioButton_ortho = new QRadioButton(groupBox_project);
        radioButton_ortho->setObjectName("radioButton_ortho");
        radioButton_ortho->setGeometry(QRect(180, 40, 131, 31));
        radioButton_ortho->setFont(font7);
        radioButton_ortho->setStyleSheet(QString::fromUtf8("border:0px;"));
        radioButton_ortho->setChecked(true);
        groupBox_save = new QGroupBox(Setting);
        groupBox_save->setObjectName("groupBox_save");
        groupBox_save->setGeometry(QRect(0, 293, 321, 32));
        groupBox_save->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #2a4b59, stop:0.1 #2a4b59, stop:1 #2a4b59);\n"
"border-radius: 0px;"));
        pushButton_save = new QPushButton(groupBox_save);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(0, 0, 321, 31));
        pushButton_save->setFont(font5);
        pushButton_save->setLayoutDirection(Qt::LeftToRight);
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4c87a1;\n"
"text-align: left;\n"
"}\n"
"QPushButton::hover {\n"
"background-color:  #2a4b59;\n"
"}"));
        make_jpeg = new QPushButton(groupBox_save);
        make_jpeg->setObjectName("make_jpeg");
        make_jpeg->setGeometry(QRect(26, 40, 71, 32));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("AppleGothic")});
        font8.setPointSize(14);
        font8.setBold(true);
        make_jpeg->setFont(font8);
        make_jpeg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 0.2em 0.2em 0.3em 0.2em;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #aaaaaa, stop:0.1 #888888, stop:1 #999999); \n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    border: 2px solid rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #999999, stop:0.1 #777777, stop:1 #888888); \n"
"}\n"
""));
        make_bmp = new QPushButton(groupBox_save);
        make_bmp->setObjectName("make_bmp");
        make_bmp->setGeometry(QRect(124, 40, 71, 32));
        make_bmp->setFont(font8);
        make_bmp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 0.2em 0.2em 0.3em 0.2em;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #aaaaaa, stop:0.1 #888888, stop:1 #999999); \n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    border: 2px solid rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #999999, stop:0.1 #777777, stop:1 #888888); \n"
"}\n"
""));
        make_gif = new QPushButton(groupBox_save);
        make_gif->setObjectName("make_gif");
        make_gif->setGeometry(QRect(221, 40, 71, 32));
        make_gif->setFont(font8);
        make_gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding: 0.2em 0.2em 0.3em 0.2em;\n"
"    border: 1px solid rgb(100, 100, 100);\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #aaaaaa, stop:0.1 #888888, stop:1 #999999); \n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"    border: 2px solid rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #999999, stop:0.1 #777777, stop:1 #888888);\n"
"}"));
        error = new QLabel(Setting);
        error->setObjectName("error");
        error->setGeometry(QRect(16, 130, 291, 41));
        QFont font9;
        font9.setPointSize(20);
        error->setFont(font9);
        error->setStyleSheet(QString::fromUtf8("background:transparent; border:0;"));
        error->raise();
        open_file->raise();
        path->raise();
        download->raise();
        remove->raise();
        groupBox_color->raise();
        groupBox_edges->raise();
        groupBox_project->raise();
        groupBox_save->raise();
        groupBox_geometry->raise();
        groupBox_vertices->raise();
        view = new QWidget(centralwidget);
        view->setObjectName("view");
        view->setGeometry(QRect(350, 3, 1041, 991));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("AppleGothic")});
        font10.setPointSize(20);
        view->setFont(font10);
        view->setStyleSheet(QString::fromUtf8("border-radius: 40px;\n"
"border: 1px solid rgb(100, 100, 100);\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #4c87a1, stop:0.1 rgb(58, 104, 124), stop:1 #2a4b59);"));
        line = new QFrame(view);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 50, 1040, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_23 = new QLabel(view);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(500, 1, 51, 31));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("AppleGothic")});
        font11.setPointSize(20);
        font11.setBold(true);
        label_23->setFont(font11);
        label_23->setStyleSheet(QString::fromUtf8("background: transparent; border: 0; color:white;"));
        openGLWidget = new glView(view);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(1, 52, 1039, 891));
        openGLWidget->setStyleSheet(QString::fromUtf8(""));
        auto_rotate = new QPushButton(view);
        auto_rotate->setObjectName("auto_rotate");
        auto_rotate->setGeometry(QRect(530, 951, 51, 31));
        QFont font12;
        font12.setPointSize(34);
        auto_rotate->setFont(font12);
        auto_rotate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"border: 0;\n"
"color: white;\n"
"}\n"
"QPushButton::hover {\n"
"color: grey;\n"
"}"));
        groupBox_info = new QGroupBox(view);
        groupBox_info->setObjectName("groupBox_info");
        groupBox_info->setGeometry(QRect(0, 25, 1041, 26));
        groupBox_info->setStyleSheet(QString::fromUtf8("background:transparent; border:0;"));
        label_12 = new QLabel(groupBox_info);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(12, 0, 49, 25));
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_name = new QLabel(groupBox_info);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(70, 0, 231, 25));
        label_name->setFont(font7);
        label_count_vert = new QLabel(groupBox_info);
        label_count_vert->setObjectName("label_count_vert");
        label_count_vert->setGeometry(QRect(560, 0, 61, 25));
        label_count_vert->setFont(font7);
        label_15 = new QLabel(groupBox_info);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(450, 0, 111, 25));
        label_15->setFont(font7);
        label_16 = new QLabel(groupBox_info);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(878, 0, 101, 25));
        label_16->setFont(font7);
        label_count_edge = new QLabel(groupBox_info);
        label_count_edge->setObjectName("label_count_edge");
        label_count_edge->setGeometry(QRect(978, 0, 61, 25));
        label_count_edge->setFont(font7);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1403, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        pushButton_geometry->setDefault(false);
        pushButton_color->setDefault(false);
        pushButton_vertices->setDefault(false);
        pushButton_edges->setDefault(false);
        pushButton_project->setDefault(false);
        pushButton_save->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Setting->setTitle(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "\360\237\223\201", nullptr));
        download->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        groupBox_geometry->setTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Position", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        pushButton_geometry->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Geometry", nullptr));
        groupBox_color->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Model color", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Background color", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Color", nullptr));
        but_color->setText(QString());
        but_color_back->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Vertices color", nullptr));
        but_color_ver->setText(QString());
        groupBox_vertices->setTitle(QString());
        radioButton_no->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        radioButton_circle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        radioButton_square->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        pushButton_vertices->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Vertices", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        groupBox_edges->setTitle(QString());
        radioButton_solid->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        radioButton_dashes->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        pushButton_edges->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Edges", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        groupBox_project->setTitle(QString());
        pushButton_project->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Projection", nullptr));
        radioButton_central->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        radioButton_ortho->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
        groupBox_save->setTitle(QString());
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "\342\226\266 Save", nullptr));
        make_jpeg->setText(QCoreApplication::translate("MainWindow", "JPEG", nullptr));
        make_bmp->setText(QCoreApplication::translate("MainWindow", "BMP", nullptr));
        make_gif->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        error->setText(QCoreApplication::translate("MainWindow", "ERROR. UNABLE TO OPEN FILE", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        auto_rotate->setText(QCoreApplication::translate("MainWindow", "\342\226\266", nullptr));
        groupBox_info->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_name->setText(QString());
        label_count_vert->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Count vertices:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Count edges:", nullptr));
        label_count_edge->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

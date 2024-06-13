#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qgifimage.h"

#include <QColorDialog>
#include <QDate>
#include <QDebug>
#include <QFileDialog>
#include <QGroupBox>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QPixmap>
#include <QPoint>
#include <QPropertyAnimation>
#include <QScreen>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

#include "glview.h"
extern "C" {
#include "../affine_transformations.h"
#include "../parse_obj.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  bool isGeometry;
  bool isColor;
  bool isVertices;
  bool isEdges;
  bool isProject;
  bool isSave;
  bool isRotate;
  bool recording;
  int ms;
  QGifImage *gif;
  QTimer *time_gif;
  QTimer tmr;
  QString filePath_gif;
  int length;

 private:
  Ui::MainWindow *ui;
 private slots:
  void fileopen();
  void load_model();
  void remove();
  void geometry();
  void color();
  void vertices();
  void edges();
  void projection();
  void save();
  void move();
  void but_color();
  void make_scr();
  void make_gif();
  void save_gif();
  void rotate_x();
  void rotate_y();
  void rotate_z();
  void move_x();
  void move_y();
  void move_z();
  void scale_obj();
  void type_line();
  void type_project();
  void type_vertices();
  void last_setting();
  void size_ver();
  void size_edge();
  void auto_rotate();
  void switch_menu(bool off);
};
#endif  // MAINWINDOW_H

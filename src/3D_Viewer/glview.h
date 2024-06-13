#ifndef GLVIEW_H
#define GLVIEW_H

#include <QWidget>
#include <QtOpenGL>
#include <QDebug>
#include <QOpenGLWidget>
#include <QTimer>
#include <QSettings>

extern "C" {
#include "../affine_transformations.h"
#include "../parse_obj.h"
}

class glView : public QOpenGLWidget {
  Q_OBJECT

 public:
  glView(QWidget* parent = nullptr) : QOpenGLWidget(parent){init_default();};
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;
  void updateGL();
  void init_default();
  object* obj = nullptr;
  float max_vertices;
  QSettings setting;
  float* vertices_array = nullptr;
  int* indices_array = nullptr;
  bool isReady = false;
  bool staticRotate = true;
  double angles[3] = {0,0,0};
  double move_pos[3] = {0,0,0};
  double scale_value = 1; // !1!
  int cnt_timer = 0;
  bool toRemove = false;
  void type_project();
  void type_line();
  void type_vertices();
  void clear_window();
  //  private:
};

#endif  // GLVIEW_H

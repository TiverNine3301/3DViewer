#include "glview.h"

void glView::initializeGL() {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glEnable(GL_DEPTH_TEST);
    type_project();
}

void glView::resizeGL(int w, int h) { glViewport(0, 0, w, h); }

void glView::paintGL() {
  if (toRemove){
    return;
  }
  initializeGL();
  glClearColor(setting.value("Color_back_r").toDouble(), setting.value("Color_back_g").toDouble(), setting.value("Color_back_b").toDouble(), 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnableClientState(GL_VERTEX_ARRAY);
  type_line();
  type_vertices();
  glDisableClientState(GL_VERTEX_ARRAY);

}


void glView::init_default(){
    obj = parse_obj_file(setting.value("Path").toString().toLocal8Bit().data());
    //qDebug() << obj << setting.value("Path").toString().toLocal8Bit().data();
    vertices_array = (float *) malloc((obj->count_v * sizeof(float)) * 3);
    obj_vertices_to_1D_array(obj,vertices_array);
    indices_array = (int *) calloc(count_indices_for_polygon(obj), sizeof(int));
    obj_polygons_to_1D_array(obj,indices_array);
}


void glView::type_project(){
    if(setting.value("isCentral") == false){
        glOrtho(-1 , 1 , -1, 1, -5, 5);
        glTranslatef(0, 0, 0);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
    }
        else{
        glFrustum(-0.5 , 0.5 , -0.5 , 0.5, 0.2, 1000);
        glTranslatef(0, 0, -0.9);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
    }
}

void glView::type_line(){
    glLineWidth(setting.value("Size_Edge").toDouble());
    glColor3f(setting.value("Color_edge_r").toDouble(), setting.value("Color_edge_g").toDouble(), setting.value("Color_edge_b").toDouble());
    if (setting.value("isDash") == true) {
      glEnable(GL_LINE_STIPPLE);
      glLineStipple(1, 0x00FF);
    } else
      glDisable(GL_LINE_STIPPLE);
    glVertexPointer(3, GL_FLOAT, 0, vertices_array);
    glDrawElements(GL_LINES, count_indices_for_polygon(obj), GL_UNSIGNED_INT, indices_array);
}

void glView::type_vertices(){
    if(setting.value("Vertices") == "Circle"){
        glPointSize(setting.value("Size_Vertices").toDouble());
        glColor3f(setting.value("Color_ver_r").toDouble(), setting.value("Color_ver_g").toDouble(), setting.value("Color_ver_b").toDouble());
        glEnable(GL_POINT_SMOOTH);
        glBegin(GL_POINTS);
        for (int i = 0; i < obj->count_v; ++i) {
            glVertex3fv(&vertices_array[i * 3]);
        }
        glEnd();
        glDisable(GL_POINT_SMOOTH);
    }
    else if(setting.value("Vertices") == "Square"){
        glPointSize(setting.value("Size_Vertices").toDouble());
        glColor3f(setting.value("Color_ver_r").toDouble(), setting.value("Color_ver_g").toDouble(), setting.value("Color_ver_b").toDouble());
        glDisable(GL_POINT_SMOOTH);
        glBegin(GL_POINTS);
        for (int i = 0; i < obj->count_v; ++i) {
            glVertex3fv(&vertices_array[i * 3]);
        }
        glEnd();

    }
}

void glView::clear_window(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}


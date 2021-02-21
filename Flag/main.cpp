#include<windows.h>
#include <GL/glut.h>


    void draw(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.5f, 0.5f, 0.5f);
   glBegin(GL_QUADS);
        glVertex2f(-15, 16.5);
        glVertex2f(15, 16.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();

     glColor3f(1.0,1.0,1.0);
   glBegin(GL_QUADS);
        glVertex2f(-15, 13.5);
        glVertex2f(15, 13.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();



    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-15, 10.5);
        glVertex2f(15, 10.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();

    glColor3f(1.0f, 0.0f, 0.0f);
   glBegin(GL_QUADS);
        glVertex2f(-15, 7.5);
        glVertex2f(15, 7.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();



   glColor3f(1.0,1.0,1.0);
   glBegin(GL_QUADS);
        glVertex2f(-15, 4.5);
        glVertex2f(15, 4.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();

        glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-15, 4.5);
        glVertex2f(15, 4.5);
        glVertex2f(15, -1.5);
        glVertex2f(-15, -1.5);
    glEnd();
    glFlush();


    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_QUADS);
        glVertex2f(-15, 4.5);
        glVertex2f(15, 4.5);
        glVertex2f(15, 1.5);
        glVertex2f(-15,1.5);
    glEnd();
    glFlush();


    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(-15, -1.5);
        glVertex2f(15, -1.5);
        glVertex2f(15, -4.5);
        glVertex2f(-15, -4.5);
    glEnd();
    glFlush();



    glutSwapBuffers();
}


void init(){
    glClearColor(0,0,0,0);
    glOrtho(-30, 30, -25, 25, -10, 10);
    glMatrixMode(GL_PROJECTION);
glLoadIdentity();
}
int main(){
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1152, 648);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Seven Color Flag");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

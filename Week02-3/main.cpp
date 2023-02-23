#include <GL/glut.h>
void display()
{
     glColor3f(0/255.0,1/255.0,0/255.0);
     glBegin(GL_POLYGON);
      glVertex2f((0-100)/100.0,-(1-100)/100.0);

     glEnd();


    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week02");
    glutDisplayFunc(display);
    glutMainLoop();
}

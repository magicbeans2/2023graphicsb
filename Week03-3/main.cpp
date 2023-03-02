#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glBegin(GL_POLYGON);
 glVertex2f(0.27,-0.12);
 glVertex2f(0.13,0.06);
 glVertex2f(-0.29,0.60);
 glVertex2f(-0.67,0.37);
 glVertex2f(-0.49,0.05);
 glVertex2f(-0.46,-0.13);
 glVertex2f(-0.29,-0.37);
 glVertex2f(-0.04,-0.31);
 glVertex2f(0.33,-0.15);
 glVertex2f(0.57,0.29);
 glEnd();



glutSwapBuffers();
}
void mouse(int button,int state,int x, int y)
{

     X=(x-150)/150.0;
     Y=-(y-150)/150.0;
if(state==GLUT_DOWN)printf(" glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week03");
    glutMouseFunc(mouse);
    glutDisplayFunc(display);
    glutMainLoop();
}

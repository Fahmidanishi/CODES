#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

   float m;
   float x,y;
   float x1,x0,y1,y0;


void display(void)
{
   m=(y0-y1)/(x0-x1);

   if(abs(m)<= 1){

    for(float x =x0; x<x1; x++){

        y=y+m;

        glBegin(GL_POINTS);
        glVertex2f(x,y);
        glEnd();
     }
   }
    else if(abs(m)>1){

        for(float y=y0; y<y1; y++){

            x=x+(1/m);

            glBegin(GL_POINTS);
            glVertex2f(x,y);
            glEnd();
        }
    }
    glFlush();
}

void init(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);
}

int main(int argc, char** argv)
{
   cout<<"Enter the value of the points";
   cin>>x0>>y0>>x1>>y1;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("___");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

return 0;
}

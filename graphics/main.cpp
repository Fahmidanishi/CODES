#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

//int m;
int x,y;
//int x1,x0,y1,y0;

int ax,ay,bx,by;
void display(void)
{
   /* int ax = x0;
    int ay = y0;
    int bx = x1;
    int by = y1;*/
    //int dx = x1-x0;
    int dx = bx -ax;
    //int dy = y1-y0;
    int dy = by-ay;
    int di = 2*dy-dx;

    x = ax;
    y = ay;
    glBegin(GL_POINTS);
    glVertex2f(ax,ay);
    glEnd();
    //glFlush();
    //x = ax;
   // y = ay;
    //for( ax= 0; ax<dx; ax++)
    for(int i = 0; i<dx; i++)
    {
        if(di<0)
        {
            x = x+1;
           // y = y;
            glBegin(GL_POINTS);
            glVertex2f(x,y);
            glEnd();
            //glFlush();
            di = di+(2*dy);
        }
        else if(di > 0)
        {
            x = x+1;
            y = y+1;
            glBegin(GL_POINTS);
            glVertex2f(x,y);
            glEnd();
            //glFlush();
            di+=((2*dy)-(2*dx));

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
    // scanf("%f %f %f %f", &x0,&y0,&x1,&y1);
    cin>>ax>>ay>>bx>>by;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("___");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    //display();

    return 0;
}


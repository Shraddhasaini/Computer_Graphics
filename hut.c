#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>

int a=0;
int i=1;
void display()
{ 
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,0,0);

//sky

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(-160,0);
glVertex2f(-160,160);
glVertex2f(160,160);
glVertex2f(160,0);
glEnd();

//mountain
glColor3f(0.6,0.7,0.1);
glBegin(GL_TRIANGLES);
glVertex2f(-100,0);
glVertex2f(60,0);
glVertex2f(-30,130);
glEnd();

//mountain
glColor3f(0.6,0.7,0.1);
glBegin(GL_TRIANGLES);
glVertex2f(-80,0);
glVertex2f(-140,0);
glVertex2f(-110,70);
glEnd();

//1st wall
glColor3f(0.9,0.6,0.7);
glBegin(GL_POLYGON);
glVertex2f(20,60);
glVertex2f(100,60);
glVertex2f(100,0);
glVertex2f(20,0);
glEnd();

//doorwall
glColor3f(0.9,0.5,0.5);
glBegin(GL_POLYGON);
glVertex2f(19.9,60);
glVertex2f(-20,60);
glVertex2f(-20,0);
glVertex2f(-20,0);
glVertex2f(19.9,0);
glEnd();

//abovedoorwall
glColor3f(0.8,0.4,0.4);
glBegin(GL_TRIANGLES);
glVertex2f(20,60);
glVertex2f(-20,60);
glVertex2f(0,108);
glEnd();

//roof
glColor3f(0.9,0.6,0.5);
glBegin(GL_POLYGON);
glVertex2f(0,108);
glVertex2f(20,60);
glVertex2f(100,60);
glVertex2f(85,108);
glEnd();

//door
glColor3f(1,0.6,0.3);
glBegin(GL_POLYGON);
glVertex2f(10,0);
glVertex2f(10,40);
glVertex2f(-10,40);
glVertex2f(-10,0);
glEnd();



int xsun=-110;
int ysun=105;

//sun
float i=0.0000;
glColor3f(1,1,1);
glBegin(GL_POLYGON);
for(i=0;i<360;i+=0.001)
   {glVertex2f((xsun+10*cos(i)),(ysun+10*sin(i)));
   }
glEnd();


//ground

glColor3f(0.5,0.6,0.3);
glBegin(GL_POLYGON);
glVertex2f(-160,0);
glVertex2f(-160,-160);
glVertex2f(160,-160);
glVertex2f(160,0);
glEnd();

//plane
glColor3f(0.5,0.7,0.6);
glBegin(GL_POLYGON);
glVertex2f(-190,-20);
glVertex2f(-190,-190);
glVertex2f(190,-190);
glVertex2f(190,-20);
glEnd();

//plane2
glColor3f(0.5,0.8,0.5);
glBegin(GL_POLYGON);
glVertex2f(-190,-40);
glVertex2f(-190,-190);
glVertex2f(190,-190);
glVertex2f(190,-40);
glEnd();

//pond
glColor3f(0.5,0.8,1);
glBegin(GL_POLYGON);
glVertex2f(-190,-60);
glVertex2f(-190,-190);
glVertex2f(190,-190);
glVertex2f(190,-60);
glEnd();

glFlush();
}

void mouse(int button, int state, int x, int y)
{
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{
exit(0);
}
}

void init()
{ 
glClearColor(1,1,1,0);
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char **argv)
{char g; 
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
glutInitWindowPosition(300,300);
glutInitWindowSize(500,500);
glutCreateWindow("scene");
gluOrtho2D(-150,150,-150,150);
glutDisplayFunc(display);
glutMouseFunc(mouse);

init();
glutMainLoop();
}


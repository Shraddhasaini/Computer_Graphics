#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
 glBegin(GL_POINTS);
    glColor3f(1.0,0.5,0.6);
 for(int i=0;i<1000;++i)
  {
  glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
  }
 glEnd();
 glFlush();
}
void myMouse(int button,int state,int x,int y){
	if(button == GLUT_LEFT_BUTTON && state==GLUT_DOWN){
 	glBegin(GL_POINTS);
	glColor3f(0.1,1.0,0.8);
 	for(int i=0;i<1000;++i)
  	{
  	glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
  	}
 	glEnd();
	glFlush();
	
 }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(180,180);
    glutInitWindowPosition(1,1);
    glutCreateWindow("Circle");
    glutDisplayFunc(display);
    glutMouseFunc(myMouse);
    glutMainLoop();
    return EXIT_SUCCESS;
}

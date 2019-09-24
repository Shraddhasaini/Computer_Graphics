#include <GL/glut.h>
#include <stdlib.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,1.0,0.1);
    glVertex2f(0.0,0.0);
    glVertex2f(1.0,1.0);
    glVertex2f(2.0,0.0);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(1,1);
    glutCreateWindow("Triangle");
    glutDisplayFunc(display);
    glutMainLoop();
    return EXIT_SUCCESS;
}

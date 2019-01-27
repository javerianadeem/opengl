#include<windows.h>
#include"glut.h"

void myInit(void);
void myDisplay(void);
void myDisplay1(void);

void main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Myfirst program");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glPointSize(50.0);
	gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void) {
	
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(300, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(350, 350);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(350, 250);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(250, 350);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(250, 250);
	glEnd();
	glFlush();
}
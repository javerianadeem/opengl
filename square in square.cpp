#include<windows.h>
#include"glut.h"

void myInit(void);
void myDisplay(void);
void main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Triangle Strip");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glLineWidth(10.0);
	gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void) {

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 100);
	glVertex2i(500, 100);
	glVertex2i(100, 500);
	glVertex2i(500, 500);
	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150, 150);
	glVertex2i(450, 150);
	glVertex2i(150, 450);
	glVertex2i(450, 450);
	glEnd();
	glFlush();
}
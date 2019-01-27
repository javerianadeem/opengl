#include<windows.h>
#include"glut.h"

void myInit(void);
void myDisplay(void);
void main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Triangle, quad, pentagon, trapezoid");
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
	//triangle
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 100);
	glVertex2i(250, 100);
	glVertex2i(175, 250);
	glEnd();
	//quad
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(475, 100);
	glVertex2i(400, 175);
	glVertex2i(475, 250);
	glVertex2i(550, 175);
	glEnd();
	//pentagon
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(100, 400);
	glVertex2i(100, 500);
	glVertex2i(175, 550);
	glVertex2i(250, 500);
	glVertex2i(250, 400);
	glEnd();
	//trapezoid
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(350, 400);
	glVertex2i(400, 550);
	glVertex2i(500, 550);
	glVertex2i(550, 400);
	glEnd();
	glFlush();
}
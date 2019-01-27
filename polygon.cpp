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
	glLineWidth(10.0);
	gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void) {

	glClear(GL_COLOR_BUFFER_BIT);
/*	glBegin(GL_POLYGON);
	//first triangle
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(100, 100);
	glVertex2i(100, 500);
	glVertex2i(500, 500);
	glVertex2i(500, 100); */
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	/*
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(100, 500);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(500, 500);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(500, 100); 
	*/
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(200, 350);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(400, 350);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(550, 100);


	glEnd();
	glFlush();
}
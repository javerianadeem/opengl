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
	glBegin(GL_TRIANGLES);
	//first triangle

	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(300, 400);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(500, 0);
	//second triangle

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(200, 50);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(300, 300);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(400, 50);
	
	glEnd();
	glFlush();
}
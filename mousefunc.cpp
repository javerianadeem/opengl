#include<windows.h>
#include"glut.h"

void myInit(void);
void myDisplay(void);
void myMouse(int, int, int, int);

void main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Mouse function");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	myInit();
	glutMainLoop();
}
void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glLineWidth(10.0);
	glPointSize(5.0);
	gluOrtho2D(0, 600, 0, 600);
}
void myDisplay(void) {

	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void myMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		exit(0);
	else if (button == GLUT_RIGHT_BUTTON)
	{
		glColor3i(0, 0, 1);
		glBegin(GL_POINTS);
		glVertex2f(x, 600 - y);
		glEnd();
		glFlush();
	}
}

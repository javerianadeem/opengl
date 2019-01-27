#include<windows.h>
#include"glut.h"

void myInit(void);
void myDisplay(void);
void myKeyboard(unsigned char, int, int);

void main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Myfirst program");
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyboard);
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
	glFlush();
}
void myKeyboard(unsigned char key, int x, int y)
{
	if (key == 116)
	{

		glBegin(GL_TRIANGLES);
		//glVertex2i(x, 600 - y);
		//first triangle
		glColor3f(0.0, 1.0, 1.0);
		glVertex2i(100, 0);
		glVertex2i(300, 400);
		glVertex2i(500, 0);
		glEnd();
		glFlush();
	}
	if (key == 27)
	{
		exit(0);
	}
}

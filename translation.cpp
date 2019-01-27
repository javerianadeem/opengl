#include<iostream>
#include"glut.h"
#include<Windows.h>
void myinit();
void display();
void draw();
void mykeyboard(unsigned char, int, int);
void mymouse(int, int, int, int);
int X, Y, Z;
using namespace std;
int main(int argc, char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("matrix transformation");
	glutDisplayFunc(display);
	glutMouseFunc(mymouse);
	glutKeyboardFunc(mykeyboard);
	myinit();
	glutMainLoop();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(0, 900, 0, 600);

}
void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);

	glVertex2i(X, Z);
	glVertex2i(X + 200, Z);
	glVertex2i(X + 100, Z + 200);
	glEnd();
	glFlush();
}

void mymouse(int button, int state, int x, int y)
{
	X = x;
	Z = 600 - y;
	if (button == GLUT_RIGHT_BUTTON) {
		glBegin(GL_TRIANGLES);

		glVertex2i(X, Z);
		glVertex2i(X + 200, Z);
		glVertex2i(X + 100, Z + 200);
		glEnd();
		glFlush();
	}
}
void mykeyboard(unsigned char key, int x, int y) {

	if (key == 't' || key == 'T')
	{
		glTranslatef(0.0, 10.0, 0.0);draw();
	}
	if (key == 'b' || key == 'B') {
		glTranslatef(0.0, -10.0, 0.0);draw();

	}
	if (key == 'L' || key == 'l')
	{
		glTranslatef(-10.0, 0.0, 0.0);draw();

	}
	if (key == 'R' || key == 'r')
	{
		glTranslatef(10.0, 0.0, 0.0);draw();

	}
	if (key == 'i' || key == 'I')
	{
		glScalef(2, 2, 1.0);draw();

	}
	if (key == 'd' || key == 'D')
	{
		glScalef(0.5, 0.5, 0.0);draw();

	}
	if (key == 'a' || key == 'A')
	{
		glRotated(30.0, 0.0, 0.0, 1.0);
		glTranslatef(0.0, 10.0, 0.0);
		draw();

	}
}
#include<windows.h>
#include"glut.h"
#include<gl/GL.h>
void init();
void display();
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
	return 0;
}
void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(3.0);
	gluOrtho2D(0, 600, 0, 600);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(150, 150);
	glVertex2i(150, 400);
	glVertex2i(150, 400);
	glVertex2i(400, 400);
	glVertex2i(150, 150);
	glVertex2i(400, 150);
	glVertex2i(400, 150);
	glVertex2i(400, 400);
	glVertex2i(95, 350);
	glVertex2i(265, 520);
	glVertex2i(465, 350);
	glVertex2i(265, 520);
	glVertex2i(152, 410);
	glVertex2i(152, 480);
	glVertex2i(152, 480);
	glVertex2i(180, 480);
	glVertex2i(180, 480);
	glVertex2i(180, 435);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(180, 150);
	glVertex2i(180, 250);
	glVertex2i(180, 250);
	glVertex2i(240, 250);
	glVertex2i(240, 150);
	glEnd();
	glFlush();
}

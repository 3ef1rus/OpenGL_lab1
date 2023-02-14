//#define GLEW_STATIC
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
#include <GL/freeglut.h>
#include <iostream>



void Display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 1);
//yea
	glVertex3f(0.2, 0.4, 0.0);
	glVertex3f(0.6, 0.4, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	glVertex3f(0.2, 0.8, 0.0);
	glVertex3f(0.6, 0.8, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	
	glEnd();

	glFlush();
}

void Initialize() {
	glClearColor(0.8, 1.0, 0.6, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1, 0, 1);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 200);
	glutCreateWindow("lab1");
	glutDisplayFunc(Display);
	Initialize();
	glutMainLoop();
	return 0;
}


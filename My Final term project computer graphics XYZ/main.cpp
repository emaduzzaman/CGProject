#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846
  GLfloat global_ambient[] = {50.0, 50.0, 0.0, 5.0};

GLfloat positionBD4=1.2f;
GLfloat speed = 0.05f;
void update(int value) {

    if(positionBD4 >1.0f)
        positionBD4 = -1.5f;

    positionBD4 += speed; //positionBD4=positionBD4-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(70, update, 0);
}
 void sound()
{

    PlaySound("Bird.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}
void sound2()
{

    PlaySound("Traffic.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}
void sound3()
{

    PlaySound("Jhi.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

///:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

///:::::::::::::::::::::::::::::::::::::::::::::::::Night:::::::::::::::::::::::::::::::::::::::::::::

void night() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

///...............sky.......................

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();


///:::::::::::Star:::::::::::

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.9f, 0.9f);
glVertex2f(-0.88f, 0.88f);
glVertex2f(-0.88f, 0.9f);
glVertex2f(-0.9f, 0.88f);
glVertex2f(-0.89f, 0.91f);
glVertex2f(-0.89f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.9f, 0.7f);
glVertex2f(-0.88f, 0.68f);
glVertex2f(-0.88f, 0.7f);
glVertex2f(-0.9f, 0.68f);
glVertex2f(-0.89f, 0.67f);
glVertex2f(-0.89f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.82f, 0.8f);
glVertex2f(-0.8f, 0.78f);
glVertex2f(-0.8f, 0.8f);
glVertex2f(-0.82f, 0.78f);
glVertex2f(-0.81f, 0.77f);
glVertex2f(-0.81f, 0.81f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.7f, 0.9f);
glVertex2f(-0.68f, 0.88f);
glVertex2f(-0.68f, 0.9f);
glVertex2f(-0.7f, 0.88f);
glVertex2f(-0.69f, 0.91f);
glVertex2f(-0.69f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.7f, 0.7f);
glVertex2f(-0.68f, 0.68f);
glVertex2f(-0.68f, 0.7f);
glVertex2f(-0.7f, 0.68f);
glVertex2f(-0.69f, 0.67f);
glVertex2f(-0.69f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.6f, 0.8f);
glVertex2f(-0.58f, 0.78f);
glVertex2f(-0.58f, 0.8f);
glVertex2f(-0.6f, 0.78f);
glVertex2f(-0.59f, 0.77f);
glVertex2f(-0.59f, 0.81f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.5f, 0.9f);
glVertex2f(-0.48f, 0.88f);
glVertex2f(-0.48f, 0.9f);
glVertex2f(-0.5f, 0.88f);
glVertex2f(-0.49f, 0.91f);
glVertex2f(-0.49f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.5f, 0.7f);
glVertex2f(-0.48f, 0.68f);
glVertex2f(-0.48f, 0.7f);
glVertex2f(-0.5f, 0.68f);
glVertex2f(-0.49f, 0.67f);
glVertex2f(-0.49f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.4f, 0.8f);
glVertex2f(-0.38f, 0.78f);
glVertex2f(-0.38f, 0.8f);
glVertex2f(-0.4f, 0.78f);
glVertex2f(-0.39f, 0.77f);
glVertex2f(-0.39f, 0.81f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.3f, 0.9f);
glVertex2f(-0.28f, 0.88f);
glVertex2f(-0.28f, 0.9f);
glVertex2f(-0.3f, 0.88f);
glVertex2f(-0.29f, 0.91f);
glVertex2f(-0.29f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.3f, 0.7f);
glVertex2f(-0.28f, 0.68f);
glVertex2f(-0.28f, 0.7f);
glVertex2f(-0.3f, 0.68f);
glVertex2f(-0.29f, 0.67f);
glVertex2f(-0.29f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.2f, 0.8f);
glVertex2f(-0.18f, 0.78f);
glVertex2f(-0.18f, 0.8f);
glVertex2f(-0.2f, 0.78f);
glVertex2f(-0.19f, 0.77f);
glVertex2f(-0.19f, 0.81f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.1f, 0.9f);
glVertex2f(-0.08f, 0.88f);
glVertex2f(-0.08f, 0.9f);
glVertex2f(-0.1f, 0.88f);
glVertex2f(-0.09f, 0.91f);
glVertex2f(-0.09f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(-0.1f, 0.7f);
glVertex2f(-0.08f, 0.68f);
glVertex2f(-0.08f, 0.7f);
glVertex2f(-0.1f, 0.68f);
glVertex2f(-0.09f, 0.67f);
glVertex2f(-0.09f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.0f, 0.8f);
glVertex2f(0.02f, 0.78f);
glVertex2f(0.02f, 0.8f);
glVertex2f(0.0f, 0.78f);
glVertex2f(0.01f, 0.77f);
glVertex2f(0.01f, 0.81f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.1f, 0.9f);
glVertex2f(0.12f, 0.88f);
glVertex2f(0.12f, 0.9f);
glVertex2f(0.1f, 0.88f);
glVertex2f(0.11f, 0.91f);
glVertex2f(0.11f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.1f, 0.7f);
glVertex2f(0.12f, 0.68f);
glVertex2f(0.12f, 0.7f);
glVertex2f(0.1f, 0.68f);
glVertex2f(0.11f, 0.67f);
glVertex2f(0.11f, 0.71f);
glEnd();

glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.2f, 0.8f);
glVertex2f(0.22f, 0.78f);
glVertex2f(0.22f, 0.8f);
glVertex2f(0.2f, 0.78f);
glVertex2f(0.21f, 0.77f);
glVertex2f(0.21f, 0.81f);
glEnd();


glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.3f, 0.9f);
glVertex2f(0.32f, 0.88f);
glVertex2f(0.32f, 0.9f);
glVertex2f(0.3f, 0.88f);
glVertex2f(0.31f, 0.91f);
glVertex2f(0.31f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.3f, 0.7f);
glVertex2f(0.32f, 0.68f);
glVertex2f(0.32f, 0.7f);
glVertex2f(0.3f, 0.68f);
glVertex2f(0.31f, 0.67f);
glVertex2f(0.31f, 0.71f);
glEnd();


glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.4f, 0.8f);
glVertex2f(0.42f, 0.78f);
glVertex2f(0.42f, 0.8f);
glVertex2f(0.4f, 0.78f);
glVertex2f(0.41f, 0.77f);
glVertex2f(0.41f, 0.81f);
glEnd();


glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.5f, 0.9f);
glVertex2f(0.52f, 0.88f);
glVertex2f(0.52f, 0.9f);
glVertex2f(0.5f, 0.88f);
glVertex2f(0.51f, 0.91f);
glVertex2f(0.51f, 0.87f);
glEnd();
glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.5f, 0.7f);
glVertex2f(0.52f, 0.68f);
glVertex2f(0.52f, 0.7f);
glVertex2f(0.5f, 0.68f);
glVertex2f(0.51f, 0.67f);
glVertex2f(0.51f, 0.71f);
glEnd();


glBegin(GL_LINES);
glColor3ub(247, 249, 249);
glVertex2f(0.6f, 0.8f);
glVertex2f(0.62f, 0.78f);
glVertex2f(0.62f, 0.8f);
glVertex2f(0.6f, 0.78f);
glVertex2f(0.61f, 0.77f);
glVertex2f(0.61f, 0.81f);
glEnd();


///...................................National Parliament....................................
//........... Middle part.................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f,0.4f);
glVertex2f(-0.2f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.37f);
glVertex2f(0.2f, 0.37f);
glVertex2f(0.2f,0.39f);
glVertex2f(-0.2f,0.39f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.34f);
glVertex2f(0.2f, 0.34f);
glVertex2f(0.2f,0.36f);
glVertex2f(-0.2f,0.36f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.31f);
glVertex2f(0.2f, 0.31f);
glVertex2f(0.2f,0.33f);
glVertex2f(-0.2f,0.33f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.28f);
glVertex2f(0.2f, 0.28f);
glVertex2f(0.2f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.25f);
glVertex2f(0.2f, 0.25f);
glVertex2f(0.2f,0.27f);
glVertex2f(-0.2f,0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.22f);
glVertex2f(0.2f, 0.22f);
glVertex2f(0.2f,0.24f);
glVertex2f(-0.2f,0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.19f);
glVertex2f(0.2f, 0.19f);
glVertex2f(0.2f,0.21f);
glVertex2f(-0.2f,0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.16f);
glVertex2f(0.2f, 0.16f);
glVertex2f(0.2f,0.18f);
glVertex2f(-0.2f,0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.13f);
glVertex2f(0.2f, 0.13f);
glVertex2f(0.2f,0.15f);
glVertex2f(-0.2f,0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.1f);
glVertex2f(0.2f, 0.1f);
glVertex2f(0.2f,0.12f);
glVertex2f(-0.2f,0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.07f);
glVertex2f(0.2f, 0.07f);
glVertex2f(0.2f,0.09f);
glVertex2f(-0.2f,0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.04f);
glVertex2f(0.2f, 0.04f);
glVertex2f(0.2f,0.06f);
glVertex2f(-0.2f,0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.01f);
glVertex2f(0.2f, 0.01f);
glVertex2f(0.2f,0.03f);
glVertex2f(-0.2f,0.03f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line left
glVertex2f(-0.1f, 0.0f);
glVertex2f(-0.095f, 0.0f);
glVertex2f(-0.095f,0.4f);
glVertex2f(-0.1f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line Right
glVertex2f(0.1f, 0.0f);
glVertex2f(0.095f, 0.0f);
glVertex2f(0.095f,0.4f);
glVertex2f(0.1f,0.4f);
glEnd();

//...............
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.38f);
glVertex2f(0.05f, 0.38f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.35f);
glVertex2f(0.05f, 0.35f);
glVertex2f(0.05f,0.37f);
glVertex2f(-0.05f,0.37f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.32f);
glVertex2f(0.05f, 0.32f);
glVertex2f(0.05f,0.34f);
glVertex2f(-0.05f,0.34f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.29f);
glVertex2f(0.05f, 0.29f);
glVertex2f(0.05f,0.31f);
glVertex2f(-0.05f,0.31f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42);
glVertex2f(-0.05f, 0.25f);
glVertex2f(0.05f, 0.25f);
glVertex2f(0.05f,0.29f);
glVertex2f(-0.05f,0.29f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.23f);
glVertex2f(0.05f, 0.23f);
glVertex2f(0.05f,0.25f);
glVertex2f(-0.05f,0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.19f);
glVertex2f(0.05f, 0.19f);
glVertex2f(0.05f,0.23f);
glVertex2f(-0.05f,0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.17f);
glVertex2f(0.05f, 0.17f);
glVertex2f(0.05f,0.19f);
glVertex2f(-0.05f,0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.13f);
glVertex2f(0.05f, 0.13f);
glVertex2f(0.05f,0.17f);
glVertex2f(-0.05f,0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.11f);
glVertex2f(0.05f, 0.11f);
glVertex2f(0.05f,0.13f);
glVertex2f(-0.05f,0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.07f);
glVertex2f(0.05f, 0.07f);
glVertex2f(0.05f,0.11f);
glVertex2f(-0.05f,0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.05f);
glVertex2f(0.05f, 0.05f);
glVertex2f(0.05f,0.07f);
glVertex2f(-0.05f,0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.05f);
glVertex2f(-0.05f,0.05f);
glEnd();


//........Right/Left 1st part............
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.27f);
glVertex2f(-0.2f, 0.29f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.24f);
glVertex2f(-0.2f, 0.26f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.21f);
glVertex2f(-0.2f, 0.23f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.18f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.15f);
glVertex2f(-0.2f, 0.17f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.12f);
glVertex2f(-0.2f, 0.14f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.09f);
glVertex2f(-0.2f, 0.11f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.06f);
glVertex2f(-0.2f, 0.08f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.03f);
glVertex2f(-0.2f, 0.05f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.02f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(-0.295f, 0.0f);
glVertex2f(-0.295f, 0.31f);
glVertex2f(-0.3f, 0.32f);
glVertex2f(-0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(-0.226f, 0.0f);
glVertex2f(-0.226f, 0.30f);
glVertex2f(-0.23f, 0.305f);
glVertex2f(-0.23f, 0.0f);
glEnd();




glEnable(GL_LIGHTING);//Enable Light Effect


  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


glColor3ub(97, 106, 107);
	int i;
	GLfloat x=-0.299f; GLfloat y=.095f; GLfloat radius =.04f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);       //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glDisable(GL_LIGHTING);
//.............................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.3f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.27f);
glVertex2f(0.2f, 0.29f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.24f);
glVertex2f(0.2f, 0.26f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.21f);
glVertex2f(0.2f, 0.23f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.18f);
glVertex2f(0.2f, 0.2f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.15f);
glVertex2f(0.2f, 0.17f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.12f);
glVertex2f(0.2f, 0.14f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.09f);
glVertex2f(0.2f, 0.11f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.06f);
glVertex2f(0.2f, 0.08f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.03f);
glVertex2f(0.2f, 0.05f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.02f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(0.295f, 0.0f);
glVertex2f(0.295f, 0.31f);
glVertex2f(0.3f, 0.32f);
glVertex2f(0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(0.226f, 0.0f);
glVertex2f(0.226f, 0.30f);
glVertex2f(0.23f, 0.305f);
glVertex2f(0.23f, 0.0f);
glEnd();




glEnable(GL_LIGHTING);//Enable Light Effect

glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


glColor3ub(97, 106, 107);
	int j;
	GLfloat x1=0.299f; GLfloat y1=.095f; GLfloat radius1 =.04f;
	int triangleAmount1 = 20;
	GLfloat twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);       //center of circle
		for(j= 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();
glDisable(GL_LIGHTING);

//...........Right/Left 2nd part............
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.49f, 0.3f);
glVertex2f(-0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.3f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.27f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.24f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.21f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.18f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.15f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.12f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.09f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.06f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.03f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glEnd();


glEnable(GL_LIGHTING);//Enable Light Effect

glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.36f, 0.12f);
glVertex2f(-0.38f, 0.27f);
glVertex2f(-0.4f, 0.11f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(-0.4f, 0.0f);
glVertex2f(-0.36f, 0.0f);
glVertex2f(-0.36f, 0.08f);
glVertex2f(-0.4f, 0.07f);
glEnd();
glDisable(GL_LIGHTING);

//..........................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.49f, 0.3f);
glVertex2f(0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.3f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.27f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.24f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.21f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.18f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.15f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.12f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.09f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.06f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.03f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.0f);
glEnd();

glEnable(GL_LIGHTING);//Enable Light Effect

glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.36f, 0.12f);
glVertex2f(0.38f, 0.27f);
glVertex2f(0.4f, 0.11f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(0.4f, 0.0f);
glVertex2f(0.36f, 0.0f);
glVertex2f(0.36f, 0.08f);
glVertex2f(0.4f, 0.07f);
glEnd();
glDisable(GL_LIGHTING);

//........Right/Left 3rd part............
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.28f);
glVertex2f(-0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.25f);
glVertex2f(-0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.22f);
glVertex2f(-0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.19f);
glVertex2f(-0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.16f);
glVertex2f(-0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.13f);
glVertex2f(-0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.1f);
glVertex2f(-0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.07f);
glVertex2f(-0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.04f);
glVertex2f(-0.505f, 0.04f);
glEnd();
//..........................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48 );
glVertex2f(0.505f, 0.0f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.28f);
glVertex2f(0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.25f);
glVertex2f(0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.22f);
glVertex2f(0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.19f);
glVertex2f(0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.16f);
glVertex2f(0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.13f);
glVertex2f(0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.1f);
glVertex2f(0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.07f);
glVertex2f(0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.04f);
glVertex2f(0.505f, 0.04f);
glEnd();

//........Right/Left 4rd part............

glBegin(GL_QUADS);
glColor3ub(57, 58, 48 );
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.3f);
glVertex2f(-0.605f, 0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.505f, 0.27f);
glVertex2f(-0.505f, 0.29f);
glVertex2f(-0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.505f, 0.24f);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.505f, 0.21f);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.505f, 0.18f);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.505f, 0.15f);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.505f, 0.12f);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.505f, 0.09f);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.505f, 0.06f);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.03f);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.605f, 0.0f);
glEnd();



glEnable(GL_LIGHTING);//Enable Light Effect
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.597f, 0.061f);
glVertex2f(-0.5795f, 0.219f);
glVertex2f(-0.567f, 0.071f);
glEnd();
glDisable(GL_LIGHTING);
//........................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48 );
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.3f);
glVertex2f(0.605f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.505f, 0.27f);
glVertex2f(0.505f, 0.29f);
glVertex2f(0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.505f, 0.24f);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.505f, 0.21f);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.505f, 0.18f);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.505f, 0.15f);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.505f, 0.12f);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.505f, 0.09f);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.505f, 0.06f);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.03f);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.605f, 0.0f);
glEnd();


glEnable(GL_LIGHTING);//Enable Light Effect
glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.597f, 0.061f);
glVertex2f(0.5795f, 0.219f);
glVertex2f(0.567f, 0.071f);
glEnd();
glDisable(GL_LIGHTING);
//........Right/Left 5rd and last part............
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(-0.675f, 0.0f);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.605f, 0.25f);
glVertex2f(-0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.23f);
glVertex2f(-0.605f, 0.23f);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.21f);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.605f, 0.22f);
glVertex2f(-0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.19f);
glVertex2f(-0.605f, 0.19f);
glVertex2f(-0.605f, 0.2f);
glVertex2f(-0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.17f);
glVertex2f(-0.605f, 0.17f);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.15f);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.605f, 0.16f);
glVertex2f(-0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.13f);
glVertex2f(-0.605f, 0.13f);
glVertex2f(-0.605f, 0.14f);
glVertex2f(-0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.11f);
glVertex2f(-0.605f, 0.11f);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.09f);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.605f, 0.1f);
glVertex2f(-0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.07f);
glVertex2f(-0.605f, 0.07f);
glVertex2f(-0.605f, 0.08f);
glVertex2f(-0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.05f);
glVertex2f(-0.605f, 0.05f);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.03f);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.01f);
glVertex2f(-0.605f, 0.01f);
glVertex2f(-0.605f, 0.02f);
glVertex2f(-0.675f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(-0.643f, 0.0f);
glVertex2f(-0.637f, 0.0f);
glVertex2f(-0.637f, 0.25f);
glVertex2f(-0.643f, 0.25f);
glEnd();
//...........................
glBegin(GL_QUADS);
glColor3ub(57, 58, 48);
glVertex2f(0.675f, 0.0f);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.605f, 0.25f);
glVertex2f(0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.23f);
glVertex2f(0.605f, 0.23f);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.21f);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.605f, 0.22f);
glVertex2f(0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.19f);
glVertex2f(0.605f, 0.19f);
glVertex2f(0.605f, 0.2f);
glVertex2f(0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.17f);
glVertex2f(0.605f, 0.17f);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.15f);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.605f, 0.16f);
glVertex2f(0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.13f);
glVertex2f(0.605f, 0.13f);
glVertex2f(0.605f, 0.14f);
glVertex2f(0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.11f);
glVertex2f(0.605f, 0.11f);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.09f);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.605f, 0.1f);
glVertex2f(0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.07f);
glVertex2f(0.605f, 0.07f);
glVertex2f(0.605f, 0.08f);
glVertex2f(0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.05f);
glVertex2f(0.605f, 0.05f);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.03f);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.01f);
glVertex2f(0.605f, 0.01f);
glVertex2f(0.605f, 0.02f);
glVertex2f(0.675f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(0.643f, 0.0f);
glVertex2f(0.637f, 0.0f);
glVertex2f(0.637f, 0.25f);
glVertex2f(0.643f, 0.25f);
glEnd();


//..............Roof...............

glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(-1.3f, -0.12f);
glVertex2f(1.3f, -0.12f);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);
glEnd();

glBegin(GL_LINES);
glColor3ub(40, 55, 71);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);

glVertex2f(0.65f, -0.03f);
glVertex2f(-0.65f, -0.03f);

glVertex2f(0.8f, -0.05f);
glVertex2f(-0.8f, -0.05f);

glVertex2f(0.95f, -0.07f);
glVertex2f(-0.95f, -0.07f);

glVertex2f(1.1f, -0.09f);
glVertex2f(-1.1f, -0.09f);

glVertex2f(1.25f, -0.11f);
glVertex2f(-1.25f, -0.11f);

glVertex2f(-1.25f, -0.12f);  //SIDE LINE
glVertex2f(-0.48f, -0.01f);

glVertex2f(1.25f, -0.12f);  //SIDE LINE
glVertex2f(0.48f, -0.01f);
glEnd();
//............
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.585f, 0.04f);
glVertex2f(-0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.56f, 0.04f);
glVertex2f(-0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.48f, 0.025f);
glVertex2f(-0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.39f, -0.01f);
glVertex2f(-0.455f, 0.025f);
glVertex2f(-0.48f, 0.025f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Left Grass
glVertex2f(-1.0f, -0.08f);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.675f, 0.04f);
glVertex2f(-1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();

glTranslated(-0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glLoadIdentity();

//............
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.585f, 0.04f);
glVertex2f(0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.56f, 0.04f);
glVertex2f(0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(124, 102, 41);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.48f, 0.025f);
glVertex2f(0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.39f, -0.01f);
glVertex2f(0.455f, 0.025f);
glVertex2f(0.48f, 0.025f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Right Grass
glVertex2f(1.0f, -0.08f);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.675f, 0.04f);
glVertex2f(1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();

glTranslated(0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();
glLoadIdentity();

///....................Flag.........................

glBegin(GL_QUADS);
glColor3ub(182, 102, 75);
glVertex2f(-0.08f,-0.05f);
glVertex2f(0.08f,-0.05f);
glVertex2f(0.07f, 0.02f);
glVertex2f(-0.07f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(67, 60, 39);
glVertex2f(-0.003f, 0.02f);
glVertex2f(0.003f, 0.02f);
glColor3ub(87, 76, 46);
glVertex2f(0.003f,0.2f);
glVertex2f(-0.003f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(25, 111, 61);
glVertex2f(0.003f, 0.14f);
glVertex2f(0.08f, 0.14f);
glVertex2f(0.08f,0.19f);
glVertex2f(0.003f,0.19f);
glEnd();

glColor3ub(238, 68, 37);
	int k;
	GLfloat x2=0.042f; GLfloat y2=.165f; GLfloat radius2 =.018f;
	int triangleAmount2 = 20;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);       //center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi / triangleAmount2))
			);
		}
	glEnd();

//......................GRASS...........................

glBegin(GL_QUADS);
glColor3ub(44, 134, 38);
glVertex2f(-1.0f, -0.39f);
glColor3ub(36, 185, 26);
glVertex2f(1.0f, -0.39f);
glColor3ub(88, 214, 141);
glVertex2f(1.0f, -0.125f);
glColor3ub(129, 211, 123);
glVertex2f(-1.0f, -0.125f);
glEnd();


glTranslated(-0.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();

glTranslated(0.15,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.3,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.45,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.6,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.75,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.9,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.05,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.58,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.72,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();
//..........Road side wall................
glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glVertex2f(1.0f,-0.36f);
glVertex2f(-1.0f,-0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.9f,-0.45f);
glVertex2f(-0.9f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.8f,-0.45f);
glVertex2f(-0.8f,-0.36f);
glEnd();
//............
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.7f,-0.45f);
glVertex2f(-0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.6f,-0.45f);
glVertex2f(-0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.5f,-0.45f);
glVertex2f(-0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.4f,-0.45f);
glVertex2f(-0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.3f,-0.45f);
glVertex2f(-0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.2f,-0.45f);
glVertex2f(-0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.1f,-0.45f);
glVertex2f(-0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.0f,-0.45f);
glVertex2f(0.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.1f,-0.45f);
glVertex2f(0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.2f,-0.45f);
glVertex2f(0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.3f,-0.45f);
glVertex2f(0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.4f,-0.45f);
glVertex2f(0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.5f,-0.45f);
glVertex2f(0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.6f,-0.45f);
glVertex2f(0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.7f,-0.45f);
glVertex2f(0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.8f,-0.45f);
glVertex2f(0.8f,-0.36f);
glEnd();glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.9f,-0.45f);
glVertex2f(0.9f,-0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glVertex2f(1.0f,-0.39f);
glVertex2f(-1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.39f);
glVertex2f(1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.95f,-0.42f);
glVertex2f(-0.95f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.85f,-0.42f);
glVertex2f(-0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.75f,-0.42f);
glVertex2f(-0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.65f,-0.42f);
glVertex2f(-0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.55f,-0.42f);
glVertex2f(-0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.45f,-0.42f);
glVertex2f(-0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.35f,-0.42f);
glVertex2f(-0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.25f,-0.42f);
glVertex2f(-0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.15f,-0.42f);
glVertex2f(-0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.05f,-0.42f);
glVertex2f(-0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.05f,-0.42f);
glVertex2f(0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.15f,-0.42f);
glVertex2f(0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.25f,-0.42f);
glVertex2f(0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.35f,-0.42f);
glVertex2f(0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.45f,-0.42f);
glVertex2f(0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.55f,-0.42f);
glVertex2f(0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.65f,-0.42f);
glVertex2f(0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.75f,-0.42f);
glVertex2f(0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.85f,-0.42f);
glVertex2f(0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.95f,-0.42f);
glVertex2f(0.95f,-0.39f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glVertex2f(1.0f,-0.345f);
glVertex2f(-1.0f,-0.345f);
glEnd();


glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );       ///GRILL LINE
glVertex2f(0.98f,-0.3535f);
glVertex2f(0.98f,-0.2f);
glVertex2f(0.94f,-0.3535f);
glVertex2f(0.94f,-0.2f);
glVertex2f(0.9f,-0.3535f);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.86f,-0.3535f);
glVertex2f(0.86f,-0.2f);
glVertex2f(0.82f,-0.3535f);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.78f,-0.3535f);
glVertex2f(0.78f,-0.2f);
glVertex2f(0.74f,-0.3535f);
glVertex2f(0.74f,-0.2f);
glVertex2f(0.7f,-0.3535f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.66f,-0.3535f);
glVertex2f(0.66f,-0.2f);
glVertex2f(0.62f,-0.3535f);
glVertex2f(0.62f,-0.2f);
glVertex2f(0.58f,-0.3535f);
glVertex2f(0.58f,-0.2f);
glVertex2f(0.54f,-0.3535f);
glVertex2f(0.54f,-0.2f);
glVertex2f(0.5f,-0.3535f);
glVertex2f(0.5f,-0.2f);
glVertex2f(0.46f,-0.3535f);
glVertex2f(0.46f,-0.2f);
glVertex2f(0.42f,-0.3535f);
glVertex2f(0.42f,-0.2f);
glVertex2f(0.38f,-0.3535f);
glVertex2f(0.38f,-0.2f);
glVertex2f(0.34f,-0.3535f);
glVertex2f(0.34f,-0.2f);
glVertex2f(0.3f,-0.3535f);
glVertex2f(0.3f,-0.2f);
glVertex2f(0.26f,-0.3535f);
glVertex2f(0.26f,-0.2f);
glVertex2f(0.22f,-0.3535f);
glVertex2f(0.22f,-0.2f);
glVertex2f(0.18f,-0.3535f);
glVertex2f(0.18f,-0.2f);
glVertex2f(0.14f,-0.3535f);
glVertex2f(0.14f,-0.2f);
glVertex2f(0.1f,-0.3535f);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.06f,-0.3535f);
glVertex2f(0.06f,-0.2f);
glVertex2f(0.02f,-0.3535f);
glVertex2f(0.02f,-0.2f);


glVertex2f(-0.98f,-0.3535f);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.94f,-0.3535f);
glVertex2f(-0.94f,-0.2f);
glVertex2f(-0.9f,-0.3535f);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.86f,-0.3535f);
glVertex2f(-0.86f,-0.2f);
glVertex2f(-0.82f,-0.3535f);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-0.78f,-0.3535f);
glVertex2f(-0.78f,-0.2f);
glVertex2f(-0.74f,-0.3535f);
glVertex2f(-0.74f,-0.2f);
glVertex2f(-0.7f,-0.3535f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.66f,-0.3535f);
glVertex2f(-0.66f,-0.2f);
glVertex2f(-0.62f,-0.3535f);
glVertex2f(-0.62f,-0.2f);
glVertex2f(-0.58f,-0.3535f);
glVertex2f(-0.58f,-0.2f);
glVertex2f(-0.54f,-0.3535f);
glVertex2f(-0.54f,-0.2f);
glVertex2f(-0.5f,-0.3535f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.46f,-0.3535f);
glVertex2f(-0.46f,-0.2f);
glVertex2f(-0.42f,-0.3535f);
glVertex2f(-0.42f,-0.2f);
glVertex2f(-0.38f,-0.3535f);
glVertex2f(-0.38f,-0.2f);
glVertex2f(-0.34f,-0.3535f);
glVertex2f(-0.34f,-0.2f);
glVertex2f(-0.3f,-0.3535f);
glVertex2f(-0.3f,-0.2f);
glVertex2f(-0.26f,-0.3535f);
glVertex2f(-0.26f,-0.2f);
glVertex2f(-0.22f,-0.3535f);
glVertex2f(-0.22f,-0.2f);
glVertex2f(-0.18f,-0.3535f);
glVertex2f(-0.18f,-0.2f);
glVertex2f(-0.14f,-0.3535f);
glVertex2f(-0.14f,-0.2f);
glVertex2f(-0.1f,-0.3535f);
glVertex2f(-0.1f,-0.2f);
glVertex2f(-0.06f,-0.3535f);
glVertex2f(-0.06f,-0.2f);
glVertex2f(-0.02f,-0.3535f);
glVertex2f(-0.02f,-0.2f);



glVertex2f(-0.98f,-0.33f);  ///LIFT TO RIGHT LINE
glVertex2f(0.98f,-0.33f);
glVertex2f(-0.98f,-0.28f);
glVertex2f(0.98f,-0.28f);
glVertex2f(-0.98f,-0.23f);
glVertex2f(0.98f,-0.23f);
glEnd();

glEnable(GL_LIGHTING);//Enable Light Effect

glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


GLfloat u1=-0.94f;               ///Grill lamp 1
GLfloat v1=-0.18f;
GLfloat radius4 =.025f;
int line = 100;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a2 = 0; a2 <= line;a2++) {
glVertex2f(
u1 + (radius4 * cos(a2 * twicePi / line)),
v1 + (radius4 * sin(a2 * twicePi / line))
);
}
glEnd();

GLfloat u2=-0.58f;
GLfloat v2=-0.18f;              ///Grill lamp 2
GLfloat radius5 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a3 = 0; a3 <= line;a3++) {
glVertex2f(
u2 + (radius5 * cos(a3 * twicePi / line)),
v2 + (radius5 * sin(a3 * twicePi / line))
);
}
glEnd();

GLfloat u3=-0.22f;
GLfloat v3=-0.18f;              ///Grill lamp 3
GLfloat radius6 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a4 = 0; a4 <= line;a4++) {
glVertex2f(
u3 + (radius6 * cos(a4 * twicePi / line)),
v3 + (radius6 * sin(a4 * twicePi / line))
);
}
glEnd();


GLfloat u4=0.22f;
GLfloat v4=-0.18f;              ///Grill lamp 4
GLfloat radius7 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a5 = 0; a5 <= line;a5++) {
glVertex2f(
u4 + (radius7 * cos(a5 * twicePi / line)),
v4 + (radius7 * sin(a5 * twicePi / line))
);
}
glEnd();

GLfloat u5=0.58f;
GLfloat v5=-0.18f;              ///Grill lamp 5
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a6 = 0; a6 <= line;a6++) {
glVertex2f(
u5 + (radius7 * cos(a6 * twicePi / line)),
v5 + (radius7 * sin(a6 * twicePi / line))
);
}
glEnd();

GLfloat u6=0.94f;
GLfloat v6=-0.18f;              ///Grill lamp 6
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a7 = 0; a7 <= line;a7++) {
glVertex2f(
u6 + (radius7 * cos(a7 * twicePi / line)),
v6 + (radius7 * sin(a7 * twicePi / line))
);
}
glEnd();
glDisable(GL_LIGHTING);//Enable Light Effect


//........................

GLfloat u7=0.8f;
GLfloat v7=0.8f;              /// MOON
GLfloat radius8 =.1f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(244, 246, 246);
for(int a8 = 0; a8 <= line;a8++) {
glVertex2f(
u7 + (radius8 * cos(a8 * twicePi / line)),
v7 + (radius8 * sin(a8 * twicePi / line))
);
}
glEnd();
//........................................................................................
//Road
glBegin(GL_QUADS);
glColor3ub(127, 140, 141  );
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.55f);
glVertex2f(-1.0f,-0.55f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.55f);
glVertex2f(1.0f,-0.55f);
glVertex2f(1.0f,-0.51f);
glVertex2f(-1.0f,-0.51f);
glEnd();

//Road line
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.9f,-0.725f);
glVertex2f(-0.7f,-0.725f);
glVertex2f(-0.7f,-0.715f);
glVertex2f(-0.9f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.5f,-0.725f);
glVertex2f(-0.3f,-0.725f);
glVertex2f(-0.3f,-0.715f);
glVertex2f(-0.5f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,-0.725f);
glVertex2f(0.1f,-0.725f);
glVertex2f(0.1f,-0.715f);
glVertex2f(-0.1f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.3f,-0.725f);
glVertex2f(0.5f,-0.725f);
glVertex2f(0.5f,-0.715f);
glVertex2f(0.3f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.7f,-0.725f);
glVertex2f(0.9f,-0.725f);
glVertex2f(0.9f,-0.715f);
glVertex2f(0.7f,-0.715f);
glEnd();
//.......................................................
///::::::::::::::::::::::::::::::::::::::::::::
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.96f);
glVertex2f(-1.0f,-0.96f);
glEnd();
//.................................


glFlush();
}

void night_demo(int val) {

 glutDisplayFunc(night);
 //sound3();

 }
///::::::::::::::::::::::::::::::::::::::::::::Evening:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

void evening() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//...............sky.......................

glBegin(GL_QUADS);
glColor3ub(52, 152, 219);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();


//...................................National Parliament....................................
//........... Middle part.................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(-0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f,0.4f);
glVertex2f(-0.2f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.37f);
glVertex2f(0.2f, 0.37f);
glVertex2f(0.2f,0.39f);
glVertex2f(-0.2f,0.39f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.34f);
glVertex2f(0.2f, 0.34f);
glVertex2f(0.2f,0.36f);
glVertex2f(-0.2f,0.36f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.31f);
glVertex2f(0.2f, 0.31f);
glVertex2f(0.2f,0.33f);
glVertex2f(-0.2f,0.33f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.28f);
glVertex2f(0.2f, 0.28f);
glVertex2f(0.2f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.25f);
glVertex2f(0.2f, 0.25f);
glVertex2f(0.2f,0.27f);
glVertex2f(-0.2f,0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.22f);
glVertex2f(0.2f, 0.22f);
glVertex2f(0.2f,0.24f);
glVertex2f(-0.2f,0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.19f);
glVertex2f(0.2f, 0.19f);
glVertex2f(0.2f,0.21f);
glVertex2f(-0.2f,0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.16f);
glVertex2f(0.2f, 0.16f);
glVertex2f(0.2f,0.18f);
glVertex2f(-0.2f,0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.13f);
glVertex2f(0.2f, 0.13f);
glVertex2f(0.2f,0.15f);
glVertex2f(-0.2f,0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.1f);
glVertex2f(0.2f, 0.1f);
glVertex2f(0.2f,0.12f);
glVertex2f(-0.2f,0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.07f);
glVertex2f(0.2f, 0.07f);
glVertex2f(0.2f,0.09f);
glVertex2f(-0.2f,0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.04f);
glVertex2f(0.2f, 0.04f);
glVertex2f(0.2f,0.06f);
glVertex2f(-0.2f,0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.01f);
glVertex2f(0.2f, 0.01f);
glVertex2f(0.2f,0.03f);
glVertex2f(-0.2f,0.03f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line left
glVertex2f(-0.1f, 0.0f);
glVertex2f(-0.095f, 0.0f);
glVertex2f(-0.095f,0.4f);
glVertex2f(-0.1f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line Right
glVertex2f(0.1f, 0.0f);
glVertex2f(0.095f, 0.0f);
glVertex2f(0.095f,0.4f);
glVertex2f(0.1f,0.4f);
glEnd();

//...............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.38f);
glVertex2f(0.05f, 0.38f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.35f);
glVertex2f(0.05f, 0.35f);
glVertex2f(0.05f,0.37f);
glVertex2f(-0.05f,0.37f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.32f);
glVertex2f(0.05f, 0.32f);
glVertex2f(0.05f,0.34f);
glVertex2f(-0.05f,0.34f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.29f);
glVertex2f(0.05f, 0.29f);
glVertex2f(0.05f,0.31f);
glVertex2f(-0.05f,0.31f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42);
glVertex2f(-0.05f, 0.25f);
glVertex2f(0.05f, 0.25f);
glVertex2f(0.05f,0.29f);
glVertex2f(-0.05f,0.29f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.23f);
glVertex2f(0.05f, 0.23f);
glVertex2f(0.05f,0.25f);
glVertex2f(-0.05f,0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.19f);
glVertex2f(0.05f, 0.19f);
glVertex2f(0.05f,0.23f);
glVertex2f(-0.05f,0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.17f);
glVertex2f(0.05f, 0.17f);
glVertex2f(0.05f,0.19f);
glVertex2f(-0.05f,0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.13f);
glVertex2f(0.05f, 0.13f);
glVertex2f(0.05f,0.17f);
glVertex2f(-0.05f,0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.11f);
glVertex2f(0.05f, 0.11f);
glVertex2f(0.05f,0.13f);
glVertex2f(-0.05f,0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.07f);
glVertex2f(0.05f, 0.07f);
glVertex2f(0.05f,0.11f);
glVertex2f(-0.05f,0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.05f);
glVertex2f(0.05f, 0.05f);
glVertex2f(0.05f,0.07f);
glVertex2f(-0.05f,0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.05f);
glVertex2f(-0.05f,0.05f);
glEnd();


//........Right/Left 1st part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.27f);
glVertex2f(-0.2f, 0.29f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.24f);
glVertex2f(-0.2f, 0.26f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.21f);
glVertex2f(-0.2f, 0.23f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.18f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.15f);
glVertex2f(-0.2f, 0.17f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.12f);
glVertex2f(-0.2f, 0.14f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.09f);
glVertex2f(-0.2f, 0.11f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.06f);
glVertex2f(-0.2f, 0.08f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.03f);
glVertex2f(-0.2f, 0.05f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.02f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(-0.295f, 0.0f);
glVertex2f(-0.295f, 0.31f);
glVertex2f(-0.3f, 0.32f);
glVertex2f(-0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(-0.226f, 0.0f);
glVertex2f(-0.226f, 0.30f);
glVertex2f(-0.23f, 0.305f);
glVertex2f(-0.23f, 0.0f);
glEnd();


glColor3ub(97, 106, 107);
	int i;
	GLfloat x=-0.299f; GLfloat y=.095f; GLfloat radius =.04f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);       //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//.............................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.3f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.27f);
glVertex2f(0.2f, 0.29f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.24f);
glVertex2f(0.2f, 0.26f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.21f);
glVertex2f(0.2f, 0.23f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.18f);
glVertex2f(0.2f, 0.2f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.15f);
glVertex2f(0.2f, 0.17f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.12f);
glVertex2f(0.2f, 0.14f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.09f);
glVertex2f(0.2f, 0.11f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.06f);
glVertex2f(0.2f, 0.08f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.03f);
glVertex2f(0.2f, 0.05f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.02f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(0.295f, 0.0f);
glVertex2f(0.295f, 0.31f);
glVertex2f(0.3f, 0.32f);
glVertex2f(0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(0.226f, 0.0f);
glVertex2f(0.226f, 0.30f);
glVertex2f(0.23f, 0.305f);
glVertex2f(0.23f, 0.0f);
glEnd();

glColor3ub(97, 106, 107);
	int j;
	GLfloat x1=0.299f; GLfloat y1=.095f; GLfloat radius1 =.04f;
	int triangleAmount1 = 20;
	GLfloat twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);       //center of circle
		for(j= 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


//...........Right/Left 2nd part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.49f, 0.3f);
glVertex2f(-0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.3f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.27f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.24f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.21f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.18f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.15f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.12f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.09f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.06f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.03f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.36f, 0.12f);
glVertex2f(-0.38f, 0.27f);
glVertex2f(-0.4f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(-0.4f, 0.0f);
glVertex2f(-0.36f, 0.0f);
glVertex2f(-0.36f, 0.08f);
glVertex2f(-0.4f, 0.07f);
glEnd();


//..........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.49f, 0.3f);
glVertex2f(0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.3f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.27f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.24f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.21f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.18f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.15f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.12f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.09f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.06f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.03f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.36f, 0.12f);
glVertex2f(0.38f, 0.27f);
glVertex2f(0.4f, 0.11f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(0.4f, 0.0f);
glVertex2f(0.36f, 0.0f);
glVertex2f(0.36f, 0.08f);
glVertex2f(0.4f, 0.07f);
glEnd();

//........Right/Left 3rd part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.28f);
glVertex2f(-0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.25f);
glVertex2f(-0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.22f);
glVertex2f(-0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.19f);
glVertex2f(-0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.16f);
glVertex2f(-0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.13f);
glVertex2f(-0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.1f);
glVertex2f(-0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.07f);
glVertex2f(-0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.04f);
glVertex2f(-0.505f, 0.04f);
glEnd();
//..........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(0.505f, 0.0f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.28f);
glVertex2f(0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.25f);
glVertex2f(0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.22f);
glVertex2f(0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.19f);
glVertex2f(0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.16f);
glVertex2f(0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.13f);
glVertex2f(0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.1f);
glVertex2f(0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.07f);
glVertex2f(0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.04f);
glVertex2f(0.505f, 0.04f);
glEnd();

//........Right/Left 4rd part............

glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.3f);
glVertex2f(-0.605f, 0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.505f, 0.27f);
glVertex2f(-0.505f, 0.29f);
glVertex2f(-0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.505f, 0.24f);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.505f, 0.21f);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.505f, 0.18f);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.505f, 0.15f);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.505f, 0.12f);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.505f, 0.09f);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.505f, 0.06f);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.03f);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.605f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.597f, 0.061f);
glVertex2f(-0.5795f, 0.219f);
glVertex2f(-0.567f, 0.071f);
glEnd();
//........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.3f);
glVertex2f(0.605f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.505f, 0.27f);
glVertex2f(0.505f, 0.29f);
glVertex2f(0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.505f, 0.24f);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.505f, 0.21f);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.505f, 0.18f);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.505f, 0.15f);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.505f, 0.12f);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.505f, 0.09f);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.505f, 0.06f);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.03f);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.605f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.597f, 0.061f);
glVertex2f(0.5795f, 0.219f);
glVertex2f(0.567f, 0.071f);
glEnd();

//........Right/Left 5rd and last part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.675f, 0.0f);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.605f, 0.25f);
glVertex2f(-0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.23f);
glVertex2f(-0.605f, 0.23f);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.21f);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.605f, 0.22f);
glVertex2f(-0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.19f);
glVertex2f(-0.605f, 0.19f);
glVertex2f(-0.605f, 0.2f);
glVertex2f(-0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.17f);
glVertex2f(-0.605f, 0.17f);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.15f);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.605f, 0.16f);
glVertex2f(-0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.13f);
glVertex2f(-0.605f, 0.13f);
glVertex2f(-0.605f, 0.14f);
glVertex2f(-0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.11f);
glVertex2f(-0.605f, 0.11f);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.09f);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.605f, 0.1f);
glVertex2f(-0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.07f);
glVertex2f(-0.605f, 0.07f);
glVertex2f(-0.605f, 0.08f);
glVertex2f(-0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.05f);
glVertex2f(-0.605f, 0.05f);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.03f);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.01f);
glVertex2f(-0.605f, 0.01f);
glVertex2f(-0.605f, 0.02f);
glVertex2f(-0.675f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(-0.643f, 0.0f);
glVertex2f(-0.637f, 0.0f);
glVertex2f(-0.637f, 0.25f);
glVertex2f(-0.643f, 0.25f);
glEnd();
//...........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.675f, 0.0f);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.605f, 0.25f);
glVertex2f(0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.23f);
glVertex2f(0.605f, 0.23f);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.21f);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.605f, 0.22f);
glVertex2f(0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.19f);
glVertex2f(0.605f, 0.19f);
glVertex2f(0.605f, 0.2f);
glVertex2f(0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.17f);
glVertex2f(0.605f, 0.17f);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.15f);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.605f, 0.16f);
glVertex2f(0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.13f);
glVertex2f(0.605f, 0.13f);
glVertex2f(0.605f, 0.14f);
glVertex2f(0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.11f);
glVertex2f(0.605f, 0.11f);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.09f);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.605f, 0.1f);
glVertex2f(0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.07f);
glVertex2f(0.605f, 0.07f);
glVertex2f(0.605f, 0.08f);
glVertex2f(0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.05f);
glVertex2f(0.605f, 0.05f);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.03f);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.01f);
glVertex2f(0.605f, 0.01f);
glVertex2f(0.605f, 0.02f);
glVertex2f(0.675f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(0.643f, 0.0f);
glVertex2f(0.637f, 0.0f);
glVertex2f(0.637f, 0.25f);
glVertex2f(0.643f, 0.25f);
glEnd();


//..............Roof...............

glBegin(GL_QUADS);
glColor3ub(229, 152, 102);
glVertex2f(-1.3f, -0.12f);
glVertex2f(1.3f, -0.12f);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);
glEnd();

glBegin(GL_LINES);
glColor3ub(40, 55, 71);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);

glVertex2f(0.65f, -0.03f);
glVertex2f(-0.65f, -0.03f);

glVertex2f(0.8f, -0.05f);
glVertex2f(-0.8f, -0.05f);

glVertex2f(0.95f, -0.07f);
glVertex2f(-0.95f, -0.07f);

glVertex2f(1.1f, -0.09f);
glVertex2f(-1.1f, -0.09f);

glVertex2f(1.25f, -0.11f);
glVertex2f(-1.25f, -0.11f);

glVertex2f(-1.25f, -0.12f);  //SIDE LINE
glVertex2f(-0.48f, -0.01f);

glVertex2f(1.25f, -0.12f);  //SIDE LINE
glVertex2f(0.48f, -0.01f);
glEnd();
//............
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.585f, 0.04f);
glVertex2f(-0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.56f, 0.04f);
glVertex2f(-0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.48f, 0.025f);
glVertex2f(-0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.39f, -0.01f);
glVertex2f(-0.455f, 0.025f);
glVertex2f(-0.48f, 0.025f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Left Grass
glVertex2f(-1.0f, -0.08f);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.675f, 0.04f);
glVertex2f(-1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();

glTranslated(-0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glLoadIdentity();

//............
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.585f, 0.04f);
glVertex2f(0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.56f, 0.04f);
glVertex2f(0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.48f, 0.025f);
glVertex2f(0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.39f, -0.01f);
glVertex2f(0.455f, 0.025f);
glVertex2f(0.48f, 0.025f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Right Grass
glVertex2f(1.0f, -0.08f);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.675f, 0.04f);
glVertex2f(1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();

glTranslated(0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();
glLoadIdentity();

//....................Flag.........................

glBegin(GL_QUADS);
glColor3ub(182, 102, 75);
glVertex2f(-0.08f,-0.05f);
glVertex2f(0.08f,-0.05f);
glVertex2f(0.07f, 0.02f);
glVertex2f(-0.07f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);
glVertex2f(-0.003f, 0.02f);
glVertex2f(0.003f, 0.02f);
glVertex2f(0.003f,0.2f);
glVertex2f(-0.003f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(25, 111, 61);
glVertex2f(0.003f, 0.14f);
glVertex2f(0.08f, 0.14f);
glVertex2f(0.08f,0.19f);
glVertex2f(0.003f,0.19f);
glEnd();

glColor3ub(238, 68, 37);
	int k;
	GLfloat x2=0.042f; GLfloat y2=.165f; GLfloat radius2 =.018f;
	int triangleAmount2 = 20;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);       //center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi / triangleAmount2))
			);
		}
	glEnd();

//......................GRASS...........................

glBegin(GL_QUADS);
glColor3ub(44, 134, 38);
glVertex2f(-1.0f, -0.39f);
glColor3ub(36, 185, 26);
glVertex2f(1.0f, -0.39f);
glColor3ub(88, 214, 141);
glVertex2f(1.0f, -0.125f);
glColor3ub(129, 211, 123);
glVertex2f(-1.0f, -0.125f);
glEnd();


glTranslated(-0.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();

glTranslated(0.15,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.3,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.45,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.6,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.75,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.9,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.05,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.58,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.72,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();
//..........Road side wall................
glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glVertex2f(1.0f,-0.36f);
glVertex2f(-1.0f,-0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.9f,-0.45f);
glVertex2f(-0.9f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.8f,-0.45f);
glVertex2f(-0.8f,-0.36f);
glEnd();
//............
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.7f,-0.45f);
glVertex2f(-0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.6f,-0.45f);
glVertex2f(-0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.5f,-0.45f);
glVertex2f(-0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.4f,-0.45f);
glVertex2f(-0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.3f,-0.45f);
glVertex2f(-0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.2f,-0.45f);
glVertex2f(-0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.1f,-0.45f);
glVertex2f(-0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.0f,-0.45f);
glVertex2f(0.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.1f,-0.45f);
glVertex2f(0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.2f,-0.45f);
glVertex2f(0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.3f,-0.45f);
glVertex2f(0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.4f,-0.45f);
glVertex2f(0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.5f,-0.45f);
glVertex2f(0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.6f,-0.45f);
glVertex2f(0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.7f,-0.45f);
glVertex2f(0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.8f,-0.45f);
glVertex2f(0.8f,-0.36f);
glEnd();glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.9f,-0.45f);
glVertex2f(0.9f,-0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glVertex2f(1.0f,-0.39f);
glVertex2f(-1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.39f);
glVertex2f(1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.95f,-0.42f);
glVertex2f(-0.95f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.85f,-0.42f);
glVertex2f(-0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.75f,-0.42f);
glVertex2f(-0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.65f,-0.42f);
glVertex2f(-0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.55f,-0.42f);
glVertex2f(-0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.45f,-0.42f);
glVertex2f(-0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.35f,-0.42f);
glVertex2f(-0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.25f,-0.42f);
glVertex2f(-0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.15f,-0.42f);
glVertex2f(-0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.05f,-0.42f);
glVertex2f(-0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.05f,-0.42f);
glVertex2f(0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.15f,-0.42f);
glVertex2f(0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.25f,-0.42f);
glVertex2f(0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.35f,-0.42f);
glVertex2f(0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.45f,-0.42f);
glVertex2f(0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.55f,-0.42f);
glVertex2f(0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.65f,-0.42f);
glVertex2f(0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.75f,-0.42f);
glVertex2f(0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.85f,-0.42f);
glVertex2f(0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.95f,-0.42f);
glVertex2f(0.95f,-0.39f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glVertex2f(1.0f,-0.345f);
glVertex2f(-1.0f,-0.345f);
glEnd();


glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );       ///GRILL LINE
glVertex2f(0.98f,-0.3535f);
glVertex2f(0.98f,-0.2f);
glVertex2f(0.94f,-0.3535f);
glVertex2f(0.94f,-0.2f);
glVertex2f(0.9f,-0.3535f);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.86f,-0.3535f);
glVertex2f(0.86f,-0.2f);
glVertex2f(0.82f,-0.3535f);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.78f,-0.3535f);
glVertex2f(0.78f,-0.2f);
glVertex2f(0.74f,-0.3535f);
glVertex2f(0.74f,-0.2f);
glVertex2f(0.7f,-0.3535f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.66f,-0.3535f);
glVertex2f(0.66f,-0.2f);
glVertex2f(0.62f,-0.3535f);
glVertex2f(0.62f,-0.2f);
glVertex2f(0.58f,-0.3535f);
glVertex2f(0.58f,-0.2f);
glVertex2f(0.54f,-0.3535f);
glVertex2f(0.54f,-0.2f);
glVertex2f(0.5f,-0.3535f);
glVertex2f(0.5f,-0.2f);
glVertex2f(0.46f,-0.3535f);
glVertex2f(0.46f,-0.2f);
glVertex2f(0.42f,-0.3535f);
glVertex2f(0.42f,-0.2f);
glVertex2f(0.38f,-0.3535f);
glVertex2f(0.38f,-0.2f);
glVertex2f(0.34f,-0.3535f);
glVertex2f(0.34f,-0.2f);
glVertex2f(0.3f,-0.3535f);
glVertex2f(0.3f,-0.2f);
glVertex2f(0.26f,-0.3535f);
glVertex2f(0.26f,-0.2f);
glVertex2f(0.22f,-0.3535f);
glVertex2f(0.22f,-0.2f);
glVertex2f(0.18f,-0.3535f);
glVertex2f(0.18f,-0.2f);
glVertex2f(0.14f,-0.3535f);
glVertex2f(0.14f,-0.2f);
glVertex2f(0.1f,-0.3535f);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.06f,-0.3535f);
glVertex2f(0.06f,-0.2f);
glVertex2f(0.02f,-0.3535f);
glVertex2f(0.02f,-0.2f);


glVertex2f(-0.98f,-0.3535f);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.94f,-0.3535f);
glVertex2f(-0.94f,-0.2f);
glVertex2f(-0.9f,-0.3535f);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.86f,-0.3535f);
glVertex2f(-0.86f,-0.2f);
glVertex2f(-0.82f,-0.3535f);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-0.78f,-0.3535f);
glVertex2f(-0.78f,-0.2f);
glVertex2f(-0.74f,-0.3535f);
glVertex2f(-0.74f,-0.2f);
glVertex2f(-0.7f,-0.3535f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.66f,-0.3535f);
glVertex2f(-0.66f,-0.2f);
glVertex2f(-0.62f,-0.3535f);
glVertex2f(-0.62f,-0.2f);
glVertex2f(-0.58f,-0.3535f);
glVertex2f(-0.58f,-0.2f);
glVertex2f(-0.54f,-0.3535f);
glVertex2f(-0.54f,-0.2f);
glVertex2f(-0.5f,-0.3535f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.46f,-0.3535f);
glVertex2f(-0.46f,-0.2f);
glVertex2f(-0.42f,-0.3535f);
glVertex2f(-0.42f,-0.2f);
glVertex2f(-0.38f,-0.3535f);
glVertex2f(-0.38f,-0.2f);
glVertex2f(-0.34f,-0.3535f);
glVertex2f(-0.34f,-0.2f);
glVertex2f(-0.3f,-0.3535f);
glVertex2f(-0.3f,-0.2f);
glVertex2f(-0.26f,-0.3535f);
glVertex2f(-0.26f,-0.2f);
glVertex2f(-0.22f,-0.3535f);
glVertex2f(-0.22f,-0.2f);
glVertex2f(-0.18f,-0.3535f);
glVertex2f(-0.18f,-0.2f);
glVertex2f(-0.14f,-0.3535f);
glVertex2f(-0.14f,-0.2f);
glVertex2f(-0.1f,-0.3535f);
glVertex2f(-0.1f,-0.2f);
glVertex2f(-0.06f,-0.3535f);
glVertex2f(-0.06f,-0.2f);
glVertex2f(-0.02f,-0.3535f);
glVertex2f(-0.02f,-0.2f);



glVertex2f(-0.98f,-0.33f);  ///LIFT TO RIGHT LINE
glVertex2f(0.98f,-0.33f);
glVertex2f(-0.98f,-0.28f);
glVertex2f(0.98f,-0.28f);
glVertex2f(-0.98f,-0.23f);
glVertex2f(0.98f,-0.23f);
glEnd();



GLfloat u1=-0.94f;               ///Grill lamp 1
GLfloat v1=-0.18f;
GLfloat radius4 =.025f;
int line = 100;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a2 = 0; a2 <= line;a2++) {
glVertex2f(
u1 + (radius4 * cos(a2 * twicePi / line)),
v1 + (radius4 * sin(a2 * twicePi / line))
);
}
glEnd();

GLfloat u2=-0.58f;
GLfloat v2=-0.18f;              ///Grill lamp 2
GLfloat radius5 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a3 = 0; a3 <= line;a3++) {
glVertex2f(
u2 + (radius5 * cos(a3 * twicePi / line)),
v2 + (radius5 * sin(a3 * twicePi / line))
);
}
glEnd();

GLfloat u3=-0.22f;
GLfloat v3=-0.18f;              ///Grill lamp 3
GLfloat radius6 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a4 = 0; a4 <= line;a4++) {
glVertex2f(
u3 + (radius6 * cos(a4 * twicePi / line)),
v3 + (radius6 * sin(a4 * twicePi / line))
);
}
glEnd();


GLfloat u4=0.22f;
GLfloat v4=-0.18f;              ///Grill lamp 4
GLfloat radius7 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a5 = 0; a5 <= line;a5++) {
glVertex2f(
u4 + (radius7 * cos(a5 * twicePi / line)),
v4 + (radius7 * sin(a5 * twicePi / line))
);
}
glEnd();

GLfloat u5=0.58f;
GLfloat v5=-0.18f;              ///Grill lamp 5
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a6 = 0; a6 <= line;a6++) {
glVertex2f(
u5 + (radius7 * cos(a6 * twicePi / line)),
v5 + (radius7 * sin(a6 * twicePi / line))
);
}
glEnd();

GLfloat u6=0.94f;
GLfloat v6=-0.18f;              ///Grill lamp 6
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a7 = 0; a7 <= line;a7++) {
glVertex2f(
u6 + (radius7 * cos(a7 * twicePi / line)),
v6 + (radius7 * sin(a7 * twicePi / line))
);
}
glEnd();


//........................

GLfloat u7=0.8f;
GLfloat v7=0.8f;              /// SUN
GLfloat radius8 =.1f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(177, 0, 0);
for(int a8 = 0; a8 <= line;a8++) {
glVertex2f(
u7 + (radius8 * cos(a8 * twicePi / line)),
v7 + (radius8 * sin(a8 * twicePi / line))
);
}
glEnd();
//........................................................................................
//Road
glBegin(GL_QUADS);
glColor3ub(127, 140, 141  );
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.55f);
glVertex2f(-1.0f,-0.55f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.55f);
glVertex2f(1.0f,-0.55f);
glVertex2f(1.0f,-0.51f);
glVertex2f(-1.0f,-0.51f);
glEnd();

//Road line
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.9f,-0.725f);
glVertex2f(-0.7f,-0.725f);
glVertex2f(-0.7f,-0.715f);
glVertex2f(-0.9f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.5f,-0.725f);
glVertex2f(-0.3f,-0.725f);
glVertex2f(-0.3f,-0.715f);
glVertex2f(-0.5f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,-0.725f);
glVertex2f(0.1f,-0.725f);
glVertex2f(0.1f,-0.715f);
glVertex2f(-0.1f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.3f,-0.725f);
glVertex2f(0.5f,-0.725f);
glVertex2f(0.5f,-0.715f);
glVertex2f(0.3f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.7f,-0.725f);
glVertex2f(0.9f,-0.725f);
glVertex2f(0.9f,-0.715f);
glVertex2f(0.7f,-0.715f);
glEnd();
//.......................................................
///Car 1
glPushMatrix();
GLfloat u=-0.68f;
GLfloat v=-0.54f;
GLfloat z=-0.53f;
GLfloat radius3 =.031f; //for car

glTranslatef(-positionBD4,-0.28,0);
glBegin(GL_QUADS);///Body
glColor3ub(187,64,24);
glVertex2f(-0.73f,-0.54f);
glVertex2f(-0.47f, -0.54f);
glVertex2f(-0.47f, -0.46f);
glVertex2f(-0.73f, -0.46f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(187,64,24);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.5f, -0.46f);
glVertex2f(-0.55f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.61f, -0.46f);
glVertex2f(-0.61f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.55f, -0.46f);
glVertex2f(-0.55f, -0.4f);
glVertex2f(-0.59f, -0.4f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();
//.......................................................
///car2

glPushMatrix();

glTranslatef(positionBD4,-0.08,0);
glBegin(GL_QUADS);///Body
glColor3ub(108, 234, 14);
glVertex2f(-0.73f,-0.54f);
glVertex2f(-0.47f, -0.54f);
glVertex2f(-0.47f, -0.46f);
glVertex2f(-0.73f, -0.46f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(108, 234, 14);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.5f, -0.46f);
glVertex2f(-0.55f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.61f, -0.46f);
glVertex2f(-0.61f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.55f, -0.46f);
glVertex2f(-0.55f, -0.4f);
glVertex2f(-0.59f, -0.4f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();

///car3

glPushMatrix();

glTranslatef(positionBD4+1.5f,-0.08,0);
glBegin(GL_QUADS);///Body
glColor3ub(45, 57, 13);
glVertex2f(-0.73f,-0.54f);
glVertex2f(-0.47f, -0.54f);
glVertex2f(-0.47f, -0.46f);
glVertex2f(-0.73f, -0.46f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(45, 57, 13);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.5f, -0.46f);
glVertex2f(-0.55f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.61f, -0.46f);
glVertex2f(-0.61f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.55f, -0.46f);
glVertex2f(-0.55f, -0.4f);
glVertex2f(-0.59f, -0.4f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();




///Car4

glPushMatrix();

glTranslatef(-positionBD4+1.5f,-0.28,0);
glBegin(GL_QUADS);///Body
glColor3ub(208, 211, 212);
glVertex2f(-0.73f,-0.52f);
glVertex2f(-0.47f, -0.52f);
glVertex2f(-0.47f, -0.48f);
glVertex2f(-0.73f, -0.48f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(248, 196, 113);
glVertex2f(-0.73f,-0.48f);
glVertex2f(-0.47f, -0.48f);
glVertex2f(-0.49f, -0.38f);
glVertex2f(-0.71f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.71f,-0.47f);
glVertex2f(-0.67f, -0.47f);
glVertex2f(-0.67f, -0.43f);
glVertex2f(-0.71f, -0.43f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.47f);
glVertex2f(-0.61f, -0.47f);
glVertex2f(-0.61f, -0.43f);
glVertex2f(-0.65f, -0.43f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.47f);
glVertex2f(-0.55f, -0.47f);
glVertex2f(-0.55f, -0.43f);
glVertex2f(-0.59f, -0.43f);
glEnd();
glBegin(GL_QUADS);///Door
glColor3ub(0,0,0);
glVertex2f(-0.52f,-0.42f);
glVertex2f(-0.5f, -0.42f);
glVertex2f(-0.5f, -0.5f);
glVertex2f(-0.52f, -0.5f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();
///::::::::::::::::::::::::::::::::::::::::::::
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.96f);
glVertex2f(-1.0f,-0.96f);
glEnd();
//.................................

glutTimerFunc(15000, night_demo, 0);
glFlush();
}

void evening_demo(int val) {

 glutDisplayFunc(evening);
//sound2();
 }

///:::::::::::::::::::::::::::::::::::::::::::::DAY::::::::::::::::::::::::::::::::::::::::::::::::::::
void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//...............sky.......................

glBegin(GL_QUADS);
glColor3ub(201, 253, 255);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();


//...................................National Parliament....................................
//........... Middle part.................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(-0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f,0.4f);
glVertex2f(-0.2f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.37f);
glVertex2f(0.2f, 0.37f);
glVertex2f(0.2f,0.39f);
glVertex2f(-0.2f,0.39f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.34f);
glVertex2f(0.2f, 0.34f);
glVertex2f(0.2f,0.36f);
glVertex2f(-0.2f,0.36f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.31f);
glVertex2f(0.2f, 0.31f);
glVertex2f(0.2f,0.33f);
glVertex2f(-0.2f,0.33f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.28f);
glVertex2f(0.2f, 0.28f);
glVertex2f(0.2f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.25f);
glVertex2f(0.2f, 0.25f);
glVertex2f(0.2f,0.27f);
glVertex2f(-0.2f,0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.22f);
glVertex2f(0.2f, 0.22f);
glVertex2f(0.2f,0.24f);
glVertex2f(-0.2f,0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.19f);
glVertex2f(0.2f, 0.19f);
glVertex2f(0.2f,0.21f);
glVertex2f(-0.2f,0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.16f);
glVertex2f(0.2f, 0.16f);
glVertex2f(0.2f,0.18f);
glVertex2f(-0.2f,0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.13f);
glVertex2f(0.2f, 0.13f);
glVertex2f(0.2f,0.15f);
glVertex2f(-0.2f,0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.1f);
glVertex2f(0.2f, 0.1f);
glVertex2f(0.2f,0.12f);
glVertex2f(-0.2f,0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.07f);
glVertex2f(0.2f, 0.07f);
glVertex2f(0.2f,0.09f);
glVertex2f(-0.2f,0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.04f);
glVertex2f(0.2f, 0.04f);
glVertex2f(0.2f,0.06f);
glVertex2f(-0.2f,0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.01f);
glVertex2f(0.2f, 0.01f);
glVertex2f(0.2f,0.03f);
glVertex2f(-0.2f,0.03f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line left
glVertex2f(-0.1f, 0.0f);
glVertex2f(-0.095f, 0.0f);
glVertex2f(-0.095f,0.4f);
glVertex2f(-0.1f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );    // Line Right
glVertex2f(0.1f, 0.0f);
glVertex2f(0.095f, 0.0f);
glVertex2f(0.095f,0.4f);
glVertex2f(0.1f,0.4f);
glEnd();

//...............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.38f);
glVertex2f(0.05f, 0.38f);
glVertex2f(0.05f,0.4f);
glVertex2f(-0.05f,0.4f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.35f);
glVertex2f(0.05f, 0.35f);
glVertex2f(0.05f,0.37f);
glVertex2f(-0.05f,0.37f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 163, 164);
glVertex2f(-0.05f, 0.32f);
glVertex2f(0.05f, 0.32f);
glVertex2f(0.05f,0.34f);
glVertex2f(-0.05f,0.34f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.29f);
glVertex2f(0.05f, 0.29f);
glVertex2f(0.05f,0.31f);
glVertex2f(-0.05f,0.31f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42);
glVertex2f(-0.05f, 0.25f);
glVertex2f(0.05f, 0.25f);
glVertex2f(0.05f,0.29f);
glVertex2f(-0.05f,0.29f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.23f);
glVertex2f(0.05f, 0.23f);
glVertex2f(0.05f,0.25f);
glVertex2f(-0.05f,0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.19f);
glVertex2f(0.05f, 0.19f);
glVertex2f(0.05f,0.23f);
glVertex2f(-0.05f,0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.17f);
glVertex2f(0.05f, 0.17f);
glVertex2f(0.05f,0.19f);
glVertex2f(-0.05f,0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.13f);
glVertex2f(0.05f, 0.13f);
glVertex2f(0.05f,0.17f);
glVertex2f(-0.05f,0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.11f);
glVertex2f(0.05f, 0.11f);
glVertex2f(0.05f,0.13f);
glVertex2f(-0.05f,0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.07f);
glVertex2f(0.05f, 0.07f);
glVertex2f(0.05f,0.11f);
glVertex2f(-0.05f,0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(81, 90, 90 );
glVertex2f(-0.05f, 0.05f);
glVertex2f(0.05f, 0.05f);
glVertex2f(0.05f,0.07f);
glVertex2f(-0.05f,0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(23, 32, 42 );
glVertex2f(-0.05f, 0.0f);
glVertex2f(0.05f, 0.0f);
glVertex2f(0.05f,0.05f);
glVertex2f(-0.05f,0.05f);
glEnd();


//........Right/Left 1st part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.3f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.27f);
glVertex2f(-0.2f, 0.29f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.24f);
glVertex2f(-0.2f, 0.26f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.21f);
glVertex2f(-0.2f, 0.23f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.18f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.15f);
glVertex2f(-0.2f, 0.17f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.12f);
glVertex2f(-0.2f, 0.14f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.09f);
glVertex2f(-0.2f, 0.11f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.06f);
glVertex2f(-0.2f, 0.08f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.03f);
glVertex2f(-0.2f, 0.05f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.02f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.2f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(-0.295f, 0.0f);
glVertex2f(-0.295f, 0.31f);
glVertex2f(-0.3f, 0.32f);
glVertex2f(-0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(-0.226f, 0.0f);
glVertex2f(-0.226f, 0.30f);
glVertex2f(-0.23f, 0.305f);
glVertex2f(-0.23f, 0.0f);
glEnd();


glColor3ub(97, 106, 107);
	int i;
	GLfloat x=-0.299f; GLfloat y=.095f; GLfloat radius =.04f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);       //center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//.............................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.3f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.27f);
glVertex2f(0.2f, 0.29f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.35f, 0.30f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.24f);
glVertex2f(0.2f, 0.26f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.35f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.21f);
glVertex2f(0.2f, 0.23f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.35f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.18f);
glVertex2f(0.2f, 0.2f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.35f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.15f);
glVertex2f(0.2f, 0.17f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.35f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.12f);
glVertex2f(0.2f, 0.14f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.35f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.09f);
glVertex2f(0.2f, 0.11f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.35f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.06f);
glVertex2f(0.2f, 0.08f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.35f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.03f);
glVertex2f(0.2f, 0.05f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.35f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.02f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.35f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.2f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.35f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 1
glVertex2f(0.295f, 0.0f);
glVertex2f(0.295f, 0.31f);
glVertex2f(0.3f, 0.32f);
glVertex2f(0.3f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241);     // Line 2
glVertex2f(0.226f, 0.0f);
glVertex2f(0.226f, 0.30f);
glVertex2f(0.23f, 0.305f);
glVertex2f(0.23f, 0.0f);
glEnd();

glColor3ub(97, 106, 107);
	int j;
	GLfloat x1=0.299f; GLfloat y1=.095f; GLfloat radius1 =.04f;
	int triangleAmount1 = 20;
	GLfloat twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);       //center of circle
		for(j= 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


//...........Right/Left 2nd part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.33f);
glVertex2f(-0.49f, 0.3f);
glVertex2f(-0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.3f);
glVertex2f(-0.35f, 0.32f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.27f);
glVertex2f(-0.35f, 0.29f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.24f);
glVertex2f(-0.35f, 0.26f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.21f);
glVertex2f(-0.35f, 0.23f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.18f);
glVertex2f(-0.35f, 0.2f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.15f);
glVertex2f(-0.35f, 0.17f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.12f);
glVertex2f(-0.35f, 0.14f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.09f);
glVertex2f(-0.35f, 0.11f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.06f);
glVertex2f(-0.35f, 0.08f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.03f);
glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(-0.35f, 0.0f);
glVertex2f(-0.35f, 0.02f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.36f, 0.12f);
glVertex2f(-0.38f, 0.27f);
glVertex2f(-0.4f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(-0.4f, 0.0f);
glVertex2f(-0.36f, 0.0f);
glVertex2f(-0.36f, 0.08f);
glVertex2f(-0.4f, 0.07f);
glEnd();


//..........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.33f);
glVertex2f(0.49f, 0.3f);
glVertex2f(0.49f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.3f);
glVertex2f(0.35f, 0.32f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.49f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.27f);
glVertex2f(0.35f, 0.29f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.24f);
glVertex2f(0.35f, 0.26f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.21f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.21f);
glVertex2f(0.35f, 0.23f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.18f);
glVertex2f(0.35f, 0.2f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.15f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.15f);
glVertex2f(0.35f, 0.17f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.12f);
glVertex2f(0.35f, 0.14f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.09f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.09f);
glVertex2f(0.35f, 0.11f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.06f);
glVertex2f(0.35f, 0.08f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.03f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.03f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(166, 172, 175);
glVertex2f(0.35f, 0.0f);
glVertex2f(0.35f, 0.02f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.36f, 0.12f);
glVertex2f(0.38f, 0.27f);
glVertex2f(0.4f, 0.11f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(97, 106, 107 );
glVertex2f(0.4f, 0.0f);
glVertex2f(0.36f, 0.0f);
glVertex2f(0.36f, 0.08f);
glVertex2f(0.4f, 0.07f);
glEnd();

//........Right/Left 3rd part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.49f, 0.0f);
glVertex2f(-0.49f, 0.29f);
glVertex2f(-0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.49f, 0.26f);
glVertex2f(-0.49f, 0.28f);
glVertex2f(-0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.49f, 0.23f);
glVertex2f(-0.49f, 0.25f);
glVertex2f(-0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.49f, 0.2f);
glVertex2f(-0.49f, 0.22f);
glVertex2f(-0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.49f, 0.17f);
glVertex2f(-0.49f, 0.19f);
glVertex2f(-0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.49f, 0.14f);
glVertex2f(-0.49f, 0.16f);
glVertex2f(-0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.49f, 0.11f);
glVertex2f(-0.49f, 0.13f);
glVertex2f(-0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.49f, 0.08f);
glVertex2f(-0.49f, 0.1f);
glVertex2f(-0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.49f, 0.05f);
glVertex2f(-0.49f, 0.07f);
glVertex2f(-0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.49f, 0.02f);
glVertex2f(-0.49f, 0.04f);
glVertex2f(-0.505f, 0.04f);
glEnd();
//..........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(0.505f, 0.0f);
glVertex2f(0.49f, 0.0f);
glVertex2f(0.49f, 0.29f);
glVertex2f(0.505f, 0.29f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.49f, 0.26f);
glVertex2f(0.49f, 0.28f);
glVertex2f(0.505f, 0.28f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.49f, 0.23f);
glVertex2f(0.49f, 0.25f);
glVertex2f(0.505f, 0.25f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.49f, 0.2f);
glVertex2f(0.49f, 0.22f);
glVertex2f(0.505f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.49f, 0.17f);
glVertex2f(0.49f, 0.19f);
glVertex2f(0.505f, 0.19f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.49f, 0.14f);
glVertex2f(0.49f, 0.16f);
glVertex2f(0.505f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.49f, 0.11f);
glVertex2f(0.49f, 0.13f);
glVertex2f(0.505f, 0.13f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.49f, 0.08f);
glVertex2f(0.49f, 0.1f);
glVertex2f(0.505f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.49f, 0.05f);
glVertex2f(0.49f, 0.07f);
glVertex2f(0.505f, 0.07f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.49f, 0.02f);
glVertex2f(0.49f, 0.04f);
glVertex2f(0.505f, 0.04f);
glEnd();

//........Right/Left 4rd part............

glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.3f);
glVertex2f(-0.605f, 0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.505f, 0.27f);
glVertex2f(-0.505f, 0.29f);
glVertex2f(-0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.505f, 0.24f);
glVertex2f(-0.505f, 0.26f);
glVertex2f(-0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.505f, 0.21f);
glVertex2f(-0.505f, 0.23f);
glVertex2f(-0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.505f, 0.18f);
glVertex2f(-0.505f, 0.2f);
glVertex2f(-0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.505f, 0.15f);
glVertex2f(-0.505f, 0.17f);
glVertex2f(-0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.505f, 0.12f);
glVertex2f(-0.505f, 0.14f);
glVertex2f(-0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.505f, 0.09f);
glVertex2f(-0.505f, 0.11f);
glVertex2f(-0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.505f, 0.06f);
glVertex2f(-0.505f, 0.08f);
glVertex2f(-0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.03f);
glVertex2f(-0.505f, 0.05f);
glVertex2f(-0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.505f, 0.0f);
glVertex2f(-0.505f, 0.02f);
glVertex2f(-0.605f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(-0.597f, 0.061f);
glVertex2f(-0.5795f, 0.219f);
glVertex2f(-0.567f, 0.071f);
glEnd();
//........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212 );
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.3f);
glVertex2f(0.605f, 0.27f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.505f, 0.27f);
glVertex2f(0.505f, 0.29f);
glVertex2f(0.605f, 0.26f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.505f, 0.24f);
glVertex2f(0.505f, 0.26f);
glVertex2f(0.605f, 0.23f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.505f, 0.21f);
glVertex2f(0.505f, 0.23f);
glVertex2f(0.605f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.505f, 0.18f);
glVertex2f(0.505f, 0.2f);
glVertex2f(0.605f, 0.17f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.505f, 0.15f);
glVertex2f(0.505f, 0.17f);
glVertex2f(0.605f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.505f, 0.12f);
glVertex2f(0.505f, 0.14f);
glVertex2f(0.605f, 0.11f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.505f, 0.09f);
glVertex2f(0.505f, 0.11f);
glVertex2f(0.605f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.505f, 0.06f);
glVertex2f(0.505f, 0.08f);
glVertex2f(0.605f, 0.05f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.03f);
glVertex2f(0.505f, 0.05f);
glVertex2f(0.605f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.505f, 0.0f);
glVertex2f(0.505f, 0.02f);
glVertex2f(0.605f, 0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(97, 106, 107 );
glVertex2f(0.597f, 0.061f);
glVertex2f(0.5795f, 0.219f);
glVertex2f(0.567f, 0.071f);
glEnd();

//........Right/Left 5rd and last part............
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(-0.675f, 0.0f);
glVertex2f(-0.605f, 0.0f);
glVertex2f(-0.605f, 0.25f);
glVertex2f(-0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.23f);
glVertex2f(-0.605f, 0.23f);
glVertex2f(-0.605f, 0.24f);
glVertex2f(-0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.21f);
glVertex2f(-0.605f, 0.21f);
glVertex2f(-0.605f, 0.22f);
glVertex2f(-0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.19f);
glVertex2f(-0.605f, 0.19f);
glVertex2f(-0.605f, 0.2f);
glVertex2f(-0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.17f);
glVertex2f(-0.605f, 0.17f);
glVertex2f(-0.605f, 0.18f);
glVertex2f(-0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.15f);
glVertex2f(-0.605f, 0.15f);
glVertex2f(-0.605f, 0.16f);
glVertex2f(-0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.13f);
glVertex2f(-0.605f, 0.13f);
glVertex2f(-0.605f, 0.14f);
glVertex2f(-0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.11f);
glVertex2f(-0.605f, 0.11f);
glVertex2f(-0.605f, 0.12f);
glVertex2f(-0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.09f);
glVertex2f(-0.605f, 0.09f);
glVertex2f(-0.605f, 0.1f);
glVertex2f(-0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.07f);
glVertex2f(-0.605f, 0.07f);
glVertex2f(-0.605f, 0.08f);
glVertex2f(-0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.05f);
glVertex2f(-0.605f, 0.05f);
glVertex2f(-0.605f, 0.06f);
glVertex2f(-0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.03f);
glVertex2f(-0.605f, 0.03f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(-0.675f, 0.01f);
glVertex2f(-0.605f, 0.01f);
glVertex2f(-0.605f, 0.02f);
glVertex2f(-0.675f, 0.02f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(-0.643f, 0.0f);
glVertex2f(-0.637f, 0.0f);
glVertex2f(-0.637f, 0.25f);
glVertex2f(-0.643f, 0.25f);
glEnd();
//...........................
glBegin(GL_QUADS);
glColor3ub(208, 211, 212);
glVertex2f(0.675f, 0.0f);
glVertex2f(0.605f, 0.0f);
glVertex2f(0.605f, 0.25f);
glVertex2f(0.675f, 0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.23f);
glVertex2f(0.605f, 0.23f);
glVertex2f(0.605f, 0.24f);
glVertex2f(0.675f, 0.24f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.21f);
glVertex2f(0.605f, 0.21f);
glVertex2f(0.605f, 0.22f);
glVertex2f(0.675f, 0.22f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.19f);
glVertex2f(0.605f, 0.19f);
glVertex2f(0.605f, 0.2f);
glVertex2f(0.675f, 0.2f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.17f);
glVertex2f(0.605f, 0.17f);
glVertex2f(0.605f, 0.18f);
glVertex2f(0.675f, 0.18f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.15f);
glVertex2f(0.605f, 0.15f);
glVertex2f(0.605f, 0.16f);
glVertex2f(0.675f, 0.16f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.13f);
glVertex2f(0.605f, 0.13f);
glVertex2f(0.605f, 0.14f);
glVertex2f(0.675f, 0.14f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.11f);
glVertex2f(0.605f, 0.11f);
glVertex2f(0.605f, 0.12f);
glVertex2f(0.675f, 0.12f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.09f);
glVertex2f(0.605f, 0.09f);
glVertex2f(0.605f, 0.1f);
glVertex2f(0.675f, 0.1f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.07f);
glVertex2f(0.605f, 0.07f);
glVertex2f(0.605f, 0.08f);
glVertex2f(0.675f, 0.08f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.05f);
glVertex2f(0.605f, 0.05f);
glVertex2f(0.605f, 0.06f);
glVertex2f(0.675f, 0.06f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.03f);
glVertex2f(0.605f, 0.03f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(133, 146, 158);
glVertex2f(0.675f, 0.01f);
glVertex2f(0.605f, 0.01f);
glVertex2f(0.605f, 0.02f);
glVertex2f(0.675f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241 );         //line
glVertex2f(0.643f, 0.0f);
glVertex2f(0.637f, 0.0f);
glVertex2f(0.637f, 0.25f);
glVertex2f(0.643f, 0.25f);
glEnd();


//..............Roof...............

glBegin(GL_QUADS);
glColor3ub(229, 152, 102);
glVertex2f(-1.3f, -0.12f);
glVertex2f(1.3f, -0.12f);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);
glEnd();

glBegin(GL_LINES);
glColor3ub(40, 55, 71);
glVertex2f(0.5f, -0.01f);
glVertex2f(-0.5f, -0.01f);

glVertex2f(0.65f, -0.03f);
glVertex2f(-0.65f, -0.03f);

glVertex2f(0.8f, -0.05f);
glVertex2f(-0.8f, -0.05f);

glVertex2f(0.95f, -0.07f);
glVertex2f(-0.95f, -0.07f);

glVertex2f(1.1f, -0.09f);
glVertex2f(-1.1f, -0.09f);

glVertex2f(1.25f, -0.11f);
glVertex2f(-1.25f, -0.11f);

glVertex2f(-1.25f, -0.12f);  //SIDE LINE
glVertex2f(-0.48f, -0.01f);

glVertex2f(1.25f, -0.12f);  //SIDE LINE
glVertex2f(0.48f, -0.01f);
glEnd();
//............
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.605f, 0.04f);
glVertex2f(-0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.605f, -0.025f);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.585f, 0.04f);
glVertex2f(-0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.49f, -0.01f);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.56f, 0.04f);
glVertex2f(-0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(-0.465f, -0.01f);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.48f, 0.025f);
glVertex2f(-0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(-0.415f, -0.01f);
glVertex2f(-0.39f, -0.01f);
glVertex2f(-0.455f, 0.025f);
glVertex2f(-0.48f, 0.025f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Left Grass
glVertex2f(-1.0f, -0.08f);
glVertex2f(-0.675f, -0.035f);
glVertex2f(-0.675f, 0.04f);
glVertex2f(-1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();

glTranslated(-0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Left tree
glVertex2f(-0.77f, 0.01f);
glVertex2f(-0.76f, 0.01f);
glVertex2f(-0.76f, 0.09f);
glVertex2f(-0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.72f, 0.09f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.81f, 0.12f);
glVertex2f(-0.72f, 0.12f);
glVertex2f(-0.765f, 0.2f);
glEnd();
glLoadIdentity();

//............
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.605f, 0.04f);
glVertex2f(0.675f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.605f, -0.025f);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.585f, 0.04f);
glVertex2f(0.605f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.49f, -0.01f);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.56f, 0.04f);
glVertex2f(0.585f, 0.04f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(203, 107, 36);
glVertex2f(0.465f, -0.01f);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.48f, 0.025f);
glVertex2f(0.525f, 0.025f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(240, 243, 244);
glVertex2f(0.415f, -0.01f);
glVertex2f(0.39f, -0.01f);
glVertex2f(0.455f, 0.025f);
glVertex2f(0.48f, 0.025f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(82, 190, 128);   //Right Grass
glVertex2f(1.0f, -0.08f);
glVertex2f(0.675f, -0.035f);
glVertex2f(0.675f, 0.04f);
glVertex2f(1.0f, 0.04f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();

glTranslated(0.16,-0.01,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       //Right tree
glVertex2f(0.77f, 0.01f);
glVertex2f(0.76f, 0.01f);
glVertex2f(0.76f, 0.09f);
glVertex2f(0.77f, 0.09f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.09f);
glVertex2f(0.72f, 0.09f);
glVertex2f(0.765f, 0.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(0.81f, 0.12f);
glVertex2f(0.72f, 0.12f);
glVertex2f(0.765f, 0.2f);
glEnd();
glLoadIdentity();

//....................Flag.........................

glBegin(GL_QUADS);
glColor3ub(182, 102, 75);
glVertex2f(-0.08f,-0.05f);
glVertex2f(0.08f,-0.05f);
glVertex2f(0.07f, 0.02f);
glVertex2f(-0.07f, 0.02f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(236, 240, 241);
glVertex2f(-0.003f, 0.02f);
glVertex2f(0.003f, 0.02f);
glVertex2f(0.003f,0.2f);
glVertex2f(-0.003f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(25, 111, 61);
glVertex2f(0.003f, 0.14f);
glVertex2f(0.08f, 0.14f);
glVertex2f(0.08f,0.19f);
glVertex2f(0.003f,0.19f);
glEnd();

glColor3ub(238, 68, 37);
	int k;
	GLfloat x2=0.042f; GLfloat y2=.165f; GLfloat radius2 =.018f;
	int triangleAmount2 = 20;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);       //center of circle
		for(k= 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi / triangleAmount2))
			);
		}
	glEnd();

//......................GRASS...........................

glBegin(GL_QUADS);
glColor3ub(44, 134, 38);
glVertex2f(-1.0f, -0.39f);
glColor3ub(36, 185, 26);
glVertex2f(1.0f, -0.39f);
glColor3ub(88, 214, 141);
glVertex2f(1.0f, -0.125f);
glColor3ub(129, 211, 123);
glVertex2f(-1.0f, -0.125f);
glEnd();


glTranslated(-0.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();

glTranslated(0.15,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.3,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.45,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.6,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.75,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(0.9,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.05,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.2,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.58,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();

glTranslated(1.72,0.0,0.0);
glBegin(GL_QUADS);
glColor3ub(186, 74, 0);       ///Tree
glVertex2f(-0.77f, -0.2f);
glVertex2f(-0.76f, -0.2f);
glVertex2f(-0.76f, -0.15f);
glVertex2f(-0.77f, -0.15f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(39, 174, 96);
glVertex2f(-0.79f, -0.15f);
glVertex2f(-0.74f, -0.15f);
glVertex2f(-0.765f,-0.09f);
glEnd();
glLoadIdentity();
//..........Road side wall................
glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glVertex2f(1.0f,-0.36f);
glVertex2f(-1.0f,-0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.45f);
glVertex2f(1.0f,-0.45f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.9f,-0.45f);
glVertex2f(-0.9f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.8f,-0.45f);
glVertex2f(-0.8f,-0.36f);
glEnd();
//............
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.7f,-0.45f);
glVertex2f(-0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.6f,-0.45f);
glVertex2f(-0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.5f,-0.45f);
glVertex2f(-0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.4f,-0.45f);
glVertex2f(-0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.3f,-0.45f);
glVertex2f(-0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.2f,-0.45f);
glVertex2f(-0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.1f,-0.45f);
glVertex2f(-0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.0f,-0.45f);
glVertex2f(0.0f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.1f,-0.45f);
glVertex2f(0.1f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.2f,-0.45f);
glVertex2f(0.2f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.3f,-0.45f);
glVertex2f(0.3f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.4f,-0.45f);
glVertex2f(0.4f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.5f,-0.45f);
glVertex2f(0.5f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.6f,-0.45f);
glVertex2f(0.6f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.7f,-0.45f);
glVertex2f(0.7f,-0.36f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.8f,-0.45f);
glVertex2f(0.8f,-0.36f);
glEnd();glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.9f,-0.45f);
glVertex2f(0.9f,-0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(197, 132, 89);
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glVertex2f(1.0f,-0.39f);
glVertex2f(-1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.39f);
glVertex2f(1.0f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-1.0f,-0.42f);
glVertex2f(1.0f,-0.42f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.95f,-0.42f);
glVertex2f(-0.95f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.85f,-0.42f);
glVertex2f(-0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.75f,-0.42f);
glVertex2f(-0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.65f,-0.42f);
glVertex2f(-0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.55f,-0.42f);
glVertex2f(-0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.45f,-0.42f);
glVertex2f(-0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.35f,-0.42f);
glVertex2f(-0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.25f,-0.42f);
glVertex2f(-0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.15f,-0.42f);
glVertex2f(-0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(-0.05f,-0.42f);
glVertex2f(-0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.05f,-0.42f);
glVertex2f(0.05f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.15f,-0.42f);
glVertex2f(0.15f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.25f,-0.42f);
glVertex2f(0.25f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.35f,-0.42f);
glVertex2f(0.35f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.45f,-0.42f);
glVertex2f(0.45f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.55f,-0.42f);
glVertex2f(0.55f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.65f,-0.42f);
glVertex2f(0.65f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.75f,-0.42f);
glVertex2f(0.75f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.85f,-0.42f);
glVertex2f(0.85f,-0.39f);
glEnd();
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );
glVertex2f(0.95f,-0.42f);
glVertex2f(0.95f,-0.39f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.36f);
glVertex2f(1.0f,-0.36f);
glVertex2f(1.0f,-0.345f);
glVertex2f(-1.0f,-0.345f);
glEnd();


glLineWidth(2.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0 );       ///GRILL LINE
glVertex2f(0.98f,-0.3535f);
glVertex2f(0.98f,-0.2f);
glVertex2f(0.94f,-0.3535f);
glVertex2f(0.94f,-0.2f);
glVertex2f(0.9f,-0.3535f);
glVertex2f(0.9f,-0.2f);
glVertex2f(0.86f,-0.3535f);
glVertex2f(0.86f,-0.2f);
glVertex2f(0.82f,-0.3535f);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.78f,-0.3535f);
glVertex2f(0.78f,-0.2f);
glVertex2f(0.74f,-0.3535f);
glVertex2f(0.74f,-0.2f);
glVertex2f(0.7f,-0.3535f);
glVertex2f(0.7f,-0.2f);
glVertex2f(0.66f,-0.3535f);
glVertex2f(0.66f,-0.2f);
glVertex2f(0.62f,-0.3535f);
glVertex2f(0.62f,-0.2f);
glVertex2f(0.58f,-0.3535f);
glVertex2f(0.58f,-0.2f);
glVertex2f(0.54f,-0.3535f);
glVertex2f(0.54f,-0.2f);
glVertex2f(0.5f,-0.3535f);
glVertex2f(0.5f,-0.2f);
glVertex2f(0.46f,-0.3535f);
glVertex2f(0.46f,-0.2f);
glVertex2f(0.42f,-0.3535f);
glVertex2f(0.42f,-0.2f);
glVertex2f(0.38f,-0.3535f);
glVertex2f(0.38f,-0.2f);
glVertex2f(0.34f,-0.3535f);
glVertex2f(0.34f,-0.2f);
glVertex2f(0.3f,-0.3535f);
glVertex2f(0.3f,-0.2f);
glVertex2f(0.26f,-0.3535f);
glVertex2f(0.26f,-0.2f);
glVertex2f(0.22f,-0.3535f);
glVertex2f(0.22f,-0.2f);
glVertex2f(0.18f,-0.3535f);
glVertex2f(0.18f,-0.2f);
glVertex2f(0.14f,-0.3535f);
glVertex2f(0.14f,-0.2f);
glVertex2f(0.1f,-0.3535f);
glVertex2f(0.1f,-0.2f);
glVertex2f(0.06f,-0.3535f);
glVertex2f(0.06f,-0.2f);
glVertex2f(0.02f,-0.3535f);
glVertex2f(0.02f,-0.2f);


glVertex2f(-0.98f,-0.3535f);
glVertex2f(-0.98f,-0.2f);
glVertex2f(-0.94f,-0.3535f);
glVertex2f(-0.94f,-0.2f);
glVertex2f(-0.9f,-0.3535f);
glVertex2f(-0.9f,-0.2f);
glVertex2f(-0.86f,-0.3535f);
glVertex2f(-0.86f,-0.2f);
glVertex2f(-0.82f,-0.3535f);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-0.78f,-0.3535f);
glVertex2f(-0.78f,-0.2f);
glVertex2f(-0.74f,-0.3535f);
glVertex2f(-0.74f,-0.2f);
glVertex2f(-0.7f,-0.3535f);
glVertex2f(-0.7f,-0.2f);
glVertex2f(-0.66f,-0.3535f);
glVertex2f(-0.66f,-0.2f);
glVertex2f(-0.62f,-0.3535f);
glVertex2f(-0.62f,-0.2f);
glVertex2f(-0.58f,-0.3535f);
glVertex2f(-0.58f,-0.2f);
glVertex2f(-0.54f,-0.3535f);
glVertex2f(-0.54f,-0.2f);
glVertex2f(-0.5f,-0.3535f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.46f,-0.3535f);
glVertex2f(-0.46f,-0.2f);
glVertex2f(-0.42f,-0.3535f);
glVertex2f(-0.42f,-0.2f);
glVertex2f(-0.38f,-0.3535f);
glVertex2f(-0.38f,-0.2f);
glVertex2f(-0.34f,-0.3535f);
glVertex2f(-0.34f,-0.2f);
glVertex2f(-0.3f,-0.3535f);
glVertex2f(-0.3f,-0.2f);
glVertex2f(-0.26f,-0.3535f);
glVertex2f(-0.26f,-0.2f);
glVertex2f(-0.22f,-0.3535f);
glVertex2f(-0.22f,-0.2f);
glVertex2f(-0.18f,-0.3535f);
glVertex2f(-0.18f,-0.2f);
glVertex2f(-0.14f,-0.3535f);
glVertex2f(-0.14f,-0.2f);
glVertex2f(-0.1f,-0.3535f);
glVertex2f(-0.1f,-0.2f);
glVertex2f(-0.06f,-0.3535f);
glVertex2f(-0.06f,-0.2f);
glVertex2f(-0.02f,-0.3535f);
glVertex2f(-0.02f,-0.2f);



glVertex2f(-0.98f,-0.33f);  ///LIFT TO RIGHT LINE
glVertex2f(0.98f,-0.33f);
glVertex2f(-0.98f,-0.28f);
glVertex2f(0.98f,-0.28f);
glVertex2f(-0.98f,-0.23f);
glVertex2f(0.98f,-0.23f);
glEnd();



GLfloat u1=-0.94f;               ///Grill lamp 1
GLfloat v1=-0.18f;
GLfloat radius4 =.025f;
int line = 100;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a2 = 0; a2 <= line;a2++) {
glVertex2f(
u1 + (radius4 * cos(a2 * twicePi / line)),
v1 + (radius4 * sin(a2 * twicePi / line))
);
}
glEnd();

GLfloat u2=-0.58f;
GLfloat v2=-0.18f;              ///Grill lamp 2
GLfloat radius5 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a3 = 0; a3 <= line;a3++) {
glVertex2f(
u2 + (radius5 * cos(a3 * twicePi / line)),
v2 + (radius5 * sin(a3 * twicePi / line))
);
}
glEnd();

GLfloat u3=-0.22f;
GLfloat v3=-0.18f;              ///Grill lamp 3
GLfloat radius6 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a4 = 0; a4 <= line;a4++) {
glVertex2f(
u3 + (radius6 * cos(a4 * twicePi / line)),
v3 + (radius6 * sin(a4 * twicePi / line))
);
}
glEnd();


GLfloat u4=0.22f;
GLfloat v4=-0.18f;              ///Grill lamp 4
GLfloat radius7 =.025f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a5 = 0; a5 <= line;a5++) {
glVertex2f(
u4 + (radius7 * cos(a5 * twicePi / line)),
v4 + (radius7 * sin(a5 * twicePi / line))
);
}
glEnd();

GLfloat u5=0.58f;
GLfloat v5=-0.18f;              ///Grill lamp 5
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a6 = 0; a6 <= line;a6++) {
glVertex2f(
u5 + (radius7 * cos(a6 * twicePi / line)),
v5 + (radius7 * sin(a6 * twicePi / line))
);
}
glEnd();

GLfloat u6=0.94f;
GLfloat v6=-0.18f;              ///Grill lamp 6
glBegin(GL_TRIANGLE_FAN);
glColor3ub(240, 243, 244);
for(int a7 = 0; a7 <= line;a7++) {
glVertex2f(
u6 + (radius7 * cos(a7 * twicePi / line)),
v6 + (radius7 * sin(a7 * twicePi / line))
);
}
glEnd();


//........................

GLfloat u7=0.8f;
GLfloat v7=0.8f;              /// SUN
GLfloat radius8 =.1f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(244, 208, 63);
for(int a8 = 0; a8 <= line;a8++) {
glVertex2f(
u7 + (radius8 * cos(a8 * twicePi / line)),
v7 + (radius8 * sin(a8 * twicePi / line))
);
}
glEnd();
//........................................................................................
//Road
glBegin(GL_QUADS);
glColor3ub(127, 140, 141  );
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.55f);
glVertex2f(-1.0f,-0.55f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-0.55f);
glVertex2f(1.0f,-0.55f);
glVertex2f(1.0f,-0.51f);
glVertex2f(-1.0f,-0.51f);
glEnd();

//Road line
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.9f,-0.725f);
glVertex2f(-0.7f,-0.725f);
glVertex2f(-0.7f,-0.715f);
glVertex2f(-0.9f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.5f,-0.725f);
glVertex2f(-0.3f,-0.725f);
glVertex2f(-0.3f,-0.715f);
glVertex2f(-0.5f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(-0.1f,-0.725f);
glVertex2f(0.1f,-0.725f);
glVertex2f(0.1f,-0.715f);
glVertex2f(-0.1f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.3f,-0.725f);
glVertex2f(0.5f,-0.725f);
glVertex2f(0.5f,-0.715f);
glVertex2f(0.3f,-0.715f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 255, 255 );
glVertex2f(0.7f,-0.725f);
glVertex2f(0.9f,-0.725f);
glVertex2f(0.9f,-0.715f);
glVertex2f(0.7f,-0.715f);
glEnd();
//.......................................................
///Car 1
glPushMatrix();
GLfloat u=-0.68f;
GLfloat v=-0.54f;
GLfloat z=-0.53f;
GLfloat radius3 =.031f; //for car

glTranslatef(-positionBD4,-0.28,0);
glBegin(GL_QUADS);///Body
glColor3ub(187,64,24);
glVertex2f(-0.73f,-0.54f);
glVertex2f(-0.47f, -0.54f);
glVertex2f(-0.47f, -0.46f);
glVertex2f(-0.73f, -0.46f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(187,64,24);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.5f, -0.46f);
glVertex2f(-0.55f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.61f, -0.46f);
glVertex2f(-0.61f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.55f, -0.46f);
glVertex2f(-0.55f, -0.4f);
glVertex2f(-0.59f, -0.4f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();
//.......................................................
///car2

glPushMatrix();

glTranslatef(positionBD4,-0.08,0);
glBegin(GL_QUADS);///Body
glColor3ub(165, 105, 189);
glVertex2f(-0.73f,-0.54f);
glVertex2f(-0.47f, -0.54f);
glVertex2f(-0.47f, -0.46f);
glVertex2f(-0.73f, -0.46f);
glEnd();
glBegin(GL_POLYGON);///Body
glColor3ub(165, 105, 189);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.5f, -0.46f);
glVertex2f(-0.55f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.61f, -0.46f);
glVertex2f(-0.61f, -0.4f);
glVertex2f(-0.65f, -0.4f);
glEnd();
glBegin(GL_QUADS);///Window
glColor3ub(0,0,0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.55f, -0.46f);
glVertex2f(-0.55f, -0.4f);
glVertex2f(-0.59f, -0.4f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 1
for(int a1 = 0; a1 <= line;a1++) {
glVertex2f(
u + (radius2 * cos(a1 * twicePi / line)),
v + (radius2 * sin(a1 * twicePi / line))
);
}
glEnd();



glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0); //left car tire 2
for(int b1 = 0; b1 <= line;b1++) {
glVertex2f(
z + (radius2 * cos(b1 * twicePi / line)),
v + (radius2 * sin(b1 * twicePi / line))
);
}
glEnd();
glPopMatrix();


///::::::::::::::::::::::::::::::::::::::::::::
glBegin(GL_QUADS);
glColor3ub(141, 111, 91);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.96f);
glVertex2f(-1.0f,-0.96f);
glEnd();
//.................................

glutTimerFunc(10000, evening_demo, 0);
glFlush();
}




void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
//.................sound........

case '1':

glLoadIdentity();

         sound();
         glutPostRedisplay();

    break;

case '2':

sound2();
         glutPostRedisplay();
    break;


    case '3':

sound3();
         glutPostRedisplay();
    break;

	}
}



 void display()
{
    glutDisplayFunc(day);
    //sound();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Songsod bhaban road ");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutKeyboardFunc(handleKeypress);
    glutTimerFunc(2000, update, 0);
	glutMainLoop();
	return 0;
}

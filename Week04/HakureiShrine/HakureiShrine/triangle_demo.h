#ifndef _TRIANGLE_DEMO_H
#define _TRIANGLE_DEMO_H

#include "demo_base.h"
#include "iostream"
using namespace std;

#define DEF_D 5
class TriangleDemo : public DemoBase
{
public:
	void init()
	{
	}

	void deinit()
	{
	}

	void drawAxis(const Matrix& viewMatrix)
	{
	// ============draw axis.
		glLoadMatrixf((GLfloat*)viewMatrix.mVal);
		glBegin(GL_LINES);
			glColor3f(1.0f, 0.3f, 0.3f);
			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 0.0f, 0.0f);

			glColor3f(0.3f, 1.0f, 0.3f);
			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.0f, 1.0f, 0.0f);

			glColor3f(0.3f, 0.3f, 1.0f);
			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(0.0f, 0.0f, 1.0f);
		glEnd();
		// ============================
	}

	void drawCube(float size,float red,float green,float blue)
	{
		glBegin(GL_TRIANGLES);							
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(size,size,size);

				glColor3f(red,green,blue);  glVertex3f(-size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,size,-size);

				glColor3f(red,green,blue);  glVertex3f(size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,size,-size);

				glColor3f(red,green,blue);  glVertex3f(size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,-size);

				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,-size);

				glColor3f(red,green,blue);  glVertex3f(-size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
		glEnd();											
	}

	void drawPyramid(float size,float red,float green,float blue)
	{
		glBegin(GL_TRIANGLES);							
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,size,-size);

				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);

				glColor3f(red,green,blue);  glVertex3f(size,size,-size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);

				glColor3f(red,green,blue);  glVertex3f(-size,-size,-size);
				glColor3f(red,green,blue);  glVertex3f(-size,size,size);
				glColor3f(red,green,blue);  glVertex3f(size,-size,size);
		glEnd();											
	}

	void drawRectangle(float x,float y,float z,float red,float green,float blue)
	{
		glBegin(GL_TRIANGLES);		
				glColor3f(red,green,blue);  glVertex3f(-x,y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(x,y,z);

				glColor3f(red,green,blue);  glVertex3f(-x,y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,y,z);
				glColor3f(red,green,blue);  glVertex3f(x,y,-z);

				glColor3f(red,green,blue);  glVertex3f(x,y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(x,y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,y,-z);

				glColor3f(red,green,blue);  glVertex3f(x,y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,-z);

				glColor3f(red,green,blue);  glVertex3f(-x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,z);
				glColor3f(red,green,blue);  glVertex3f(-x,y,-z);

				glColor3f(red,green,blue);  glVertex3f(-x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(-x,-y,z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,-z);
				glColor3f(red,green,blue);  glVertex3f(x,-y,z);
			glEnd();
	}
	void drawSurface(float x1,float y1,float z1,float x2,float y2,float z2,float x3,float y3,float z3,float x4,float y4,float z4,float red,float green,float blue)
	{
		glBegin(GL_TRIANGLES);
				glColor3f(red,green,blue);  glVertex3f(x1,y1,z1);
				glColor3f(red,green,blue);  glVertex3f(x2,y2,z2);
				glColor3f(red,green,blue);  glVertex3f(x3,y3,z3);
				glColor3f(red,green,blue);  glVertex3f(x4,y4,z4);
				glColor3f(red,green,blue);  glVertex3f(x2,y2,z2);
				glColor3f(red,green,blue);  glVertex3f(x3,y3,z3);
		glEnd();
	}
	void drawTriangle(float x1,float y1,float z1,float x2,float y2,float z2,float x3,float y3,float z3,float red,float green,float blue)
	{
		glBegin(GL_TRIANGLES);
				glColor3f(red,green,blue);  glVertex3f(x1,y1,z1);
				glColor3f(red,green,blue);  glVertex3f(x2,y2,z2);
				glColor3f(red,green,blue);  glVertex3f(x3,y3,z3);
		glEnd();
	}
	void drawCone(float h,float r,float x,float y,float z,float red,float green,float blue)
	{

			glBegin(GL_TRIANGLES);

			for(int i=0.0f; i<360; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f(0+x,h+y,0+z);
				glVertex3f((cosf(i)*+r)+x, 0+y, (sinf(i)*-r)+z);
				glVertex3f((cosf(i)*-r)+x, 0+y, (sinf(i)*-r)+z);
			}
			glEnd();
			
			glRotated(180,1,0,0);
			glBegin(GL_TRIANGLE_FAN);
			//glVertex3f(0,j,0);
			for(int i=0; i<=360 ; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f((cosf(i)*-r)+x, 0-y, (sinf(i)*-r)-z);
			}

			glEnd();
			
	}
	void drawSemiCone(float h,float rTop,float rBottom,float x,float y,float z,float red,float green,float blue)
	{

			glBegin(GL_QUAD_STRIP);

			for(int i=0; i<360 ; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f(cosf(i)*rTop+x, h-y, sinf(i)*rTop-z);
				glVertex3f(cosf(i)*rBottom+x, -h-y, sinf(i)*rBottom-z);
			}

			glEnd();

			glBegin(GL_TRIANGLE_FAN);
			//glVertex3f(0,j,0);
			for(int i=0; i<=360 ; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f(cosf(i)*rTop+x, h-y, sinf(i)*rTop-z);
			}

			glEnd();

			glBegin(GL_TRIANGLE_FAN);

			for(int i=0; i<=360 ; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f(cosf(i)*rBottom+x, -h-y, sinf(i)*rBottom-z);
			}
			glEnd();
	}
	void drawHalfSphere(float r,float x,float y,float z,float red,float green,float blue)
	{
		for(int j=0;j<180;j++)
		{
			glRotated(1,1,0,0);
			glBegin(GL_TRIANGLE_FAN);
			//glVertex3f(0,j,0);
			for(int i=0; i<180 ; i++)
			{
				glColor3f(red,green,blue);
				glVertex3f((cosf(i)*-r+x), 0, abs((sinf(i)*-r-z)));
			}

			glEnd();
		}
	}
	void drawSolidSphere(GLdouble radius, GLint slices, GLint stacks)
	{
		GLUquadric *shape = gluNewQuadric();
		gluQuadricDrawStyle(shape, GLU_FILL);
		gluQuadricNormals(shape, GLU_SMOOTH);
		gluSphere(shape, radius, slices, stacks);
	}
	void draw(const Matrix& viewMatrix)
	{
		static float rotation = 0.0f;
		static int year = 0, day = 0;
		static float x = 0.0f;
		static float pendulum = 0.0f;
		static float pendulum2 = 0.0f;
		static bool pendulumClockwise = true;
		static bool pendulumClockwise2 = true;
		static float pendulumScale = 0.1f;
		static float pendulumScale2 = 0.1f;
		pendulumScale = (16.0f - abs(pendulum))/10;
		if(pendulumScale>-0.1f&&pendulumScale<0.1f)
		{
				pendulumScale=0.1f;
		}
		pendulumScale2 = (16.0f - abs(pendulum2))/5;
		if(pendulumScale2>-0.2f&&pendulumScale2<0.2f)
		{
				pendulumScale2=0.2f;
		}
		pendulum = pendulum + (pendulumClockwise ? pendulumScale : -pendulumScale);
		pendulum2 = pendulum2 + (pendulumClockwise2 ? pendulumScale2 : -pendulumScale2);
		if(pendulum >15.0f||pendulum<-15.0f)
		{
			pendulumClockwise=!pendulumClockwise;
		}
		if(pendulum2 >15.0f||pendulum2<-15.0f)
		{
			pendulumClockwise2=!pendulumClockwise2;
		}
		x +=0.005f;
		rotation +=0.1f;
		//drawAxis(viewMatrix);

		glLoadMatrixf((GLfloat*)viewMatrix.mVal);
		Matrix viewSpaceMatrix;
		Matrix modelMatrix;
		Matrix translate;
		Matrix rotate;
		Matrix rotateAngle;
		Matrix rotateAngle2;
	
		/*Matrix translate1 = Matrix::makeTranslationMatrix(-2.0f,-2.0f,-2.0f);
		modelMatrix = translate1;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawCube();

		Matrix translate2 = Matrix::makeTranslationMatrix(2.0f,2.0f,2.0f);
		Matrix rotate2 = Matrix::makeRotateMatrix(45,Vector(1.0f,0.0f,0.0f));
		modelMatrix = translate2 * rotate2;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawCube();

		Matrix translate3 = Matrix::makeTranslationMatrix(6.0f,6.0f,6.0f);
		Matrix scale3 = Matrix::makeScaleMatrix(1.0f,0.5f,1.5f);
		modelMatrix = translate3 * scale3;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawCube();*/

		//drawRectangle(1.5f,1.0f,0.5f,0.0f,1.0f,1.0f);

		//Matrix translate = Matrix::makeTranslationMatrix(0.0f,0.0f,0.0f);
		//modelMatrix = translate;
		//viewSpaceMatrix = viewMatrix * modelMatrix;
		//glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		//drawCube(50.0f,1.0f,1.0f,1.0f);
		translate = Matrix::makeTranslationMatrix(0.0f,0.0f,0.0f);
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		//floor
		drawSurface(8.00f,-03.00f,05.00f,8.00f,-03.00f,-3.00f,-08.00f,-03.00f,05.00f,-08.00f,-03.00f,-3.00f,00.35f,00.35f,00.35f);

		//darkbasefloor
		drawTriangle(-03.00f,-03.00f,01.00f,-02.50f,-03.00f,01.00f,-02.25f,-03.00f,00.75f,00.20f,00.20f,00.20f);
		drawTriangle(-02.25f,-03.00f,00.75f,-02.25f,-03.00f,00.25f,-02.50f,-03.00f,00.00f,00.20f,00.20f,00.20f);
		drawTriangle(-02.50f,-03.00f,00.00f,-03.00f,-03.00f,00.00f,-03.25f,-03.00f,00.25f,00.20f,00.20f,00.20f);
		drawTriangle(-03.25f,-03.00f,00.25f,-03.25f,-03.00f,00.75f,-03.00f,-03.00f,01.00f,00.20f,00.20f,00.20f);
		drawTriangle(-03.00f,-03.00f,01.00f,-02.25f,-03.00f,00.75f,-02.50f,-03.00f,00.00f,00.20f,00.20f,00.20f);
		drawTriangle(-02.50f,-03.00f,00.00f,-03.25f,-03.00f,00.25f,-03.00f,-03.00f,01.00f,00.20f,00.20f,00.20f);

		//darkbase
		drawSurface(-03.00f,-03.00f,01.00f,-02.50f,-03.00f,01.00f,-03.00f,-02.80f,01.00f,-02.50f,-02.80f,01.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,01.00f,-03.25f,-03.00f,00.75f,-03.00f,-02.80f,01.00f,-03.25f,-02.80f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.75f,-03.25f,-03.00f,00.25f,-03.25f,-02.80f,00.75f,-03.25f,-02.80f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.25f,-03.00f,-03.00f,00.00f,-03.25f,-02.80f,00.25f,-03.00f,-02.80f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,00.00f,-02.50f,-03.00f,00.00f,-03.00f,-02.80f,00.00f,-02.50f,-02.80f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-02.50f,-03.00f,00.00f,-02.25f,-03.00f,00.25f,-02.50f,-02.80f,00.00f,-02.25f,-02.80f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.25f,-02.25f,-03.00f,00.75f,-02.25f,-02.80f,00.25f,-02.25f,-02.80f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.75f,-02.50f,-03.00f,01.00f,-02.25f,-02.80f,00.75f,-02.50f,-02.80f,01.00f,00.20f,00.20f,00.20f);

		//medbase
		drawSurface(-03.00f,-02.80f,01.00f,-02.50f,-02.80f,01.00f,-03.00f,-02.00f,01.00f,-02.50f,-02.00f,01.00f,00.35f,00.35f,00.35f);
		drawSurface(-03.00f,-02.80f,01.00f,-03.25f,-02.80f,00.75f,-03.00f,-02.00f,01.00f,-03.25f,-02.00f,00.75f,00.35f,00.35f,00.35f);
		drawSurface(-03.25f,-02.80f,00.75f,-03.25f,-02.80f,00.25f,-03.25f,-02.00f,00.75f,-03.25f,-02.00f,00.25f,00.35f,00.35f,00.35f);
		drawSurface(-03.25f,-02.80f,00.25f,-03.00f,-02.80f,00.00f,-03.25f,-02.00f,00.25f,-03.00f,-02.00f,00.00f,00.35f,00.35f,00.35f);
		drawSurface(-03.00f,-02.80f,00.00f,-02.50f,-02.80f,00.00f,-03.00f,-02.00f,00.00f,-02.50f,-02.00f,00.00f,00.35f,00.35f,00.35f);
		drawSurface(-02.50f,-02.80f,00.00f,-02.25f,-02.80f,00.25f,-02.50f,-02.00f,00.00f,-02.25f,-02.00f,00.25f,00.35f,00.35f,00.35f);
		drawSurface(-02.25f,-02.80f,00.25f,-02.25f,-02.80f,00.75f,-02.25f,-02.00f,00.25f,-02.25f,-02.00f,00.75f,00.35f,00.35f,00.35f);
		drawSurface(-02.25f,-02.80f,00.75f,-02.50f,-02.80f,01.00f,-02.25f,-02.00f,00.75f,-02.50f,-02.00f,01.00f,00.35f,00.35f,00.35f);

		//lightbase
		drawSurface(-03.00f,-02.00f,01.00f,-02.50f,-02.00f,01.00f,-02.90f,-01.75f,00.90f,-02.60f,-01.75f,00.90f,00.40f,00.40f,00.40f);
		drawSurface(-03.00f,-02.00f,01.00f,-03.25f,-02.00f,00.75f,-02.90f,-01.75f,00.90f,-03.15f,-01.75f,00.65f,00.40f,00.40f,00.40f);
		drawSurface(-03.25f,-02.00f,00.75f,-03.25f,-02.00f,00.25f,-03.15f,-01.75f,00.65f,-03.15f,-01.75f,00.35f,00.40f,00.40f,00.40f);
		drawSurface(-03.25f,-02.00f,00.25f,-03.00f,-02.00f,00.00f,-03.15f,-01.75f,00.35f,-02.90f,-01.75f,00.10f,00.40f,00.40f,00.40f);
		drawSurface(-03.00f,-02.00f,00.00f,-02.50f,-02.00f,00.00f,-02.90f,-01.75f,00.10f,-02.60f,-01.75f,00.10f,00.40f,00.40f,00.40f);
		drawSurface(-02.50f,-02.00f,00.00f,-02.25f,-02.00f,00.25f,-02.60f,-01.75f,00.10f,-02.35f,-01.75f,00.35f,00.40f,00.40f,00.40f);
		drawSurface(-02.25f,-02.00f,00.25f,-02.25f,-02.00f,00.75f,-02.35f,-01.75f,00.35f,-02.35f,-01.75f,00.65f,00.40f,00.40f,00.40f);
		drawSurface(-02.25f,-02.00f,00.75f,-02.50f,-02.00f,01.00f,-02.35f,-01.75f,00.65f,-02.60f,-01.75f,00.90f,00.40f,00.40f,00.40f);

		//pillar
		drawSurface(-02.90f,-02.00f,00.90f,-02.60f,-02.00f,00.90f,-02.90f,+05.50f,00.90f,-02.60f,+05.50f,00.90f,00.50f,00.30f,00.30f);
		drawSurface(-02.90f,-02.00f,00.90f,-03.15f,-02.00f,00.65f,-02.90f,+05.50f,00.90f,-03.15f,+05.50f,00.65f,00.50f,00.30f,00.30f);
		drawSurface(-03.15f,-02.00f,00.65f,-03.15f,-02.00f,00.35f,-03.15f,+05.50f,00.65f,-03.15f,+05.50f,00.35f,00.50f,00.30f,00.30f);
		drawSurface(-03.15f,-02.00f,00.35f,-02.90f,-02.00f,00.10f,-03.15f,+05.50f,00.35f,-02.90f,+05.50f,00.10f,00.50f,00.30f,00.30f);
		drawSurface(-02.90f,-02.00f,00.10f,-02.60f,-02.00f,00.10f,-02.90f,+05.50f,00.10f,-02.60f,+05.50f,00.10f,00.50f,00.30f,00.30f);
		drawSurface(-02.60f,-02.00f,00.10f,-02.35f,-02.00f,00.35f,-02.60f,+05.50f,00.10f,-02.35f,+05.50f,00.35f,00.50f,00.30f,00.30f);
		drawSurface(-02.35f,-02.00f,00.35f,-02.35f,-02.00f,00.65f,-02.35f,+05.50f,00.35f,-02.35f,+05.50f,00.65f,00.50f,00.30f,00.30f);
		drawSurface(-02.35f,-02.00f,00.65f,-02.60f,-02.00f,00.90f,-02.35f,+05.50f,00.65f,-02.60f,+05.50f,00.90f,00.50f,00.30f,00.30f);

		//fatpillar
		drawSurface(-03.00f,+05.50f,01.00f,-02.50f,+05.50f,01.00f,-03.00f,+06.00f,01.00f,-02.50f,+06.00f,01.00f,00.55f,00.35f,00.35f);
		drawSurface(-03.00f,+05.50f,01.00f,-03.25f,+05.50f,00.75f,-03.00f,+06.00f,01.00f,-03.25f,+06.00f,00.75f,00.55f,00.35f,00.35f);
		drawSurface(-03.25f,+05.50f,00.75f,-03.25f,+05.50f,00.25f,-03.25f,+06.00f,00.75f,-03.25f,+06.00f,00.25f,00.55f,00.35f,00.35f);
		drawSurface(-03.25f,+05.50f,00.25f,-03.00f,+05.50f,00.00f,-03.25f,+06.00f,00.25f,-03.00f,+06.00f,00.00f,00.55f,00.35f,00.35f);
		drawSurface(-03.00f,+05.50f,00.00f,-02.50f,+05.50f,00.00f,-03.00f,+06.00f,00.00f,-02.50f,+06.00f,00.00f,00.55f,00.35f,00.35f);
		drawSurface(-02.50f,+05.50f,00.00f,-02.25f,+05.50f,00.25f,-02.50f,+06.00f,00.00f,-02.25f,+06.00f,00.25f,00.55f,00.35f,00.35f);
		drawSurface(-02.25f,+05.50f,00.25f,-02.25f,+05.50f,00.75f,-02.25f,+06.00f,00.25f,-02.25f,+06.00f,00.75f,00.55f,00.35f,00.35f);
		drawSurface(-02.25f,+05.50f,00.75f,-02.50f,+05.50f,01.00f,-02.25f,+06.00f,00.75f,-02.50f,+06.00f,01.00f,00.55f,00.35f,00.35f);

		//fatpillarfloor
		drawTriangle(-03.00f,+05.50f,01.00f,-02.50f,+05.50f,01.00f,-02.25f,+05.50f,00.75f,00.55f,00.35f,00.35f);
		drawTriangle(-02.25f,+05.50f,00.75f,-02.25f,+05.50f,00.25f,-02.50f,+05.50f,00.00f,00.55f,00.35f,00.35f);
		drawTriangle(-02.50f,+05.50f,00.00f,-03.00f,+05.50f,00.00f,-03.25f,+05.50f,00.25f,00.55f,00.35f,00.35f);
		drawTriangle(-03.25f,+05.50f,00.25f,-03.25f,+05.50f,00.75f,-03.00f,+05.50f,01.00f,00.55f,00.35f,00.35f);
		drawTriangle(-03.00f,+05.50f,01.00f,-02.25f,+05.50f,00.75f,-02.50f,+05.50f,00.00f,00.55f,00.35f,00.35f);
		drawTriangle(-02.50f,+05.50f,00.00f,-03.25f,+05.50f,00.25f,-03.00f,+05.50f,01.00f,00.55f,00.35f,00.35f);

		//longstick
		drawSurface(-04.00f,+03.00f,00.80f,+04.00f,+03.00f,00.80f,-04.00f,+04.00f,00.80f,+04.00f,+04.00f,00.80f,00.55f,00.35f,00.35f);
		drawSurface(-04.00f,+03.00f,00.20f,+04.00f,+03.00f,00.20f,-04.00f,+04.00f,00.20f,+04.00f,+04.00f,00.20f,00.55f,00.35f,00.35f);
		drawSurface(-04.00f,+03.00f,00.20f,-04.00f,+03.00f,00.80f,-04.00f,+04.00f,00.20f,-04.00f,+04.00f,00.80f,00.55f,00.35f,00.35f);
		drawSurface(+04.00f,+03.00f,00.20f,+04.00f,+03.00f,00.80f,+04.00f,+04.00f,00.20f,+04.00f,+04.00f,00.80f,00.55f,00.35f,00.35f);
		drawSurface(-04.00f,+03.00f,00.20f,-04.00f,+03.00f,00.80f,+04.00f,+03.00f,00.20f,+04.00f,+03.00f,00.80f,00.55f,00.35f,00.35f);
		drawSurface(-04.00f,+04.00f,00.20f,-04.00f,+04.00f,00.80f,+04.00f,+04.00f,00.20f,+04.00f,+04.00f,00.80f,00.55f,00.35f,00.35f);

		//wedge
		drawSurface(-02.75f,+04.00f,00.80f,-03.50f,+04.00f,00.80f,-03.50f,+04.25f,00.80f,-03.50f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-03.50f,+04.00f,00.20f,-03.50f,+04.00f,00.80f,-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.75f,+04.00f,00.20f,-03.50f,+04.00f,00.20f,-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.20f,00.60f,00.30f,00.30f);
		drawSurface(-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.80f,-02.75f,+04.00f,00.20f,-02.75f,+04.00f,00.80f,00.60f,00.30f,00.30f);

		//wedge2
		drawSurface(-02.75f,+04.00f,00.80f,-02.00f,+04.00f,00.80f,-02.00f,+04.25f,00.80f,-02.00f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.00f,+04.00f,00.20f,-02.00f,+04.00f,00.80f,-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.75f,+04.00f,00.20f,-02.00f,+04.00f,00.20f,-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.20f,00.60f,00.30f,00.30f);
		drawSurface(-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.80f,-02.75f,+04.00f,00.20f,-02.75f,+04.00f,00.80f,00.60f,00.30f,00.30f);

		//box
		drawSurface(-00.50f,+04.00f,00.70f,+00.50f,+04.00f,00.70f,-00.50f,+06.00f,00.70f,+00.50f,+06.00f,00.70f,00.65f,00.60f,00.40f);
		drawSurface(-00.50f,+04.00f,00.30f,+00.50f,+04.00f,00.30f,-00.50f,+06.00f,00.30f,+00.50f,+06.00f,00.30f,00.65f,00.60f,00.40f);
		drawSurface(-00.50f,+04.00f,00.30f,-00.50f,+04.00f,00.70f,-00.50f,+06.00f,00.30f,-00.50f,+06.00f,00.70f,00.65f,00.60f,00.40f);
		drawSurface(+00.50f,+04.00f,00.30f,+00.50f,+04.00f,00.70f,+00.50f,+06.00f,00.30f,+00.50f,+06.00f,00.70f,00.65f,00.60f,00.40f);
		drawSurface(-00.50f,+04.00f,00.30f,-00.50f,+04.00f,00.70f,+00.50f,+04.00f,00.30f,+00.50f,+04.00f,00.70f,00.65f,00.60f,00.40f);
		drawSurface(-00.50f,+04.00f,00.30f,-00.50f,+04.00f,00.70f,+00.50f,+04.00f,00.30f,+00.50f,+04.00f,00.70f,00.65f,00.60f,00.40f);

		drawSurface(-00.70f,+04.00f,00.80f,-00.40f,+04.00f,00.80f,-00.70f,+06.00f,00.80f,-00.40f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.70f,+04.00f,00.20f,-00.40f,+04.00f,00.20f,-00.70f,+06.00f,00.20f,-00.40f,+06.00f,00.20f,00.65f,00.60f,00.20f);
		drawSurface(-00.70f,+04.00f,00.20f,-00.70f,+04.00f,00.80f,-00.70f,+06.00f,00.20f,-00.70f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.40f,+04.00f,00.20f,-00.40f,+04.00f,00.80f,-00.40f,+06.00f,00.20f,-00.40f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.70f,+04.00f,00.20f,-00.70f,+04.00f,00.80f,-00.40f,+04.00f,00.20f,-00.40f,+04.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.70f,+04.00f,00.20f,-00.70f,+04.00f,00.80f,-00.40f,+04.00f,00.20f,-00.40f,+04.00f,00.80f,00.65f,00.60f,00.20f);

		drawSurface(-00.50f,+04.00f,00.80f,+00.50f,+04.00f,00.80f,-00.50f,+04.30f,00.80f,+00.50f,+04.30f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+04.00f,00.20f,+00.50f,+04.00f,00.20f,-00.50f,+04.30f,00.20f,+00.50f,+04.30f,00.20f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+04.00f,00.20f,-00.50f,+04.00f,00.80f,-00.50f,+04.30f,00.20f,-00.50f,+04.30f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.50f,+04.00f,00.20f,+00.50f,+04.00f,00.80f,+00.50f,+04.30f,00.20f,+00.50f,+04.30f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+04.00f,00.20f,-00.50f,+04.00f,00.80f,+00.50f,+04.00f,00.20f,+00.50f,+04.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+04.00f,00.20f,-00.50f,+04.00f,00.80f,+00.50f,+04.00f,00.20f,+00.50f,+04.00f,00.80f,00.65f,00.60f,00.20f);

		drawSurface(-00.50f,+05.70f,00.80f,+00.50f,+05.70f,00.80f,-00.50f,+06.00f,00.80f,+00.50f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+05.70f,00.20f,+00.50f,+05.70f,00.20f,-00.50f,+06.00f,00.20f,+00.50f,+06.00f,00.20f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+05.70f,00.20f,-00.50f,+05.70f,00.80f,-00.50f,+06.00f,00.20f,-00.50f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.50f,+05.70f,00.20f,+00.50f,+05.70f,00.80f,+00.50f,+06.00f,00.20f,+00.50f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+05.70f,00.20f,-00.50f,+05.70f,00.80f,+00.50f,+05.70f,00.20f,+00.50f,+05.70f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(-00.50f,+05.70f,00.20f,-00.50f,+05.70f,00.80f,+00.50f,+05.70f,00.20f,+00.50f,+05.70f,00.80f,00.65f,00.60f,00.20f);

		drawSurface(+00.40f,+04.00f,00.80f,+00.70f,+04.00f,00.80f,+00.40f,+06.00f,00.80f,+00.70f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.40f,+04.00f,00.20f,+00.70f,+04.00f,00.20f,+00.40f,+06.00f,00.20f,+00.70f,+06.00f,00.20f,00.65f,00.60f,00.20f);
		drawSurface(+00.40f,+04.00f,00.20f,+00.40f,+04.00f,00.80f,+00.40f,+06.00f,00.20f,+00.40f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.70f,+04.00f,00.20f,+00.70f,+04.00f,00.80f,+00.70f,+06.00f,00.20f,+00.70f,+06.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.70f,+04.00f,00.20f,+00.40f,+04.00f,00.80f,+00.70f,+04.00f,00.20f,+00.70f,+04.00f,00.80f,00.65f,00.60f,00.20f);
		drawSurface(+00.40f,+04.00f,00.20f,+00.40f,+04.00f,00.80f,+00.70f,+04.00f,00.20f,+00.70f,+04.00f,00.80f,00.65f,00.60f,00.20f);

		//text
		drawSurface(-00.38f,+05.55f,00.71f,-00.12f,+05.55f,00.71f,-00.38f,+05.50f,00.71f,-00.12f,+05.50f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.25f,+05.68f,00.71f,-00.20f,+05.68f,00.71f,-00.25f,+05.10f,00.71f,-00.20f,+05.10f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.12f,+05.66f,00.71f,+00.38f,+05.66f,00.71f,-00.12f,+05.61f,00.71f,+00.38f,+05.61f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.23f,+05.70f,00.71f,+00.31f,+05.70f,00.71f,+00.23f,+05.665f,00.71f,+00.31f,+05.665f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.10f,+05.69f,00.71f,+00.15f,+05.69f,00.71f,+00.10f,+05.35f,00.71f,+00.15f,+05.35f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.07f,+05.60f,00.71f,+00.35f,+05.60f,00.71f,+00.05f,+05.55f,00.71f,+00.35f,+05.55f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.30f,+05.60f,00.71f,+00.35f,+05.60f,00.71f,+00.30f,+05.35f,00.71f,+00.35f,+05.35f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.03f,+05.58f,00.71f,+00.07f,+05.56f,00.71f,-00.02f,+05.57f,00.71f,+00.07f,+05.55f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.05f,+05.60f,00.71f,+00.00f,+05.57f,00.71f,-00.08f,+05.38f,00.71f,-00.03f,+05.35f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.08f,+05.35f,00.71f,+00.35f,+05.35f,00.71f,-00.08f,+05.40f,00.71f,+00.35f,+05.40f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.02f,+05.45f,00.71f,+00.25f,+05.45f,00.71f,+00.02f,+05.50f,00.71f,+00.25f,+05.50f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.14f,+05.32f,00.71f,+00.38f,+05.32f,00.71f,-00.14f,+05.27f,00.71f,+00.38f,+05.27f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.19f,+05.35f,00.71f,+00.24f,+05.35f,00.71f,+00.19f,+05.15f,00.71f,+00.24f,+05.15f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.19f,+05.20f,00.71f,+00.24f,+05.15f,00.71f,+00.14f,+05.15f,00.71f,+00.20f,+05.10f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.01f,+05.27f,00.71f,+00.08f,+05.20f,00.71f,-00.02f,+05.24f,00.71f,+00.05f,+05.16f,00.71f,00.00f,00.00f,00.00f);

		drawSurface(-00.33f,+04.95f,00.71f,-00.03f,+04.95f,00.71f,-00.33f,+04.90f,00.71f,-00.03f,+04.90f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.33f,+04.95f,00.71f,+00.03f,+04.95f,00.71f,+00.33f,+04.90f,00.71f,+00.03f,+04.90f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.31f,+04.88f,00.71f,-00.03f,+04.88f,00.71f,-00.31f,+04.83f,00.71f,-00.03f,+04.83f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.31f,+04.88f,00.71f,+00.03f,+04.88f,00.71f,+00.31f,+04.83f,00.71f,+00.03f,+04.83f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.31f,+04.83f,00.71f,-00.26f,+04.83f,00.71f,-00.31f,+04.76f,00.71f,-00.26f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.31f,+04.83f,00.71f,+00.26f,+04.83f,00.71f,+00.31f,+04.76f,00.71f,+00.26f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.08f,+04.83f,00.71f,-00.03f,+04.83f,00.71f,-00.08f,+04.76f,00.71f,-00.03f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.08f,+04.83f,00.71f,+00.03f,+04.83f,00.71f,+00.08f,+04.76f,00.71f,+00.03f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.20f,+04.81f,00.71f,-00.15f,+04.81f,00.71f,-00.20f,+04.76f,00.71f,-00.15f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.20f,+04.81f,00.71f,+00.15f,+04.81f,00.71f,+00.20f,+04.76f,00.71f,+00.15f,+04.76f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.33f,+04.72f,00.71f,+00.35f,+04.72f,00.71f,-00.33f,+04.67f,00.71f,+00.35f,+04.67f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.02f,+04.75f,00.71f,+00.02f,+04.75f,00.71f,-00.05f,+04.67f,00.71f,+00.05f,+04.67f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.34f,+04.72f,00.71f,-00.16f,+04.72f,00.71f,-00.36f,+04.67f,00.71f,-00.32f,+04.64f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.34f,+04.62f,00.71f,-00.28f,+04.60f,00.71f,-00.36f,+04.40f,00.71f,-00.32f,+04.40f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.35f,+04.45f,00.71f,-00.32f,+04.40f,00.71f,-00.39f,+04.41f,00.71f,-00.36f,+04.36f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.25f,+04.64f,00.71f,-00.03f,+04.64f,00.71f,-00.25f,+04.60f,00.71f,-00.03f,+04.60f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.30f,+04.64f,00.71f,+00.03f,+04.64f,00.71f,+00.30f,+04.60f,00.71f,+00.03f,+04.60f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.10f,+04.70f,00.71f,-00.05f,+04.70f,00.71f,-00.10f,+04.55f,00.71f,-00.05f,+04.55f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.11f,+04.70f,00.71f,+00.06f,+04.70f,00.71f,+00.11f,+04.55f,00.71f,+00.06f,+04.55f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.30f,+04.64f,00.71f,+00.25f,+04.64f,00.71f,+00.30f,+04.55f,00.71f,+00.25f,+04.55f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.28f,+04.57f,00.71f,+00.30f,+04.57f,00.71f,-00.28f,+04.52f,00.71f,+00.30f,+04.52f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.17f,+04.49f,00.71f,-00.02f,+04.49f,00.71f,-00.17f,+04.46f,00.71f,-00.02f,+04.46f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.17f,+04.52f,00.71f,-00.12f,+04.52f,00.71f,-00.17f,+04.39f,00.71f,-00.12f,+04.39f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.21f,+04.36f,00.71f,+00.02f,+04.39f,00.71f,-00.23f,+04.39f,00.71f,+00.02f,+04.41f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(-00.21f,+04.36f,00.71f,-00.12f,+04.39f,00.71f,-00.23f,+04.39f,00.71f,-00.12f,+04.43f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.12f,+04.49f,00.71f,+00.31f,+04.50f,00.71f,+00.12f,+04.46f,00.71f,+00.31f,+04.46f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.14f,+04.52f,00.71f,+00.09f,+04.52f,00.71f,+00.14f,+04.39f,00.71f,+00.09f,+04.39f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.34f,+04.39f,00.71f,+00.09f,+04.39f,00.71f,+00.34f,+04.36f,00.71f,+00.09f,+04.36f,00.71f,00.00f,00.00f,00.00f);
		drawSurface(+00.30f,+04.36f,00.71f,+00.34f,+04.36f,00.71f,+00.37f,+04.46f,00.71f,+00.35f,+04.36f,00.71f,00.00f,00.00f,00.00f);

		//redhorn
		drawSurface(-04.00f,+06.00f,00.80f,+04.00f,+06.00f,00.80f,-05.10f,+07.00f,00.80f,+05.10f,+07.00f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-04.00f,+06.00f,00.20f,+04.00f,+06.00f,00.20f,-05.10f,+07.00f,00.20f,+05.10f,+07.00f,00.20f,00.60f,00.30f,00.30f);
		drawSurface(-04.00f,+06.00f,00.20f,-04.00f,+06.00f,00.80f,-05.10f,+07.00f,00.20f,-05.10f,+07.00f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(+04.00f,+06.00f,00.20f,+04.00f,+06.00f,00.80f,+05.00f,+07.00f,00.20f,+05.10f,+07.00f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-04.00f,+06.00f,00.20f,-04.00f,+06.00f,00.80f,+04.00f,+06.00f,00.20f,+04.00f,+06.00f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-05.10f,+07.00f,00.20f,-05.10f,+07.00f,00.80f,+05.10f,+07.00f,00.20f,+05.10f,+07.00f,00.80f,00.60f,00.30f,00.30f);

		//greenhorn
		drawSurface(-05.00f,+07.00f,00.70f,+05.00f,+07.00f,00.70f,-06.00f,+08.00f,00.80f,+06.00f,+08.00f,00.80f,00.30f,00.30f,00.20f);
		drawSurface(-05.00f,+07.00f,00.30f,+05.00f,+07.00f,00.30f,-06.00f,+08.00f,00.20f,+06.00f,+08.00f,00.20f,00.30f,00.30f,00.20f);
		drawSurface(-05.00f,+07.00f,00.30f,-05.00f,+07.00f,00.70f,-06.00f,+08.00f,00.20f,-06.00f,+08.00f,00.80f,00.30f,00.30f,00.20f);
		drawSurface(+05.00f,+07.00f,00.30f,+05.00f,+07.00f,00.70f,+06.00f,+08.00f,00.20f,+06.00f,+08.00f,00.80f,00.30f,00.30f,00.20f);
		drawSurface(-05.00f,+07.00f,00.30f,-05.00f,+07.00f,00.70f,+05.00f,+07.00f,00.30f,+05.00f,+07.00f,00.70f,00.30f,00.30f,00.20f);
		drawSurface(-06.00f,+08.00f,00.20f,-06.00f,+08.00f,00.80f,+06.00f,+08.00f,00.20f,+06.00f,+08.00f,00.80f,00.30f,00.30f,00.20f);

		drawSurface(-03.75f,+08.00f,00.80f,-06.00f,+08.00f,00.80f,-07.00f,+09.00f,00.90f,-07.00f,+09.00f,00.90f,00.30f,00.30f,00.20f);
		drawSurface(-06.00f,+08.00f,00.20f,-06.00f,+08.00f,00.80f,-07.00f,+09.00f,00.10f,-07.00f,+09.00f,00.90f,00.30f,00.30f,00.20f);
		drawSurface(-03.75f,+08.00f,00.20f,-06.00f,+08.00f,00.20f,-07.00f,+09.00f,00.10f,-07.00f,+09.00f,00.10f,00.30f,00.30f,00.20f);
		drawSurface(-07.00f,+09.00f,00.10f,-07.00f,+09.00f,00.90f,-03.75f,+08.00f,00.20f,-03.75f,+08.00f,00.80f,00.30f,00.30f,00.20f);

		drawSurface(+03.75f,+08.00f,00.80f,+06.00f,+08.00f,00.80f,+07.00f,+09.00f,00.90f,+07.00f,+09.00f,00.90f,00.30f,00.30f,00.20f);
		drawSurface(+06.00f,+08.00f,00.20f,+06.00f,+08.00f,00.80f,+07.00f,+09.00f,00.10f,+07.00f,+09.00f,00.10f,00.30f,00.30f,00.20f);
		drawSurface(+03.75f,+08.00f,00.20f,+06.00f,+08.00f,00.20f,+07.00f,+09.00f,00.10f,+07.00f,+09.00f,00.10f,00.30f,00.30f,00.20f);
		drawSurface(+07.00f,+09.00f,00.10f,+07.00f,+09.00f,00.90f,+03.75f,+08.00f,00.20f,+03.75f,+08.00f,00.80f,00.30f,00.30f,00.20f);

		translate = Matrix::makeTranslationMatrix(5.5f,0.0f,0.0f);
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSurface(-03.00f,-03.00f,01.00f,-02.50f,-03.00f,01.00f,-03.00f,-03.00f,01.00f,-02.50f,-03.00f,01.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,01.00f,-03.25f,-03.00f,00.75f,-03.00f,-03.00f,01.00f,-03.25f,-03.00f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.75f,-03.25f,-03.00f,00.25f,-03.25f,-03.00f,00.75f,-03.25f,-03.00f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.25f,-03.00f,-03.00f,00.00f,-03.25f,-03.00f,00.25f,-03.00f,-03.00f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,00.00f,-02.50f,-03.00f,00.00f,-03.00f,-03.00f,00.00f,-02.50f,-03.00f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-02.50f,-03.00f,00.00f,-02.25f,-03.00f,00.25f,-02.50f,-03.00f,00.00f,-02.25f,-03.00f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.25f,-02.25f,-03.00f,00.75f,-02.25f,-03.00f,00.25f,-02.25f,-03.00f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.75f,-02.50f,-03.00f,01.00f,-02.25f,-03.00f,00.75f,-02.50f,-03.00f,01.00f,00.20f,00.20f,00.20f);

		drawSurface(-03.00f,-03.00f,01.00f,-02.50f,-03.00f,01.00f,-03.00f,-02.80f,01.00f,-02.50f,-02.80f,01.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,01.00f,-03.25f,-03.00f,00.75f,-03.00f,-02.80f,01.00f,-03.25f,-02.80f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.75f,-03.25f,-03.00f,00.25f,-03.25f,-02.80f,00.75f,-03.25f,-02.80f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-03.25f,-03.00f,00.25f,-03.00f,-03.00f,00.00f,-03.25f,-02.80f,00.25f,-03.00f,-02.80f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-03.00f,-03.00f,00.00f,-02.50f,-03.00f,00.00f,-03.00f,-02.80f,00.00f,-02.50f,-02.80f,00.00f,00.20f,00.20f,00.20f);
		drawSurface(-02.50f,-03.00f,00.00f,-02.25f,-03.00f,00.25f,-02.50f,-02.80f,00.00f,-02.25f,-02.80f,00.25f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.25f,-02.25f,-03.00f,00.75f,-02.25f,-02.80f,00.25f,-02.25f,-02.80f,00.75f,00.20f,00.20f,00.20f);
		drawSurface(-02.25f,-03.00f,00.75f,-02.50f,-03.00f,01.00f,-02.25f,-02.80f,00.75f,-02.50f,-02.80f,01.00f,00.20f,00.20f,00.20f);

		drawSurface(-03.00f,-02.80f,01.00f,-02.50f,-02.80f,01.00f,-03.00f,-02.00f,01.00f,-02.50f,-02.00f,01.00f,00.35f,00.35f,00.35f);
		drawSurface(-03.00f,-02.80f,01.00f,-03.25f,-02.80f,00.75f,-03.00f,-02.00f,01.00f,-03.25f,-02.00f,00.75f,00.35f,00.35f,00.35f);
		drawSurface(-03.25f,-02.80f,00.75f,-03.25f,-02.80f,00.25f,-03.25f,-02.00f,00.75f,-03.25f,-02.00f,00.25f,00.35f,00.35f,00.35f);
		drawSurface(-03.25f,-02.80f,00.25f,-03.00f,-02.80f,00.00f,-03.25f,-02.00f,00.25f,-03.00f,-02.00f,00.00f,00.35f,00.35f,00.35f);
		drawSurface(-03.00f,-02.80f,00.00f,-02.50f,-02.80f,00.00f,-03.00f,-02.00f,00.00f,-02.50f,-02.00f,00.00f,00.35f,00.35f,00.35f);
		drawSurface(-02.50f,-02.80f,00.00f,-02.25f,-02.80f,00.25f,-02.50f,-02.00f,00.00f,-02.25f,-02.00f,00.25f,00.35f,00.35f,00.35f);
		drawSurface(-02.25f,-02.80f,00.25f,-02.25f,-02.80f,00.75f,-02.25f,-02.00f,00.25f,-02.25f,-02.00f,00.75f,00.35f,00.35f,00.35f);
		drawSurface(-02.25f,-02.80f,00.75f,-02.50f,-02.80f,01.00f,-02.25f,-02.00f,00.75f,-02.50f,-02.00f,01.00f,00.35f,00.35f,00.35f);

		drawSurface(-03.00f,-02.00f,01.00f,-02.50f,-02.00f,01.00f,-02.90f,-01.75f,00.90f,-02.60f,-01.75f,00.90f,00.40f,00.40f,00.40f);
		drawSurface(-03.00f,-02.00f,01.00f,-03.25f,-02.00f,00.75f,-02.90f,-01.75f,00.90f,-03.15f,-01.75f,00.65f,00.40f,00.40f,00.40f);
		drawSurface(-03.25f,-02.00f,00.75f,-03.25f,-02.00f,00.25f,-03.15f,-01.75f,00.65f,-03.15f,-01.75f,00.35f,00.40f,00.40f,00.40f);
		drawSurface(-03.25f,-02.00f,00.25f,-03.00f,-02.00f,00.00f,-03.15f,-01.75f,00.35f,-02.90f,-01.75f,00.10f,00.40f,00.40f,00.40f);
		drawSurface(-03.00f,-02.00f,00.00f,-02.50f,-02.00f,00.00f,-02.90f,-01.75f,00.10f,-02.60f,-01.75f,00.10f,00.40f,00.40f,00.40f);
		drawSurface(-02.50f,-02.00f,00.00f,-02.25f,-02.00f,00.25f,-02.60f,-01.75f,00.10f,-02.35f,-01.75f,00.35f,00.40f,00.40f,00.40f);
		drawSurface(-02.25f,-02.00f,00.25f,-02.25f,-02.00f,00.75f,-02.35f,-01.75f,00.35f,-02.35f,-01.75f,00.65f,00.40f,00.40f,00.40f);
		drawSurface(-02.25f,-02.00f,00.75f,-02.50f,-02.00f,01.00f,-02.35f,-01.75f,00.65f,-02.60f,-01.75f,00.90f,00.40f,00.40f,00.40f);

		drawSurface(-02.90f,-02.00f,00.90f,-02.60f,-02.00f,00.90f,-02.90f,+05.50f,00.90f,-02.60f,+05.50f,00.90f,00.50f,00.30f,00.30f);
		drawSurface(-02.90f,-02.00f,00.90f,-03.15f,-02.00f,00.65f,-02.90f,+05.50f,00.90f,-03.15f,+05.50f,00.65f,00.50f,00.30f,00.30f);
		drawSurface(-03.15f,-02.00f,00.65f,-03.15f,-02.00f,00.35f,-03.15f,+05.50f,00.65f,-03.15f,+05.50f,00.35f,00.50f,00.30f,00.30f);
		drawSurface(-03.15f,-02.00f,00.35f,-02.90f,-02.00f,00.10f,-03.15f,+05.50f,00.35f,-02.90f,+05.50f,00.10f,00.50f,00.30f,00.30f);
		drawSurface(-02.90f,-02.00f,00.10f,-02.60f,-02.00f,00.10f,-02.90f,+05.50f,00.10f,-02.60f,+05.50f,00.10f,00.50f,00.30f,00.30f);
		drawSurface(-02.60f,-02.00f,00.10f,-02.35f,-02.00f,00.35f,-02.60f,+05.50f,00.10f,-02.35f,+05.50f,00.35f,00.50f,00.30f,00.30f);
		drawSurface(-02.35f,-02.00f,00.35f,-02.35f,-02.00f,00.65f,-02.35f,+05.50f,00.35f,-02.35f,+05.50f,00.65f,00.50f,00.30f,00.30f);
		drawSurface(-02.35f,-02.00f,00.65f,-02.60f,-02.00f,00.90f,-02.35f,+05.50f,00.65f,-02.60f,+05.50f,00.90f,00.50f,00.30f,00.30f);

		drawSurface(-03.00f,+05.50f,01.00f,-02.50f,+05.50f,01.00f,-03.00f,+06.00f,01.00f,-02.50f,+06.00f,01.00f,00.55f,00.35f,00.35f);
		drawSurface(-03.00f,+05.50f,01.00f,-03.25f,+05.50f,00.75f,-03.00f,+06.00f,01.00f,-03.25f,+06.00f,00.75f,00.55f,00.35f,00.35f);
		drawSurface(-03.25f,+05.50f,00.75f,-03.25f,+05.50f,00.25f,-03.25f,+06.00f,00.75f,-03.25f,+06.00f,00.25f,00.55f,00.35f,00.35f);
		drawSurface(-03.25f,+05.50f,00.25f,-03.00f,+05.50f,00.00f,-03.25f,+06.00f,00.25f,-03.00f,+06.00f,00.00f,00.55f,00.35f,00.35f);
		drawSurface(-03.00f,+05.50f,00.00f,-02.50f,+05.50f,00.00f,-03.00f,+06.00f,00.00f,-02.50f,+06.00f,00.00f,00.55f,00.35f,00.35f);
		drawSurface(-02.50f,+05.50f,00.00f,-02.25f,+05.50f,00.25f,-02.50f,+06.00f,00.00f,-02.25f,+06.00f,00.25f,00.55f,00.35f,00.35f);
		drawSurface(-02.25f,+05.50f,00.25f,-02.25f,+05.50f,00.75f,-02.25f,+06.00f,00.25f,-02.25f,+06.00f,00.75f,00.55f,00.35f,00.35f);
		drawSurface(-02.25f,+05.50f,00.75f,-02.50f,+05.50f,01.00f,-02.25f,+06.00f,00.75f,-02.50f,+06.00f,01.00f,00.55f,00.35f,00.35f);

		drawTriangle(-03.00f,+05.50f,01.00f,-02.50f,+05.50f,01.00f,-02.25f,+05.50f,00.75f,00.55f,00.35f,00.35f);
		drawTriangle(-02.25f,+05.50f,00.75f,-02.25f,+05.50f,00.25f,-02.50f,+05.50f,00.00f,00.55f,00.35f,00.35f);
		drawTriangle(-02.50f,+05.50f,00.00f,-03.00f,+05.50f,00.00f,-03.25f,+05.50f,00.25f,00.55f,00.35f,00.35f);
		drawTriangle(-03.25f,+05.50f,00.25f,-03.25f,+05.50f,00.75f,-03.00f,+05.50f,01.00f,00.55f,00.35f,00.35f);
		drawTriangle(-03.00f,+05.50f,01.00f,-02.25f,+05.50f,00.75f,-02.50f,+05.50f,00.00f,00.55f,00.35f,00.35f);
		drawTriangle(-02.50f,+05.50f,00.00f,-03.25f,+05.50f,00.25f,-03.00f,+05.50f,01.00f,00.55f,00.35f,00.35f);

		drawSurface(-02.75f,+04.00f,00.80f,-03.50f,+04.00f,00.80f,-03.50f,+04.25f,00.80f,-03.50f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-03.50f,+04.00f,00.20f,-03.50f,+04.00f,00.80f,-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.75f,+04.00f,00.20f,-03.50f,+04.00f,00.20f,-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.20f,00.60f,00.30f,00.30f);
		drawSurface(-03.50f,+04.25f,00.20f,-03.50f,+04.25f,00.80f,-02.75f,+04.00f,00.20f,-02.75f,+04.00f,00.80f,00.60f,00.30f,00.30f);

		drawSurface(-02.75f,+04.00f,00.80f,-02.00f,+04.00f,00.80f,-02.00f,+04.25f,00.80f,-02.00f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.00f,+04.00f,00.20f,-02.00f,+04.00f,00.80f,-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.80f,00.60f,00.30f,00.30f);
		drawSurface(-02.75f,+04.00f,00.20f,-02.00f,+04.00f,00.20f,-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.20f,00.60f,00.30f,00.30f);
		drawSurface(-02.00f,+04.25f,00.20f,-02.00f,+04.25f,00.80f,-02.75f,+04.00f,00.20f,-02.75f,+04.00f,00.80f,00.60f,00.30f,00.30f);

		//legs
		translate = Matrix::makeTranslationMatrix(0.3f,-2.89f,0.5f);
		rotate = Matrix::makeRotateMatrix(pendulum,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(+00.50f,+00.15f,+00.09f,0,-0.55f,0,01.00f,00.80f,00.70f);
		drawSemiCone(+00.05f,+00.09f,+00.07f,0,0,0,01.00f,00.40f,00.30f);

		translate = Matrix::makeTranslationMatrix(-0.3f,-2.89f,0.5f);
		rotate = Matrix::makeRotateMatrix(pendulum,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(+00.50f,+00.15f,+00.09f,0,-0.55f,0,01.00f,00.80f,00.70f);
		drawSemiCone(+00.05f,+00.09f,+00.07f,0,0,0,01.00f,00.40f,00.30f);

		//skirt
		translate = Matrix::makeTranslationMatrix(0.0f,-1.50f,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(-00.40f,+00.85f,+00.30f,0,0,0,00.40f,00.40f,00.40f);
		drawSemiCone(-00.20f,+01.00f,+00.80f,0,+0.45f,0,01.00f,00.40f,00.30f);

		//tail
		translate = Matrix::makeTranslationMatrix(0.0f,0.0f,-1.50f);
		rotateAngle = Matrix::makeRotateMatrix(90,Vector(1.0f,0.0f,0.0f));
		rotate = Matrix::makeRotateMatrix(-pendulum*4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = rotateAngle*translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawCone(-01.50f,+00.40f,0,+1.5f,0,0.9f,0.9f,0.9f);


		//torso
		translate = Matrix::makeTranslationMatrix(0.0f,0.0f,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum/8,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(-00.50f,+00.50f,+00.30f,0,0.7f,0,00.90f,00.90f,00.90f);

		//head
		translate = Matrix::makeTranslationMatrix(0.0f,0.2f+sin(rotation)/15,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		glColor3f(1.0f,0.8f,0.7f);
		drawSolidSphere(0.6f,360,360);
		

		//hair
		translate = Matrix::makeTranslationMatrix(0.0f,0.3f+sin(rotation)/15,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		rotateAngle = Matrix::makeRotateMatrix(225,Vector(1.0f,0.0f,0.0f));
		modelMatrix = translate*rotateAngle;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawHalfSphere(0.7f,0.0f,0.0f,0.0f,0.9f,0.9f,0.9f);

		translate = Matrix::makeTranslationMatrix(0.1f,0.3f+sin(rotation)/15,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		rotateAngle = Matrix::makeRotateMatrix(225,Vector(1.0f,0.0f,0.0f));
		rotateAngle2 = Matrix::makeRotateMatrix(60,Vector(0.0f,1.0f,1.0f));
		modelMatrix = translate*rotateAngle2*rotateAngle;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawHalfSphere(0.6f,0.0f,0.0f,0.0f,0.9f,0.9f,0.9f);

		translate = Matrix::makeTranslationMatrix(-0.1f,0.3f+sin(rotation)/15,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		rotateAngle = Matrix::makeRotateMatrix(225,Vector(1.0f,0.0f,0.0f));
		rotateAngle2 = Matrix::makeRotateMatrix(60,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotateAngle*rotateAngle2;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawHalfSphere(0.6f,0.0f,0.0f,0.0f,0.9f,0.9f,0.9f);

		translate = Matrix::makeTranslationMatrix(0,sin(rotation)/15+0.7f,0.3f);
		rotate = Matrix::makeRotateMatrix(-pendulum/2,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawTriangle(-00.00f,-00.50f,01.00f,-00.20f,+00.00f,00.60f,+00.20f,+00.00f,00.60f,0.9f,0.9f,0.9f);

		translate = Matrix::makeTranslationMatrix(0.4f,sin(rotation)/15+0.9f,0.3f);
		rotate = Matrix::makeRotateMatrix(-pendulum/2,Vector(1.0f,0.0f,0.0f));
		rotateAngle = Matrix::makeRotateMatrix(0,Vector(1.0f,0.0f,0.0f));
		rotateAngle2 = Matrix::makeRotateMatrix(90,Vector(0.0f,1.0f,0.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawTriangle(+00.10f,-00.30f,00.60f,-00.20f,+00.00f,00.60f,+00.10f,+00.20f,00.60f,0.85f,0.85f,0.85f);

		translate = Matrix::makeTranslationMatrix(-0.4f,sin(rotation)/15+0.9f,0.3f);
		rotate = Matrix::makeRotateMatrix(-pendulum/2,Vector(1.0f,0.0f,0.0f));
		rotateAngle = Matrix::makeRotateMatrix(0,Vector(1.0f,0.0f,0.0f));
		rotateAngle2 = Matrix::makeRotateMatrix(90,Vector(0.0f,1.0f,0.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawTriangle(-00.10f,-00.30f,00.60f,+00.20f,+00.00f,00.60f,-00.10f,+00.20f,00.60f,0.85f,0.85f,0.85f);

		//eyes
		translate = Matrix::makeTranslationMatrix(-0.2f,0.2f+sin(rotation)/15,0.95f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		glColor3f(1.0f,1.0f,1.0f);
		drawSolidSphere(0.15f,360,360);

		translate = Matrix::makeTranslationMatrix(+0.2f,0.2f+sin(rotation)/15,0.95f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		glColor3f(1.0f,1.0f,1.0f);
		drawSolidSphere(0.15f,360,360);

		translate = Matrix::makeTranslationMatrix(-0.2f,0.18f+sin(rotation)/15,1.0f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		glColor3f(1.0f,0.3f,0.3f);
		drawSolidSphere(0.13f,360,360);

		translate = Matrix::makeTranslationMatrix(+0.2f,0.18f+sin(rotation)/15,1.0f);
		rotate = Matrix::makeRotateMatrix(-pendulum/4,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		glColor3f(1.0f,0.3f,0.3f);
		drawSolidSphere(0.13f,360,360);

		//hand
		translate = Matrix::makeTranslationMatrix(0.3f,-0.4f,0.5f);
		rotate = Matrix::makeRotateMatrix(pendulum2,Vector(0.0f,0.0f,2.0f));
		rotateAngle = Matrix::makeRotateMatrix(90,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotateAngle*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(+00.40f,+00.16f,+00.10f,0,-0.55f,0,0.9f,0.9f,0.9f);
		drawSemiCone(+00.50f,+00.15f,+00.09f,0,-0.55f,0,01.00f,00.80f,00.70f);

		translate = Matrix::makeTranslationMatrix(-0.3f,-0.4f,0.5f);
		rotate = Matrix::makeRotateMatrix(-pendulum2,Vector(0.0f,0.0f,1.0f));
		rotateAngle = Matrix::makeRotateMatrix(-90,Vector(0.0f,0.0f,1.0f));
		modelMatrix = translate*rotateAngle*rotate;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);

		drawSemiCone(+00.40f,+00.16f,+00.10f,0,-0.55f,0,0.9f,0.9f,0.9f);
		drawSemiCone(+00.50f,+00.15f,+00.09f,0,-0.55f,0,01.00f,00.80f,00.70f);

		/*Matrix translate2 = Matrix::makeTranslationMatrix(5.0f,0.0f,0.0f);
		Matrix rotate2 = Matrix::makeRotateMatrix(rotation,Vector(0.0f,1.0f,0.0f));
		modelMatrix = rotate2 * translate2 * rotate2;
		viewSpaceMatrix = viewMatrix * modelMatrix;
		glLoadMatrixf((GLfloat*)viewSpaceMatrix.mVal);
		drawCube(1.0f,0.0f,0.0f,1.0f);*/
		
		//drawPyramid();
		
	}
};

#endif

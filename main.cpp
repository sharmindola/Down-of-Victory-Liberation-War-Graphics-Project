#include <iostream>
#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
bool show_display1=false;
bool show_display2=false;
bool show_display3=false;
bool show_display4=false;
bool show_display5=false;
//-------------------------------------------------Rifah--------------------------------------------
float train1=0.0f;
float train2=0.1f;
float _move1=0.1f;
float misael=0.02f;
float _move2=0.1f;
float rocket=0.02f;
int misaelstatus=0;
bool day = true;
float _move=0.0f;
bool rainy = false;
float _rain = 0.0f;

//-------------------------------------------------Jobaer--------------------------------------------
float object_t=0.2;
float _move_t = 0.0f;
float _angle1_t=0.0f;
float _move_span_t=0.0f;
float _move_cloud_t=0.0f;
float _move_boat_t=0.0f;
float _move_boat_2_t=0.0f;
float _move_jet_x_t=0.0f;
float _move_jet_y_t=0.0f;
float _move_bomb_t=0.0f;
float _move_train_t=0.0f;
float _move_tide_t=0.0f;
int cloudstatus_t=0;
int boatstatus_t=0;
int jetstatus_t=0;
int bombstatus_t=0;
int explosionstatus_t=0;
int bombexplosion_t=0;
int trainstatus_t=0;
bool nightstatus_t=false;

//---------------------------------------------------------Shayan-----------------------------------------


float _move_a = 0.0f;
float _move_bomb_a=0.0f;
float _move_boat_a=0.0f;
float number_a=0.02;
float _move_pakbullet_a = 0.0f;
float _move_banbullet_a = 0.0f;
bool nightstatus_a=false;


//------------------------------------------------saymon--------------------------------------------------
float move_Cloud_N=0.0f;
float move_Boat_N=0.0f;
float move_Bird_N=0.0f;
float move_floatingtree_N=0.0f;
float move_floatingtre_N=0.0f;
float move_floatinghome_N=0.0f;

int boatstatus_n=0;
int nightstatus_n=0;


//-----------------------------------------------samia---------------------------------------------------
float boat_move=0.0f;
float car_move=0.0f;
float car_move1_d=0.0f;
float smoke_move=0.0f;
float plane_move=0.0f;
float _angle=0.0f;

bool nightstatus_d=false;

//---------------------------------------------------------Rifah function-------------------------------------




void rain_s(int value)  //1
{
    if (rainy)
    {
        _rain += 0.05f;

        float x = (rand() % 1500 + 100) / 60.0f;
        float y = (rand() % 1900 - 1000) /100.0f;

        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex2f(x,y);
        glVertex2f(x-0.5,y-1);
        glEnd();

        glutPostRedisplay();
        glutTimerFunc(5, rain_s, 0);
        glFlush();
    }
}

void broader_s()
{
    if (day)
         glColor3ub(239, 209, 114);
    else
        glColor3ub(175, 133, 50);
    glBegin(GL_POLYGON);
    //glColor3ub(239, 209, 114);

	glVertex2f(1,-10);
	glVertex2f(1,-1);
	glVertex2f(20,-1);
	glVertex2f(20,-10);

	glEnd();
}

void train_platform1_s()
{
    //outwhite
    if (day)
         glColor3ub( 255,255,255 );
    else
        glColor3ub(32, 30, 25 );
    glBegin(GL_POLYGON);
    //glColor3ub(255,255,255);

	glVertex2f(1.2,-8.5);
	glVertex2f(1.2,-2.5);
	glVertex2f(3.8,-2.5);
	glVertex2f(3.8,-8.5);

	glEnd();

	//inbrown
	if (day)
         glColor3ub(184, 154, 53 );
    else
        glColor3ub(74, 60, 14  );
	glBegin(GL_POLYGON);
    //glColor3ub(184, 154, 53);

	glVertex2f(1.5,-8);
	glVertex2f(1.5,-3);
	glVertex2f(3.5,-3);
	glVertex2f(3.5,-8);

	glEnd();

	//in1
	glBegin(GL_POLYGON);
    glColor3ub(150, 124, 37);

	glVertex2f(1.7,-3.7);
	glVertex2f(1.7,-3.2);
	glVertex2f(2,-3.2);
	glVertex2f(2,-3.7);

	glEnd();

	//in2
	glBegin(GL_POLYGON);
    glColor3ub(150, 124, 37);

	glVertex2f(2.2,-3.7);
	glVertex2f(2.2,-3.2);
	glVertex2f(2.5,-3.2);
	glVertex2f(2.5,-3.7);

	glEnd();

	//in3
	glBegin(GL_POLYGON);
    glColor3ub(150, 124, 37);

	glVertex2f(2.7,-7.7);
	glVertex2f(2.7,-7.2);
	glVertex2f(3,-7.2);
	glVertex2f(3,-7.7);

	glEnd();

	//in4
	glBegin(GL_POLYGON);
    glColor3ub(150, 124, 37);

	glVertex2f(2.2,-7.7);
	glVertex2f(2.2,-7.2);
	glVertex2f(2.5,-7.2);
	glVertex2f(2.5,-7.7);

	glEnd();

	//broken_up
	if (day)
         glColor3ub(239, 209, 114);
    else
        glColor3ub(175, 133, 50);
    glBegin(GL_POLYGON);
    //glColor3ub(239, 209, 114);

	glVertex2f(3.8,-4.28);
	glVertex2f(2.25,-4.14);
	glVertex2f(3.27,-3.83);
	glVertex2f(2.85,-3.83);
	glVertex2f(3.17,-3.48);
	glVertex2f(2.69,-3.35);
	glVertex2f(3,-3.14);
	glVertex2f(2.63,-2.99);
	glVertex2f(3.03,-2.78);
	glVertex2f(3,-2.4);
	glVertex2f(3.8,-2.4);

	glEnd();

	//broken_down
	if (day)
         glColor3ub(239, 209, 114);
    else
        glColor3ub(175, 133, 50);
    glBegin(GL_POLYGON);
    //glColor3ub(239, 209, 114);

    glVertex2f(1,-6.3);
	glVertex2f(1.41,-6.48);
	glVertex2f(1.5,-6);
	glVertex2f(1.62,-6.48);
	glVertex2f(1.7,-6.1);
	glVertex2f(1.81,-6.58);
	glVertex2f(1.92,-6.21);
	glVertex2f(1.99,-6.69);
	glVertex2f(2.12,-6.31);
	glVertex2f(2.2,-6.78);
	glVertex2f(2.32,-6.5);
	glVertex2f(1,-7.14);

	glEnd();

	//broken_part_down_2
	glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(1.1,-6.5);
	glVertex2f(1.2,-6.6);
	glVertex2f(1.3,-6.5);
	glVertex2f(1.6,-6.6);
	glVertex2f(1.4,-6.7);
	glVertex2f(1.5,-6.8);
	glVertex2f(1.3,-6.9);
	glVertex2f(1.2,-6.7);
	glVertex2f(1,-6.8);
	glVertex2f(1.1,-6.7);

	glEnd();

	//broken_part_down_1
	glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(1.03,-6.97);
	glVertex2f(1.1,-6.9);
	glVertex2f(1.1,-6.8);
	glVertex2f(1.2,-6.7);
	glVertex2f(1.26,-6.8);
	glVertex2f(1.2,-6.9);

	glEnd();

	//broken_part_down_3
	glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(1.7,-6.8);
	glVertex2f(1.6,-6.7);
	glVertex2f(1.6,-6.6);
	glVertex2f(1.7,-6.7);
	glVertex2f(1.8,-6.66);

	glEnd();


	//broken_part_up3
	glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(3.4,-3.2);
	glVertex2f(3.6,-3.3);
	glVertex2f(3.5,-3.5);
	glVertex2f(3.7,-3.7);
	glVertex2f(3.4,-3.6);
	glVertex2f(3.4,-3.7);
	glVertex2f(3.2,-3.6);
	glVertex2f(3.3,-3.5);

	glEnd();

		//broken_part_up1
    glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(3.4,-2.8);
	glVertex2f(3.2,-2.6);
	glVertex2f(2.99,-2.6);
	glVertex2f(3.3,-2.4);
	glVertex2f(3.4,-2.6);

	glEnd();

	//broken_part_up2

    glBegin(GL_POLYGON);
    glColor3ub(179, 127, 47);

	glVertex2f(3.8,-2.99);
	glVertex2f(3.7,-2.8);
	glVertex2f(3.9,-2.6);
	glVertex2f(4.1,-2.8);
	glVertex2f(4,-3);

	glEnd();

}

void rail_line1_s()
{
    //broader1
    if (day)
         glColor3ub(247, 231, 141);
    else
        glColor3ub(188, 151, 75);
    glBegin(GL_POLYGON);
    //glColor3ub(247, 231, 141);

	glVertex2f(2,-2.5);
	glVertex2f(2,-1);
	glVertex2f(3,-1);
	glVertex2f(3,-2.5);

	glEnd();

	//width line1
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(2.1,-1.3);
	glVertex2f(2.1,-1.1);
	glVertex2f(2.9,-1.1);
	glVertex2f(2.9,-1.3);

	glEnd();

	//width line2
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(2.1,-1.6);
	glVertex2f(2.1,-1.4);
	glVertex2f(2.9,-1.4);
	glVertex2f(2.9,-1.6);

	glEnd();

	//width line3
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(2.1,-1.9);
	glVertex2f(2.1,-1.7);
	glVertex2f(2.9,-1.7);
	glVertex2f(2.9,-1.9);

	glEnd();

	//width line4
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(2.1,-2.2);
	glVertex2f(2.1,-2);
	glVertex2f(2.9,-2);
	glVertex2f(2.9,-2.2);

	glEnd();

	//long line1
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(2.2,-2.5);
	glVertex2f(2.2,-1);
	glVertex2f(2.3,-1);
	glVertex2f(2.3,-2.5);

	glEnd();

	//long line2
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(2.7,-2.5);
	glVertex2f(2.7,-1);
	glVertex2f(2.8,-1);
	glVertex2f(2.8,-2.5);

	glEnd();
}

void rail_line2_s()
{
    //broader1
    if (day)
         glColor3ub(247, 231, 141);
    else
        glColor3ub(188, 151, 75);
    glBegin(GL_POLYGON);
    //glColor3ub(247, 231, 141);

	glVertex2f(4.5,-10);
	glVertex2f(4.5,-1);
	glVertex2f(5.6,-1);
	glVertex2f(5.6,-10);

	glEnd();

	//width line1
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-1.3);
	glVertex2f(4.6,-1.1);
	glVertex2f(5.5,-1.1);
	glVertex2f(5.5,-1.3);

	glEnd();

	//width line2
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-1.6);
	glVertex2f(4.6,-1.4);
	glVertex2f(5.5,-1.4);
	glVertex2f(5.5,-1.6);

	glEnd();

	//width line3
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-1.9);
	glVertex2f(4.6,-1.7);
	glVertex2f(5.5,-1.7);
	glVertex2f(5.5,-1.9);

	glEnd();

	//width line4
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-2.2);
	glVertex2f(4.6,-2);
	glVertex2f(5.5,-2);
	glVertex2f(5.5,-2.2);

	glEnd();

	//width line5
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-2.5);
	glVertex2f(4.6,-2.3);
	glVertex2f(5.5,-2.3);
	glVertex2f(5.5,-2.5);

	glEnd();

	//width line6
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-2.8);
	glVertex2f(4.6,-2.6);
	glVertex2f(5.5,-2.6);
	glVertex2f(5.5,-2.8);

	glEnd();

	//width line7
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-3.1);
	glVertex2f(4.6,-2.9);
	glVertex2f(5.5,-2.9);
	glVertex2f(5.5,-3.1);

	glEnd();

	//width line8
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-3.4);
	glVertex2f(4.6,-3.2);
	glVertex2f(5.5,-3.2);
	glVertex2f(5.5,-3.4);

	glEnd();

	//width line9
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-3.7);
	glVertex2f(4.6,-3.5);
	glVertex2f(5.5,-3.5);
	glVertex2f(5.5,-3.7);

	glEnd();

	//width line10
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-4);
	glVertex2f(4.6,-3.8);
	glVertex2f(5.5,-3.8);
	glVertex2f(5.5,-4);

	glEnd();

	//width line11
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-4.3);
	glVertex2f(4.6,-4.1);
	glVertex2f(5.5,-4.1);
	glVertex2f(5.5,-4.3);

	glEnd();

	//width line12
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-4.6);
	glVertex2f(4.6,-4.4);
	glVertex2f(5.5,-4.4);
	glVertex2f(5.5,-4.6);

	glEnd();

	//width line13
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-4.9);
	glVertex2f(4.6,-4.7);
	glVertex2f(5.5,-4.7);
	glVertex2f(5.5,-4.9);

	glEnd();

	//width line14
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-5.2);
	glVertex2f(4.6,-5);
	glVertex2f(5.5,-5);
	glVertex2f(5.5,-5.2);

	glEnd();

	//width line15
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-5.5);
	glVertex2f(4.6,-5.3);
	glVertex2f(5.5,-5.3);
	glVertex2f(5.5,-5.5);

	glEnd();

	//width line16
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-5.8);
	glVertex2f(4.6,-5.6);
	glVertex2f(5.5,-5.6);
	glVertex2f(5.5,-5.8);

	glEnd();

	//width line17
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-6.1);
	glVertex2f(4.6,-5.9);
	glVertex2f(5.5,-5.9);
	glVertex2f(5.5,-6.1);

	glEnd();

	//width line18
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-6.4);
	glVertex2f(4.6,-6.2);
	glVertex2f(5.5,-6.2);
	glVertex2f(5.5,-6.4);

	glEnd();

	//width line19
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-6.7);
	glVertex2f(4.6,-6.5);
	glVertex2f(5.5,-6.5);
	glVertex2f(5.5,-6.7);

	glEnd();

	//width line20
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-7);
	glVertex2f(4.6,-6.8);
	glVertex2f(5.5,-6.8);
	glVertex2f(5.5,-7);

	glEnd();

	//width line21
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-7.3);
	glVertex2f(4.6,-7.1);
	glVertex2f(5.5,-7.1);
	glVertex2f(5.5,-7.3);

	glEnd();
	//width line22
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-7.6);
	glVertex2f(4.6,-7.4);
	glVertex2f(5.5,-7.4);
	glVertex2f(5.5,-7.6);

	glEnd();

	//width line23
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-7.9);
	glVertex2f(4.6,-7.7);
	glVertex2f(5.5,-7.7);
	glVertex2f(5.5,-7.9);

	glEnd();
	//width line24
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-8.2);
	glVertex2f(4.6,-8);
	glVertex2f(5.5,-8);
	glVertex2f(5.5,-8.2);

	glEnd();
	//width line25
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-8.5);
	glVertex2f(4.6,-8.3);
	glVertex2f(5.5,-8.3);
	glVertex2f(5.5,-8.5);

	glEnd();
	//width line26
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-8.8);
	glVertex2f(4.6,-8.6);
	glVertex2f(5.5,-8.6);
	glVertex2f(5.5,-8.8);

	glEnd();

	//width line27
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-9.1);
	glVertex2f(4.6,-8.9);
	glVertex2f(5.5,-8.9);
	glVertex2f(5.5,-9.1);

	glEnd();

	//width line28
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-9.4);
	glVertex2f(4.6,-9.2);
	glVertex2f(5.5,-9.2);
	glVertex2f(5.5,-9.4);

	glEnd();

	//width line29
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-9.7);
	glVertex2f(4.6,-9.5);
	glVertex2f(5.5,-9.5);
	glVertex2f(5.5,-9.7);

	glEnd();

	//width line30
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(4.6,-10);
	glVertex2f(4.6,-9.8);
	glVertex2f(5.5,-9.8);
	glVertex2f(5.5,-10);

	glEnd();

	//long line1
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(4.7,-10);
	glVertex2f(4.7,-1);
	glVertex2f(4.8,-1);
	glVertex2f(4.8,-10);

	glEnd();

	//long line2
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(5.3,-10);
	glVertex2f(5.3,-1);
	glVertex2f(5.4,-1);
	glVertex2f(5.4,-10);

	glEnd();


    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0, 0, 1);
    //glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,train1, 0.0f);

	//trainback
	glBegin(GL_POLYGON);
    glColor3ub(48, 144, 175);

	glVertex2f(4.5,-3.8);
	glVertex2f(4.5,-1.8);
	glVertex2f(5.6,-1.8);
	glVertex2f(5.6,-3.8);

	glEnd();

	//circle_broader
	glBegin(GL_POLYGON);
    glColor3ub(186, 168, 105);

	glVertex2f(4.8,-3.6);
	glVertex2f(4.8,-2.1);
	glVertex2f(5.4,-2.1);
	glVertex2f(5.4,-3.6);


	glEnd();

	//circle_up
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(121, 117, 103);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.1,y-2.5);
    }
    glEnd();

    //circle_down
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(121, 117, 103);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.1,y-3.2);
    }
    glEnd();

	//trainmiddle
	glBegin(GL_POLYGON);
    glColor3ub(48, 144, 175);

	glVertex2f(4.5,-6);
	glVertex2f(4.5,-4);
	glVertex2f(5.6,-4);
	glVertex2f(5.6,-6);

	glEnd();

	//circle_broader
	glBegin(GL_POLYGON);
    glColor3ub(186, 168, 105);

	glVertex2f(4.8,-5.7);
	glVertex2f(4.8,-4.3);
	glVertex2f(5.4,-4.3);
	glVertex2f(5.4,-5.7);


	glEnd();

	//circle_up
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(121, 117, 103);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.1,y-4.7);
    }
    glEnd();

    //circle_down
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(121, 117, 103);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.1,y-5.3);
    }
    glEnd();



	//trainfront
	glBegin(GL_POLYGON);
    glColor3ub(48, 144, 175);

	glVertex2f(4.5,-8.2);
	glVertex2f(4.5,-6.2);
	glVertex2f(5.6,-6.2);
	glVertex2f(5.6,-8.2);

	glEnd();

	//tank1

	//wheel_left
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(4.7,-7.6);
	glVertex2f(4.7,-6.6);
	glVertex2f(4.8,-6.5);
	glVertex2f(4.8,-7.7);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(4.8,-7.6);
	glVertex2f(4.7,-7.5);

	glVertex2f(4.8,-7.5);
	glVertex2f(4.7,-7.4);

	glVertex2f(4.8,-7.4);
	glVertex2f(4.7,-7.3);

	glVertex2f(4.8,-7.3);
	glVertex2f(4.7,-7.2);

	glVertex2f(4.8,-7.2);
	glVertex2f(4.7,-7.1);

	glVertex2f(4.8,-7.1);
	glVertex2f(4.7,-7.0);

	glVertex2f(4.8,-7.0);
	glVertex2f(4.7,-6.9);

	glVertex2f(4.8,-6.9);
	glVertex2f(4.7,-6.8);

	glVertex2f(4.8,-6.8);
	glVertex2f(4.7,-6.7);

	glVertex2f(4.8,-6.7);
	glVertex2f(4.7,-6.6);
	glEnd();

	//wheel_right
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(5.4,-7.7);
	glVertex2f(5.4,-6.5);
	glVertex2f(5.5,-6.6);
	glVertex2f(5.5,-7.6);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(5.4,-7.6);
	glVertex2f(5.5,-7.5);

	glVertex2f(5.4,-7.5);
	glVertex2f(5.5,-7.4);

	glVertex2f(5.4,-7.4);
	glVertex2f(5.5,-7.3);

	glVertex2f(5.4,-7.3);
	glVertex2f(5.5,-7.2);

	glVertex2f(5.4,-7.2);
	glVertex2f(5.5,-7.1);

	glVertex2f(5.4,-7.1);
	glVertex2f(5.5,-7.0);

	glVertex2f(5.4,-7.0);
	glVertex2f(5.5,-6.9);

	glVertex2f(5.4,-6.9);
	glVertex2f(5.5,-6.8);

	glVertex2f(5.4,-6.8);
	glVertex2f(5.5,-6.7);

	glVertex2f(5.4,-6.7);
	glVertex2f(5.5,-6.6);
	glEnd();

	//border
	glBegin(GL_POLYGON);
    glColor3ub(100, 178, 100);

	glVertex2f(4.8,-7.6);
	glVertex2f(4.8,-6.6);
	glVertex2f(5.4,-6.6);
	glVertex2f(5.4,-7.6);

	glEnd();

	//front
	glBegin(GL_POLYGON);
    glColor3ub(108, 188, 108);

	glVertex2f(4.9,-6.7);
	glVertex2f(4.8,-6.6);
	glVertex2f(5.4,-6.6);
	glVertex2f(5.3,-6.7);

	glEnd();

	//back1
	glBegin(GL_POLYGON);
    glColor3ub(118, 186, 118);

	glVertex2f(4.8,-7.6);
	glVertex2f(4.8,-7.5);
	glVertex2f(5.4,-7.5);
	glVertex2f(5.4,-7.6);

	glEnd();

	//back1_box1
	glBegin(GL_POLYGON);
    glColor3ub(192, 223, 192);

	glVertex2f(4.9,-7.6);
	glVertex2f(4.9,-7.5);
	glVertex2f(5,-7.5);
	glVertex2f(5,-7.6);

	glEnd();

	//back1_box2
	glBegin(GL_POLYGON);
    glColor3ub(192, 223, 192);

	glVertex2f(5.2,-7.6);
	glVertex2f(5.2,-7.5);
	glVertex2f(5.3,-7.5);
	glVertex2f(5.3,-7.6);

	glEnd();

	//back2
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(4.8,-7.5);
	glVertex2f(4.9,-7.4);
	glVertex2f(5.3,-7.4);
	glVertex2f(5.4,-7.5);

	glEnd();

	//square1
	glBegin(GL_POLYGON);
    glColor3ub(102, 207, 102);

	glVertex2f(4.9,-7.4);
	glVertex2f(4.9,-7);
	glVertex2f(5.3,-7);
	glVertex2f(5.3,-7.4);

	glEnd();

	//square1_box1
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(4.96,-7.2);
	glVertex2f(4.96,-7.1);
	glVertex2f(5.03,-7.1);
	glVertex2f(5.03,-7.2);

	glEnd();

	//square1_box2
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(5.16,-7.2);
	glVertex2f(5.16,-7.1);
	glVertex2f(5.23,-7.1);
	glVertex2f(5.23,-7.2);

	glEnd();

	//square2
	glBegin(GL_POLYGON);
    glColor3ub(104, 221, 104);

	glVertex2f(4.9,-7);
	glVertex2f(4.9,-6.7);
	glVertex2f(5.3,-6.7);
	glVertex2f(5.3,-7);

	glEnd();

	//square2_box
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(5.06,-6.82);
	glVertex2f(5.06,-6.76);
	glVertex2f(5.14,-6.76);
	glVertex2f(5.14,-6.82);

	glEnd();

	//square2_bullet_left
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(4.98,-7);
	glVertex2f(4.98,-6.35);
	glVertex2f(5.04,-6.35);
	glVertex2f(5.04,-7);

	glEnd();

	//square2_bullet_right
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(5.17,-7);
	glVertex2f(5.17,-6.4);
	glVertex2f(5.23,-6.4);
	glVertex2f(5.23,-7);

	glEnd();
    glPopMatrix();
}

void tree_s()
{
    //rail_line2
    //tree1
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
        //glColor3ub( 72, 167, 44);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.45;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+6.2,y-2.5 );
    }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
         if (day)
         glColor3ub( 72, 167, 44);
        else
        glColor3ub(23, 114, 23);
        //glColor3ub( 72, 167, 44);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.45;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+6.9,y-2.6 );
    }
	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.7,y-3 );
        }

	glEnd();

    //tree2
    glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7.1,y-5.3 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
             if (day)
         glColor3ub( 72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.6,y-4.7);
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
             if (day)
         glColor3ub( 72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.4,y-5.5 );
        }

	glEnd();

	//tree3
    glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
             if (day)
         glColor3ub( 72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.7,y-7.1 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.4,y-7.6);
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.45;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7.1,y-7.4 );
        }

	glEnd();

	//rail_line3

	glBegin(GL_POLYGON);
	glColor3ub( 77, 64, 17 );

	glVertex2f(9.2,-3.8);
	glVertex2f(9,-3);
	glVertex2f(9.3,-2.98);
	glVertex2f(9.3,-2.5);
	glVertex2f(9.5,-3.5);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub( 88, 72, 20  );

	glVertex2f(9.2,-4.5);
	glVertex2f(9.2,-3.8);
	glVertex2f(9.5,-3.5);
	glVertex2f(9.6,-4.3);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub( 99, 81, 23 );

	glVertex2f(9.1,-5.1);
	glVertex2f(9.2,-4.5);
	glVertex2f(9.6,-4.3);
	glVertex2f(9.4,-5.3);

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(64, 158, 46);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 64, 158, 46 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+9.3,y-4.8 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(64, 158, 46);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 64, 158, 46 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.6;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+9,y-5.6 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(64, 158, 46);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 64, 158, 46 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+9.45,y-5.5 );
        }

	glEnd();

	//rail_line4
    //tree1
    glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(56, 167, 34);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 56, 167, 34 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12.5,y-1.5 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
            if (day)
         glColor3ub(72, 167, 44);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub( 72, 167, 44);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12.1,y-2.2 );
        }

	glEnd();

	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
        {
             if (day)
         glColor3ub( 56, 167, 34);
        else
        glColor3ub(23, 114, 23);
            //glColor3ub(  56, 167, 34 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+13,y-2 );
        }

	glEnd();

}

void rail_line3_s()
{
    //broader1
    if (day)
         glColor3ub(247, 231, 141);
    else
        glColor3ub(188, 151, 75);
    glBegin(GL_POLYGON);
    //glColor3ub(247, 231, 141);

	glVertex2f(7.4,-10);
	glVertex2f(7.4,-1);
	glVertex2f(8.4,-1);
	glVertex2f(8.4,-10);

	glEnd();

	//width line1
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-1.3);
	glVertex2f(7.5,-1.1);
	glVertex2f(8.3,-1.1);
	glVertex2f(8.3,-1.3);

	glEnd();

	//width line2
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-1.6);
	glVertex2f(7.5,-1.4);
	glVertex2f(8.3,-1.4);
	glVertex2f(8.3,-1.6);

	glEnd();

	//width line3
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-1.9);
	glVertex2f(7.5,-1.7);
	glVertex2f(8.3,-1.7);
	glVertex2f(8.3,-1.9);

	glEnd();

	//width line4
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-2.2);
	glVertex2f(7.5,-2);
	glVertex2f(8.3,-2);
	glVertex2f(8.3,-2.2);

	glEnd();

	//width line5
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-2.5);
	glVertex2f(7.5,-2.3);
	glVertex2f(8.3,-2.3);
	glVertex2f(8.3,-2.5);

	glEnd();

	//width line6
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-2.8);
	glVertex2f(7.5,-2.6);
	glVertex2f(8.3,-2.6);
	glVertex2f(8.3,-2.8);

	glEnd();

	//width line7
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-3.1);
	glVertex2f(7.5,-2.9);
	glVertex2f(8.3,-2.9);
	glVertex2f(8.3,-3.1);

	glEnd();

	//width line8
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-3.4);
	glVertex2f(7.5,-3.2);
	glVertex2f(8.3,-3.2);
	glVertex2f(8.3,-3.4);

	glEnd();

	//width line9
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-3.7);
	glVertex2f(7.5,-3.5);
	glVertex2f(8.3,-3.5);
	glVertex2f(8.3,-3.7);

	glEnd();

	//width line10
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-4);
	glVertex2f(7.5,-3.8);
	glVertex2f(8.3,-3.8);
	glVertex2f(8.3,-4);

	glEnd();

	//width line11
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-4.3);
	glVertex2f(7.5,-4.1);
	glVertex2f(8.3,-4.1);
	glVertex2f(8.3,-4.3);

	glEnd();

	//width line12
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-4.6);
	glVertex2f(7.5,-4.4);
	glVertex2f(8.3,-4.4);
	glVertex2f(8.3,-4.6);

	glEnd();

	//width line13
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-4.9);
	glVertex2f(7.5,-4.7);
	glVertex2f(8.3,-4.7);
	glVertex2f(8.3,-4.9);

	glEnd();

	//width line14
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-5.2);
	glVertex2f(7.5,-5);
	glVertex2f(8.3,-5);
	glVertex2f(8.3,-5.2);

	glEnd();

	//width line15
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-5.5);
	glVertex2f(7.5,-5.3);
	glVertex2f(8.3,-5.3);
	glVertex2f(8.3,-5.5);

	glEnd();

	//width line16
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-5.8);
	glVertex2f(7.5,-5.6);
	glVertex2f(8.3,-5.6);
	glVertex2f(8.3,-5.8);

	glEnd();

	//width line17
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-6.1);
	glVertex2f(7.5,-5.9);
	glVertex2f(8.3,-5.9);
	glVertex2f(8.3,-6.1);

	glEnd();

	//width line18
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-6.4);
	glVertex2f(7.5,-6.2);
	glVertex2f(8.3,-6.2);
	glVertex2f(8.3,-6.4);

	glEnd();

	//width line19
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-6.7);
	glVertex2f(7.5,-6.5);
	glVertex2f(8.3,-6.5);
	glVertex2f(8.3,-6.7);

	glEnd();

	//width line20
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-7);
	glVertex2f(7.5,-6.8);
	glVertex2f(8.3,-6.8);
	glVertex2f(8.3,-7);

	glEnd();

	//width line21
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-7.3);
	glVertex2f(7.5,-7.1);
	glVertex2f(8.3,-7.1);
	glVertex2f(8.3,-7.3);

	glEnd();
	//width line22
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-7.6);
	glVertex2f(7.5,-7.4);
	glVertex2f(8.3,-7.4);
	glVertex2f(8.3,-7.6);

	glEnd();

	//width line23
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-7.9);
	glVertex2f(7.5,-7.7);
	glVertex2f(8.3,-7.7);
	glVertex2f(8.3,-7.9);

	glEnd();
	//width line24
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-8.2);
	glVertex2f(7.5,-8);
	glVertex2f(8.3,-8);
	glVertex2f(8.3,-8.2);

	glEnd();
	//width line25
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-8.5);
	glVertex2f(7.5,-8.3);
	glVertex2f(8.3,-8.3);
	glVertex2f(8.3,-8.5);

	glEnd();
	//width line26
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-8.8);
	glVertex2f(7.5,-8.6);
	glVertex2f(8.3,-8.6);
	glVertex2f(8.3,-8.8);

	glEnd();

	//width line27
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-9.1);
	glVertex2f(7.5,-8.9);
	glVertex2f(8.3,-8.9);
	glVertex2f(8.3,-9.1);

	glEnd();

	//width line28
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-9.4);
	glVertex2f(7.5,-9.2);
	glVertex2f(8.3,-9.2);
	glVertex2f(8.3,-9.4);

	glEnd();

	//width line29
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-9.7);
	glVertex2f(7.5,-9.5);
	glVertex2f(8.3,-9.5);
	glVertex2f(8.3,-9.7);

	glEnd();

	//width line30
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(7.5,-10);
	glVertex2f(7.5,-9.8);
	glVertex2f(8.3,-9.8);
	glVertex2f(8.3,-10);

	glEnd();

    //long line1
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(7.6,-10);
	glVertex2f(7.6,-1);
	glVertex2f(7.7,-1);
	glVertex2f(7.7,-10);

	glEnd();

	//long line2
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(8.1,-10);
	glVertex2f(8.1,-1);
	glVertex2f(8.2,-1);
	glVertex2f(8.2,-10);

	glEnd();

	//broken_up
	if (day)
        glColor3ub(247, 231, 141);
    else
        glColor3ub(188, 151, 75);
	glLineWidth(20);
	glBegin(GL_LINES);
    //glColor3ub(239, 209, 114);

	glVertex2f(7.4,-5.98);
	glVertex2f(7.7,-6.1);
	glVertex2f(7.7,-6.1);
	glVertex2f(7.9,-5.7);
	glVertex2f(7.9,-5.7);
	glVertex2f(8.2,-5.9);
	glVertex2f(8.2,-5.9);
	glVertex2f(8.3,-5.6);
	glVertex2f(8.3,-5.6);
	glVertex2f(8.6,-5.5);

	glEnd();

	//broken_bomb
	 if (day)
         glColor3ub( 211, 172, 111);
    else
        glColor3ub(123, 97, 10);
	glLineWidth(20);
	glBegin(GL_LINES);
    //glColor3ub(211, 172, 111 );

	glVertex2f(7.4,-7.9);
	glVertex2f(7.9,-6.9);
	glVertex2f(7.9,-6.9);
	glVertex2f(7.9,-7.5);
	glVertex2f(7.9,-7.5);
	glVertex2f(8.1,-7.9);
	glVertex2f(8.1,-7.9);
	glVertex2f(8.5,-7.4);
	glVertex2f(8.5,-7.4);
	glVertex2f(8.4,-7.9);
	glVertex2f(8.4,-7.9);
	glVertex2f(8.7,-8.1);
	glVertex2f(8.7,-8.1);
	glVertex2f(8.4,-8.2);
	glVertex2f(8.4,-8.2);
	glVertex2f(8.4,-8.5);
	glVertex2f(8.4,-8.5);
	glVertex2f(8.0,-8.3);
	glVertex2f(8.0,-8.3);
	glVertex2f(7.9,-8.5);
	glVertex2f(7.9,-8.5);
	glVertex2f(7.6,-8.4);
	glVertex2f(7.6,-8.4);
	glVertex2f(7.8,-8.1);
	glVertex2f(7.8,-8.1);
	glVertex2f(7.4,-7.9);
	glVertex2f(7.4,-7.9);
	glVertex2f(7.8,-7.8);

	glEnd();

	if (day)
         glColor3ub( 129, 98, 67  );
    else
        glColor3ub(147, 121, 31);
	glBegin(GL_POLYGON);
    //glColor3ub( 220, 183, 87   );

	glVertex2f(7.4,-7.9);
	glVertex2f(7.9,-6.9);
	glVertex2f(7.9,-7.5);
	glVertex2f(8.1,-7.9);
	glVertex2f(8.5,-7.4);
	glVertex2f(8.4,-7.9);
	glVertex2f(8.7,-8.1);
	glVertex2f(8.4,-8.2);
	glVertex2f(8.4,-8.5);
	glVertex2f(8.0,-8.3);
	glVertex2f(7.9,-8.5);
	glVertex2f(7.6,-8.4);
	glVertex2f(7.8,-8.1);
	glVertex2f(7.4,-7.9);
	glVertex2f(7.8,-7.8);

	glEnd();
}

void rail_line4_s()
{
    //broader1
    if (day)
         glColor3ub(247, 231, 141);
    else
        glColor3ub(188, 151, 75);
    glBegin(GL_POLYGON);
    //glColor3ub(247, 231, 141);

	glVertex2f(10,-10);
	glVertex2f(10,-1);
	glVertex2f(11.1,-1);
	glVertex2f(11.1,-10);

	glEnd();

	//width line1
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-1.3);
	glVertex2f(10.1,-1.1);
	glVertex2f(11,-1.1);
	glVertex2f(11,-1.3);

	glEnd();

	//width line2
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-1.6);
	glVertex2f(10.1,-1.4);
	glVertex2f(11,-1.4);
	glVertex2f(11,-1.6);

	glEnd();

	//width line3
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-1.9);
	glVertex2f(10.1,-1.7);
	glVertex2f(11,-1.7);
	glVertex2f(11,-1.9);

	glEnd();

	//width line4
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-2.2);
	glVertex2f(10.1,-2);
	glVertex2f(11,-2);
	glVertex2f(11,-2.2);

	glEnd();

	//width line5
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-2.5);
	glVertex2f(10.1,-2.3);
	glVertex2f(11,-2.3);
	glVertex2f(11,-2.5);

	glEnd();

	//width line6
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-2.8);
	glVertex2f(10.1,-2.6);
	glVertex2f(11,-2.6);
	glVertex2f(11,-2.8);

	glEnd();

	//width line7
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-3.1);
	glVertex2f(10.1,-2.9);
	glVertex2f(11,-2.9);
	glVertex2f(11,-3.1);

	glEnd();

	//width line8
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-3.4);
	glVertex2f(10.1,-3.2);
	glVertex2f(11,-3.2);
	glVertex2f(11,-3.4);

	glEnd();

	//width line9
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-3.7);
	glVertex2f(10.1,-3.5);
	glVertex2f(11,-3.5);
	glVertex2f(11,-3.7);

	glEnd();

	//width line10
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-4);
	glVertex2f(10.1,-3.8);
	glVertex2f(11,-3.8);
	glVertex2f(11,-4);

	glEnd();

	//width line11
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-4.3);
	glVertex2f(10.1,-4.1);
	glVertex2f(11,-4.1);
	glVertex2f(11,-4.3);

	glEnd();

	//width line12
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-4.6);
	glVertex2f(10.1,-4.4);
	glVertex2f(11,-4.4);
	glVertex2f(11,-4.6);

	glEnd();

	//width line13
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-4.9);
	glVertex2f(10.1,-4.7);
	glVertex2f(11,-4.7);
	glVertex2f(11,-4.9);

	glEnd();

	//width line14
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-5.2);
	glVertex2f(10.1,-5);
	glVertex2f(11,-5);
	glVertex2f(11,-5.2);

	glEnd();

	//width line15
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-5.5);
	glVertex2f(10.1,-5.3);
	glVertex2f(11,-5.3);
	glVertex2f(11,-5.5);

	glEnd();

	//width line16
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-5.8);
	glVertex2f(10.1,-5.6);
	glVertex2f(11,-5.6);
	glVertex2f(11,-5.8);

	glEnd();

	//width line17
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-6.1);
	glVertex2f(10.1,-5.9);
	glVertex2f(11,-5.9);
	glVertex2f(11,-6.1);

	glEnd();

	//width line18
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-6.4);
	glVertex2f(10.1,-6.2);
	glVertex2f(11,-6.2);
	glVertex2f(11,-6.4);

	glEnd();

	//width line19
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-6.7);
	glVertex2f(10.1,-6.5);
	glVertex2f(11,-6.5);
	glVertex2f(11,-6.7);

	glEnd();

	//width line20
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-7);
	glVertex2f(10.1,-6.8);
	glVertex2f(11,-6.8);
	glVertex2f(11,-7);

	glEnd();

	//width line21
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-7.3);
	glVertex2f(10.1,-7.1);
	glVertex2f(11,-7.1);
	glVertex2f(11,-7.3);

	glEnd();
	//width line22
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-7.6);
	glVertex2f(10.1,-7.4);
	glVertex2f(11,-7.4);
	glVertex2f(11,-7.6);

	glEnd();

	//width line23
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-7.9);
	glVertex2f(10.1,-7.7);
	glVertex2f(11,-7.7);
	glVertex2f(11,-7.9);

	glEnd();
	//width line24
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-8.2);
	glVertex2f(10.1,-8);
	glVertex2f(11,-8);
	glVertex2f(11,-8.2);

	glEnd();
	//width line25
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-8.5);
	glVertex2f(10.1,-8.3);
	glVertex2f(11,-8.3);
	glVertex2f(11,-8.5);

	glEnd();
	//width line26
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-8.8);
	glVertex2f(10.1,-8.6);
	glVertex2f(11,-8.6);
	glVertex2f(11,-8.8);

	glEnd();

	//width line27
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-9.1);
	glVertex2f(10.1,-8.9);
	glVertex2f(11,-8.9);
	glVertex2f(11,-9.1);

	glEnd();

	//width line28
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-9.4);
	glVertex2f(10.1,-9.2);
	glVertex2f(11,-9.2);
	glVertex2f(11,-9.4);

	glEnd();

	//width line29
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-9.7);
	glVertex2f(10.1,-9.5);
	glVertex2f(11,-9.5);
	glVertex2f(11,-9.7);

	glEnd();

	//width line30
	glBegin(GL_POLYGON);
    glColor3ub(223, 183, 50);

	glVertex2f(10.1,-10);
	glVertex2f(10.1,-9.8);
	glVertex2f(11,-9.8);
	glVertex2f(11,-10);

	glEnd();

		//long line1
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(10.2,-10);
	glVertex2f(10.2,-1);
	glVertex2f(10.3,-1);
	glVertex2f(10.3,-10);

	glEnd();

	//long line2
	glBegin(GL_POLYGON);
    glColor3ub(142, 147, 142);

	glVertex2f(10.8,-10);
	glVertex2f(10.8,-1);
	glVertex2f(10.9,-1);
	glVertex2f(10.9,-10);

	glEnd();

    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0, 0, 1);
    //glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,train2, 0.0f);

	//trainback
	glBegin(GL_POLYGON);
    glColor3ub(211, 160, 51);

	glVertex2f(10,-4);
	glVertex2f(10,-2.2);
	glVertex2f(11.1,-2.2);
	glVertex2f(11.1,-4);

	glEnd();

	//tank2

	//wheel_left
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.1,-3.4);
	glVertex2f(10.1,-2.5);
	glVertex2f(10.2,-2.4);
	glVertex2f(10.2,-3.5);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.2,-3.4);
	glVertex2f(10.1,-3.3);

	glVertex2f(10.2,-3.3);
	glVertex2f(10.1,-3.2);

	glVertex2f(10.2,-3.2);
	glVertex2f(10.1,-3.1);

	glVertex2f(10.2,-3.1);
	glVertex2f(10.1,-3.0);

	glVertex2f(10.2,-3.0);
	glVertex2f(10.1,-2.9);

	glVertex2f(10.2,-2.9);
	glVertex2f(10.1,-2.8);

	glVertex2f(10.2,-2.8);
	glVertex2f(10.1,-2.7);

	glVertex2f(10.2,-2.7);
	glVertex2f(10.1,-2.6);

	glVertex2f(10.2,-2.6);
	glVertex2f(10.1,-2.5);

	glEnd();

	//wheel_right
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.8,-3.5);
	glVertex2f(10.8,-2.4);
	glVertex2f(10.9,-2.5);
	glVertex2f(10.9,-3.4);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.8,-3.4);
	glVertex2f(10.9,-3.3);

	glVertex2f(10.8,-3.3);
	glVertex2f(10.9,-3.2);

	glVertex2f(10.8,-3.2);
	glVertex2f(10.9,-3.1);

	glVertex2f(10.8,-3.1);
	glVertex2f(10.9,-3.0);

	glVertex2f(10.8,-3.0);
	glVertex2f(10.9,-2.9);

	glVertex2f(10.8,-2.9);
	glVertex2f(10.9,-2.8);

	glVertex2f(10.8,-2.8);
	glVertex2f(10.9,-2.7);

	glVertex2f(10.8,-2.7);
	glVertex2f(10.9,-2.6);

	glVertex2f(10.8,-2.6);
	glVertex2f(10.9,-2.5);

	glEnd();

	//border
	glBegin(GL_POLYGON);
    glColor3ub(100, 178, 100);

	glVertex2f(10.2,-3.4);
	glVertex2f(10.2,-2.5);
	glVertex2f(10.8,-2.5);
	glVertex2f(10.8,-3.4);

	glEnd();

	//front
	glBegin(GL_POLYGON);
    glColor3ub(108, 188, 108);

	glVertex2f(10.3,-2.6);
	glVertex2f(10.2,-2.5);
	glVertex2f(10.8,-2.5);
	glVertex2f(10.7,-2.6);

	glEnd();

	//back1
	glBegin(GL_POLYGON);
    glColor3ub(118, 186, 118);

	glVertex2f(10.2,-3.4);
	glVertex2f(10.3,-3.3);
	glVertex2f(10.7,-3.3);
	glVertex2f(10.8,-3.4);

	glEnd();

	//back1_box1
	glBegin(GL_POLYGON);
    glColor3ub(192, 223, 192);

	glVertex2f(10.3,-3.4);
	glVertex2f(10.3,-3.3);
	glVertex2f(10.4,-3.3);
	glVertex2f(10.4,-3.4);

	glEnd();

	//back1_box2
	glBegin(GL_POLYGON);
    glColor3ub(192, 223, 192);

	glVertex2f(10.6,-3.4);
	glVertex2f(10.6,-3.3);
	glVertex2f(10.7,-3.3);
	glVertex2f(10.7,-3.4);

	glEnd();

	//back2
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.3,-3.3);
	glVertex2f(10.3,-3.2);
	glVertex2f(10.7,-3.2);
	glVertex2f(10.7,-3.3);

	glEnd();

	//square1
	glBegin(GL_POLYGON);
    glColor3ub(102, 207, 102);

	glVertex2f(10.3,-3.2);
	glVertex2f(10.3,-2.9);
	glVertex2f(10.7,-2.9);
	glVertex2f(10.7,-3.2);

	glEnd();

	//square1_box1
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(10.36,-3.1);
	glVertex2f(10.36,-3);
	glVertex2f(10.44,-3);
	glVertex2f(10.44,-3.1);

	glEnd();

	//square1_box2
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(10.56,-3.1);
	glVertex2f(10.56,-3);
	glVertex2f(10.64,-3);
	glVertex2f(10.64,-3.1);

	glEnd();

	//square2
	glBegin(GL_POLYGON);
    glColor3ub( 77, 203, 77 );

	glVertex2f(10.3,-2.9);
	glVertex2f(10.3,-2.6);
	glVertex2f(10.7,-2.6);
	glVertex2f(10.7,-2.9);

	glEnd();

	//square2_box
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(10.46,-2.8);
	glVertex2f(10.46,-2.7);
	glVertex2f(10.54,-2.7);
	glVertex2f(10.54,-2.8);

	glEnd();

	//square2_bullet_left
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(10.36,-2.9);
	glVertex2f(10.36,-2.3);
	glVertex2f(10.4,-2.3);
	glVertex2f(10.4,-2.9);

	glEnd();

	//square2_bullet_right
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(10.6,-2.9);
	glVertex2f(10.6,-2.32);
	glVertex2f(10.64,-2.32);
	glVertex2f(10.64,-2.9);

	glEnd();

	//trainmiddle
	glBegin(GL_POLYGON);
    glColor3ub(211, 160, 51);

	glVertex2f(10,-6);
	glVertex2f(10,-4.2);
	glVertex2f(11.1,-4.2);
	glVertex2f(11.1,-6);

	glEnd();

    //trainfront
	glBegin(GL_POLYGON);
    glColor3ub(211, 160, 51);

	glVertex2f(10,-8.2);
	glVertex2f(10,-6.2);
	glVertex2f(11.1,-6.2);
	glVertex2f(11.1,-8.2);

	glEnd();

	//misaiel1

    //wheel_left_up
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.14,-4.92);
	glVertex2f(10.14,-4.72);
	glVertex2f(10.19,-4.72);
	glVertex2f(10.19,-4.92);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.14,-4.72);
	glVertex2f(10.19,-4.77);

	glVertex2f(10.14,-4.77);
	glVertex2f(10.19,-4.82);

	glVertex2f(10.14,-4.82);
	glVertex2f(10.19,-4.87);

	glVertex2f(10.14,-4.87);
	glVertex2f(10.19,-4.92);

	glEnd();

	//wheel_left_middle
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.14,-5.16);
	glVertex2f(10.14,-4.96);
	glVertex2f(10.19,-4.96);
	glVertex2f(10.19,-5.16);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.14,-4.96);
	glVertex2f(10.19,-5);

	glVertex2f(10.14,-5);
	glVertex2f(10.19,-5.05);

	glVertex2f(10.14,-5.05);
	glVertex2f(10.19,-5.11);

	glVertex2f(10.14,-5.11);
	glVertex2f(10.19,-5.15);

	glEnd();

	//wheel_left_down
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.14,-5.4);
	glVertex2f(10.14,-5.2);
	glVertex2f(10.19,-5.2);
	glVertex2f(10.19,-5.4);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.14,-5.2);
	glVertex2f(10.19,-5.25);

	glVertex2f(10.14,-5.25);
	glVertex2f(10.19,-5.3);

	glVertex2f(10.14,-5.3);
	glVertex2f(10.19,-5.35);

	glVertex2f(10.14,-5.35);
	glVertex2f(10.19,-5.4);

	glEnd();

	//wheel_right_up
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.8,-4.92);
	glVertex2f(10.8,-4.72);
	glVertex2f(10.85,-4.72);
	glVertex2f(10.85,-4.92);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.8,-4.72);
	glVertex2f(10.85,-4.77);

	glVertex2f(10.8,-4.77);
	glVertex2f(10.85,-4.82);

	glVertex2f(10.8,-4.82);
	glVertex2f(10.85,-4.87);

	glVertex2f(10.8,-4.87);
	glVertex2f(10.85,-4.92);

	glEnd();

	//wheel_left_middle
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.8,-5.16);
	glVertex2f(10.8,-4.96);
	glVertex2f(10.85,-4.96);
	glVertex2f(10.85,-5.16);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.8,-4.96);
	glVertex2f(10.85,-5);

	glVertex2f(10.8,-5);
	glVertex2f(10.85,-5.05);

	glVertex2f(10.8,-5.05);
	glVertex2f(10.85,-5.11);

	glVertex2f(10.8,-5.11);
	glVertex2f(10.85,-5.15);

	glEnd();

	//wheel_left_down
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(10.8,-5.4);
	glVertex2f(10.8,-5.2);
	glVertex2f(10.85,-5.2);
	glVertex2f(10.85,-5.4);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(10.8,-5.2);
	glVertex2f(10.85,-5.25);

	glVertex2f(10.8,-5.25);
	glVertex2f(10.85,-5.3);

	glVertex2f(10.8,-5.3);
	glVertex2f(10.85,-5.35);

	glVertex2f(10.8,-5.35);
	glVertex2f(10.85,-5.4);

	glEnd();


	//border_out
	glBegin(GL_POLYGON);
    glColor3ub(100, 178, 100);

	glVertex2f(10.3,-5.7);
	glVertex2f(10.2,-5.5);
	glVertex2f(10.2,-4.7);
	glVertex2f(10.3,-4.5);
	glVertex2f(10.7,-4.5);
	glVertex2f(10.8,-4.7);
	glVertex2f(10.8,-5.5);
	glVertex2f(10.7,-5.7);

	glEnd();

	//border_in
	glBegin(GL_POLYGON);
    glColor3ub(79, 173, 79);

	glVertex2f(10.4,-5.6);
	glVertex2f(10.3,-5.5);
	glVertex2f(10.3,-4.7);
	glVertex2f(10.4,-4.6);
	glVertex2f(10.6,-4.6);
	glVertex2f(10.7,-4.7);
	glVertex2f(10.7,-5.5);
	glVertex2f(10.6,-5.6);

	glEnd();

	//front
	glBegin(GL_POLYGON);
    glColor3ub(108, 188, 108);

	glVertex2f(10.4,-4.6);
	glVertex2f(10.4,-4.5);
	glVertex2f(10.6,-4.5);
	glVertex2f(10.6,-4.6);

	glEnd();

	//back_box_left
	glBegin(GL_POLYGON);
    glColor3ub(15, 108, 15);

	glVertex2f(10.4,-5.7);
	glVertex2f(10.4,-5.6);
	glVertex2f(10.45,-5.6);
	glVertex2f(10.45,-5.7);

	glEnd();

	//back_box_right
	glBegin(GL_POLYGON);
    glColor3ub(15, 108, 15);

	glVertex2f(10.55,-5.7);
	glVertex2f(10.55,-5.6);
	glVertex2f(10.6,-5.6);
	glVertex2f(10.6,-5.7);

	glEnd();

	//body_box_left_up
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.35,-5.1);
	glVertex2f(10.35,-5);
	glVertex2f(10.45,-5);
	glVertex2f(10.45,-5.1);

	glEnd();

	//body_box_left_middle
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.35,-5.25);
	glVertex2f(10.35,-5.15);
	glVertex2f(10.45,-5.15);
	glVertex2f(10.45,-5.25);

	glEnd();

	//body_box_left_down
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.35,-5.4);
	glVertex2f(10.35,-5.3);
	glVertex2f(10.45,-5.3);
	glVertex2f(10.45,-5.4);

	glEnd();

	//body_box_right_up
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.55,-5.1);
	glVertex2f(10.55,-5);
	glVertex2f(10.65,-5);
	glVertex2f(10.65,-5.1);

	glEnd();

	//body_box_right_middle
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.55,-5.25);
	glVertex2f(10.55,-5.15);
	glVertex2f(10.65,-5.15);
	glVertex2f(10.65,-5.25);

	glEnd();

	//body_box_right_down
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(10.55,-5.4);
	glVertex2f(10.55,-5.3);
	glVertex2f(10.65,-5.3);
	glVertex2f(10.65,-5.4);

	glEnd();

	//body_box_up_corner_left
	glBegin(GL_POLYGON);
    glColor3ub(67, 132, 67);

	glVertex2f(10.3,-4.97);
	glVertex2f(10.3,-4.92);
	glVertex2f(10.38,-4.92);
	glVertex2f(10.38,-4.97);

	glEnd();

	//body_box_down_corner_right
	glBegin(GL_POLYGON);
    glColor3ub(67, 132, 67);

	glVertex2f(10.6,-5.5);
	glVertex2f(10.6,-5.45);
	glVertex2f(10.65,-5.45);
	glVertex2f(10.65,-5.5);

	glEnd();

	//sixton_out
	glBegin(GL_POLYGON);
    glColor3ub(63, 156, 63);

	glVertex2f(10.4,-4.95);
	glVertex2f(10.36,-4.80);
	glVertex2f(10.4,-4.65);
	glVertex2f(10.6,-4.65);
	glVertex2f(10.64,-4.80);
	glVertex2f(10.6,-4.95);

	glEnd();

	//sixton_in
	glBegin(GL_POLYGON);
    glColor3ub(75, 175, 75 );

	glVertex2f(10.45,-4.9);
	glVertex2f(10.42,-4.80);
	glVertex2f(10.45,-4.7);
	glVertex2f(10.55,-4.7);
	glVertex2f(10.58,-4.80);
	glVertex2f(10.55,-4.9);

	glEnd();

	//sixton_box_up
	glBegin(GL_POLYGON);
    glColor3ub(9, 135, 9);

	glVertex2f(10.5,-4.8);
	glVertex2f(10.5,-4.7);
	glVertex2f(10.55,-4.7);
	glVertex2f(10.55,-4.8);

	glEnd();

	//sixton_box_down
	glBegin(GL_POLYGON);
    glColor3ub(9, 135, 9);

	glVertex2f(10.45,-4.9);
	glVertex2f(10.45,-4.8);
	glVertex2f(10.5,-4.8);
	glVertex2f(10.5,-4.9);

	glEnd();


	//bounder_left_box1
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.23,-4.9);
	glVertex2f(10.23,-4.8);
	glVertex2f(10.27,-4.8);
	glVertex2f(10.27,-4.9);

	glEnd();

	//bounder_left_box2
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.23,-4.92);
	glVertex2f(10.23,-5.02);
	glVertex2f(10.27,-5.02);
	glVertex2f(10.27,-4.92);

	glEnd();

	//bounder_left_box3
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.23,-5.17);
	glVertex2f(10.23,-5.07);
	glVertex2f(10.27,-5.07);
	glVertex2f(10.27,-5.17);


	glEnd();

	//bounder_left_box4
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.23,-5.3);
	glVertex2f(10.23,-5.2);
	glVertex2f(10.27,-5.2);
	glVertex2f(10.27,-5.3);

	glEnd();

	//bounder_right_box1
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.73,-4.9);
	glVertex2f(10.73,-4.8);
	glVertex2f(10.77,-4.8);
	glVertex2f(10.77,-4.9);

	glEnd();

	//bounder_right_box2
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.73,-4.92);
	glVertex2f(10.73,-5.02);
	glVertex2f(10.77,-5.02);
	glVertex2f(10.77,-4.92);

	glEnd();

	//bounder_right_box3
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.73,-5.17);
	glVertex2f(10.73,-5.07);
	glVertex2f(10.77,-5.07);
	glVertex2f(10.77,-5.17);


	glEnd();

	//bounder_right_box4
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(10.73,-5.3);
	glVertex2f(10.73,-5.2);
	glVertex2f(10.77,-5.2);
	glVertex2f(10.77,-5.3);

	glEnd();

	//bullet_left
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(10.45,-4.7);
	glVertex2f(10.45,-4.4);
	glVertex2f(10.47,-4.4);
	glVertex2f(10.47,-4.7);

	glEnd();

	//bullet_right
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(10.53,-4.7);
	glVertex2f(10.53,-4.3);
	glVertex2f(10.55,-4.3);
	glVertex2f(10.55,-4.7);

	glEnd();

	//circle_broader
	glBegin(GL_POLYGON);
    glColor3ub(162, 129, 78);

	glVertex2f(10.2,-7.7);
	glVertex2f(10.2,-6.4);
	glVertex2f(10.8,-6.4);
	glVertex2f(10.8,-7.7);


	glEnd();

	//circle_up
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(87, 47, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10.5,y-6.7);
    }
    glEnd();

    //circle_down
	glBegin(GL_POLYGON);

	for(int i=0;i<200;i++)
    {
        glColor3ub(87, 47, 7 );
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10.5,y-7.4);
    }
    glEnd();


    glPopMatrix();

}

void train_platform2_s()
{
    //out
    if (day)
         glColor3ub(212, 204, 188);
    else
        glColor3ub(58, 55, 45  );
    glBegin(GL_POLYGON);
    //glColor3ub(212, 204, 188);

	glVertex2f(13.2,-8);
	glVertex2f(13.2,-3.2);
	glVertex2f(16,-3.2);
	glVertex2f(16,-8);

	glEnd();

	//middle
	if (day)
         glColor3ub(153, 147, 135);
    else
        glColor3ub(108, 105, 93 );
    glBegin(GL_POLYGON);
    //glColor3ub(153, 147, 135);

	glVertex2f(13.4,-7);
	glVertex2f(13.4,-4);
	glVertex2f(13.7,-4);
	glVertex2f(13.7,-7);

	glEnd();


    //in
    if (day)
         glColor3ub(194, 182, 156);
    else
        glColor3ub(108, 105, 93 );
    glBegin(GL_POLYGON);
    //glColor3ub(194, 182, 156);

	glVertex2f(14,-7.6);
	glVertex2f(14,-3.6);
	glVertex2f(15.6,-3.6);
	glVertex2f(15.6,-7.6);

	glEnd();

    //3
    glBegin(GL_POLYGON);
    glColor3ub(216, 202, 173);

	glVertex2f(14.4,-7.2);
	glVertex2f(14.4,-6.4);
	glVertex2f(15.2,-6.4);
	glVertex2f(15.2,-7.2);

	glEnd();

    //2
    glBegin(GL_POLYGON);
    glColor3ub(216, 202, 173);

	glVertex2f(14.4,-6);
	glVertex2f(14.4,-5.2);
	glVertex2f(15.2,-5.2);
	glVertex2f(15.2,-6);

	glEnd();

    //1
    glBegin(GL_POLYGON);
    glColor3ub(216, 202, 173);

	glVertex2f(14.4,-4.8);
	glVertex2f(14.4,-4);
	glVertex2f(15.2,-4);
	glVertex2f(15.2,-4.8);

	glEnd();
}

void road_s()
{
    //broader1
    if (day)
        glColor3ub(155, 167, 155);
    else
        glColor3ub(93, 90, 82);
    glBegin(GL_POLYGON);

    //glColor3ub(155, 167, 155);

	glVertex2f(18,-10);
	glVertex2f(18,-4);
    glVertex2f(20,-4);
    glVertex2f(20,-10);

	glEnd();

	//border 2
	if (day)
        glColor3ub(155, 167, 155);
    else
        glColor3ub(93, 90, 82);
    glBegin(GL_POLYGON);
    //glColor3ub(155, 167, 155);

	glVertex2f(16,-6);
	glVertex2f(16,-4);
    glVertex2f(18,-4);
    glVertex2f(18,-6);

	glEnd();

	//middle white line
	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);

	glVertex2f(18.96,-10);
	glVertex2f(18.96,-6);
	glVertex2f(19.05,-6);
	glVertex2f(19.05,-10);

	glEnd();
}

void tank3_s()
{
    //wheel_left
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(14.32,-2.7);
	glVertex2f(14.32,-1.7);
	glVertex2f(14.4,-1.6);
	glVertex2f(14.4,-2.8);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(14.32,-2.6);
	glVertex2f(14.4,-2.6);

	glVertex2f(14.32,-2.4);
	glVertex2f(14.4,-2.4);

	glVertex2f(14.32,-2.2);
	glVertex2f(14.4,-2.2);

	glVertex2f(14.32,-2.0);
	glVertex2f(14.4,-2.0);

	glVertex2f(14.32,-1.8);
	glVertex2f(14.4,-1.8);

	glEnd();

	//wheel_right
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(15.68,-2.7);
	glVertex2f(15.68,-1.7);
	glVertex2f(15.6,-1.6);
	glVertex2f(15.6,-2.8);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(15.68,-2.6);
	glVertex2f(15.6,-2.6);

	glVertex2f(15.68,-2.4);
	glVertex2f(15.6,-2.4);

	glVertex2f(15.68,-2.2);
	glVertex2f(15.6,-2.2);

	glVertex2f(15.68,-2.0);
	glVertex2f(15.6,-2.0);

	glVertex2f(15.68,-1.8);
	glVertex2f(15.6,-1.8);

	glEnd();

	//wheel_left1
	glBegin(GL_POLYGON);
    glColor3ub(55, 122, 55);

	glVertex2f(14.4,-2.8);
	glVertex2f(14.4,-1.6);
	glVertex2f(14.6,-1.6);
	glVertex2f(14.6,-2.8);

	glEnd();

	//wheel_right1
	glBegin(GL_POLYGON);
    glColor3ub(55, 122, 55);

	glVertex2f(15.4,-2.8);
	glVertex2f(15.4,-1.6);
	glVertex2f(15.6,-1.6);
	glVertex2f(15.6,-2.8);

	glEnd();

	//border
	glBegin(GL_POLYGON);
    glColor3ub(100, 178, 100);

	glVertex2f(14.52,-2.7);
	glVertex2f(14.52,-1.7);
	glVertex2f(15.5,-1.7);
	glVertex2f(15.5,-2.7);

	glEnd();

	//front
	glBegin(GL_POLYGON);
    glColor3ub(108, 188, 108);

	glVertex2f(14.64,-1.8);
	glVertex2f(14.59,-1.7);
	glVertex2f(15.39,-1.7);
	glVertex2f(15.36,-1.8);

	glEnd();

	//back1
	glBegin(GL_POLYGON);
    glColor3ub(118, 186, 118);

	glVertex2f(14.59,-2.7);
	glVertex2f(14.64,-2.6);
	glVertex2f(15.36,-2.6);
	glVertex2f(15.40,-2.7);

	glEnd();

	//middle_up
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(14.64,-2.6);
	glVertex2f(14.64,-1.8);
	glVertex2f(15.36,-1.8);
	glVertex2f(15.36,-2.6);

	glEnd();

	//sixton_out
	glBegin(GL_POLYGON);
    glColor3ub(63, 156, 63);

	glVertex2f(14.88,-2.3);
	glVertex2f(14.59,-2.1);
	glVertex2f(14.87,-1.9);
	glVertex2f(15.12,-1.9);
	glVertex2f(15.40,-2.1);
	glVertex2f(15.13,-2.3);

	glEnd();

	//sixton_in
	glBegin(GL_POLYGON);
    glColor3ub(75, 175, 75 );

	glVertex2f(14.88,-2.2);
	glVertex2f(14.72,-2.1);
	glVertex2f(14.88,-1.96);
	glVertex2f(15.12,-1.96);
	glVertex2f(15.28,-2.1);
	glVertex2f(15.12,-2.2);

	glEnd();

	//sixton_box
	glBegin(GL_POLYGON);
    glColor3ub(9, 135, 9);

	glVertex2f(15,-2.2);
	glVertex2f(15,-2.08);
	glVertex2f(15.12,-2.08);
	glVertex2f(15.12,-2.2);

	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(15,-2.16);
	glVertex2f(15.12,-2.16);

	glVertex2f(15,-2.12);
	glVertex2f(15.12,-2.12);

	glEnd();

	//middleup_box_left_out
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(14.68,-2.6);
	glVertex2f(14.68,-2.4);
	glVertex2f(14.88,-2.4);
	glVertex2f(14.88,-2.6);

	glEnd();

	//middleup_box_left_in
	glBegin(GL_POLYGON);
    glColor3ub(129, 176, 129);

	glVertex2f(14.72,-2.56);
	glVertex2f(14.72,-2.44);
	glVertex2f(14.84,-2.44);
	glVertex2f(14.84,-2.56);

	glEnd();

	//middleup_box_right_out
	glBegin(GL_POLYGON);
    glColor3ub(36, 122, 36);

	glVertex2f(15.12,-2.6);
	glVertex2f(15.12,-2.4);
	glVertex2f(15.32,-2.4);
	glVertex2f(15.32,-2.6);

	glEnd();

	//middleup_box_right_in
	glBegin(GL_POLYGON);
    glColor3ub(129, 176, 129);

	glVertex2f(15.16,-2.56);
	glVertex2f(15.16,-2.44);
	glVertex2f(15.28,-2.44);
	glVertex2f(15.28,-2.56);

	glEnd();

	//front_bullet
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(14.96,-1.76);
	glVertex2f(14.96,-1.24);
	glVertex2f(15.04,-1.24);
	glVertex2f(15.04,-1.76);

	glEnd();

	//broader_left_cylinder
	glBegin(GL_POLYGON);
    glColor3ub(159, 186, 159);

	glVertex2f(14.48,-2.64);
	glVertex2f(14.48,-2.44);
	glVertex2f(14.6,-2.44);
	glVertex2f(14.6,-2.64);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(117, 147, 117);

	glVertex2f(14.48,-2.6);
	glVertex2f(14.6,-2.6);

	glVertex2f(14.48,-2.56);
	glVertex2f(14.6,-2.56);

	glVertex2f(14.48,-2.52);
	glVertex2f(14.6,-2.52);

	glVertex2f(14.48,-2.48);
	glVertex2f(14.6,-2.48);

	glEnd();

	//broader_right_cylinder_up
	glBegin(GL_POLYGON);
    glColor3ub(159, 186, 159);

	glVertex2f(15.4,-2.36);
	glVertex2f(15.4,-2.16);
	glVertex2f(15.51,-2.16);
	glVertex2f(15.51,-2.36);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(117, 147, 117);

	glVertex2f(15.4,-2.32);
	glVertex2f(15.51,-2.32);

	glVertex2f(15.4,-2.28);
	glVertex2f(15.51,-2.28);

	glVertex2f(15.4,-2.24);
	glVertex2f(15.51,-2.24);

	glVertex2f(15.4,-2.2);
	glVertex2f(15.51,-2.2);

	glEnd();

	//broader_right_cylinder_down
	glBegin(GL_POLYGON);
    glColor3ub(159, 186, 159);

	glVertex2f(15.4,-2.64);
	glVertex2f(15.4,-2.44);
	glVertex2f(15.51,-2.44);
	glVertex2f(15.51,-2.64);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3ub(117, 147, 117);

	glVertex2f(15.4,-2.6);
	glVertex2f(15.51,-2.6);

	glVertex2f(15.4,-2.56);
	glVertex2f(15.51,-2.56);

	glVertex2f(15.4,-2.52);
	glVertex2f(15.51,-2.52);

	glVertex2f(15.4,-2.48);
	glVertex2f(15.51,-2.48);

	glEnd();
}

void misael2_s()
{
    glColor3d(0, 0, 1);
    //glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(4,0,0);
    glTranslatef(_move1, 0.0f, 0.0f);

    //wheel_up_left
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(17.6,-1.51);
	glVertex2f(17.6,-1.44);
	glVertex2f(18,-1.44);
	glVertex2f(18,-1.51);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(17.6,-1.51);
	glVertex2f(17.7,-1.46);

	glVertex2f(17.7,-1.51);
	glVertex2f(17.8,-1.46);

	glVertex2f(17.8,-1.51);
	glVertex2f(17.9,-1.46);

	glVertex2f(17.9,-1.51);
	glVertex2f(18,-1.46);

	glEnd();

	//wheel_up_middle
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(18.1,-1.51);
	glVertex2f(18.1,-1.44);
	glVertex2f(18.5,-1.44);
	glVertex2f(18.5,-1.51);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(18.1,-1.51);
	glVertex2f(18.2,-1.46);

	glVertex2f(18.2,-1.51);
	glVertex2f(18.3,-1.46);

	glVertex2f(18.3,-1.51);
	glVertex2f(18.4,-1.46);

	glVertex2f(18.4,-1.51);
	glVertex2f(18.5,-1.46);

	glEnd();

	//wheel_up_right
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(18.6,-1.51);
	glVertex2f(18.6,-1.44);
	glVertex2f(19,-1.44);
	glVertex2f(19,-1.51);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(18.6,-1.51);
	glVertex2f(18.7,-1.46);

	glVertex2f(18.7,-1.51);
	glVertex2f(18.8,-1.46);

	glVertex2f(18.8,-1.51);
	glVertex2f(18.9,-1.46);

	glVertex2f(18.9,-1.51);
	glVertex2f(19,-1.46);

	glEnd();

	//wheel_down_left
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(17.6,-2.56);
	glVertex2f(17.6,-2.48);
	glVertex2f(18,-2.48);
	glVertex2f(18,-2.56);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(17.6,-2.56);
	glVertex2f(17.7,-2.48);

	glVertex2f(17.7,-2.56);
	glVertex2f(17.8,-2.48);

	glVertex2f(17.8,-2.56);
	glVertex2f(17.9,-2.48);

	glVertex2f(17.9,-2.56);
	glVertex2f(18,-2.48);

	glEnd();

	//wheel_down_middle
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(18.1,-2.56);
	glVertex2f(18.1,-2.48);
	glVertex2f(18.5,-2.48);
	glVertex2f(18.5,-2.56);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(18.1,-2.56);
	glVertex2f(18.2,-2.48);

	glVertex2f(18.2,-2.56);
	glVertex2f(18.3,-2.48);

	glVertex2f(18.3,-2.56);
	glVertex2f(18.4,-2.48);

	glVertex2f(18.4,-2.56);
	glVertex2f(18.5,-2.48);

	glEnd();

	//wheel_down_right
	glBegin(GL_POLYGON);
    glColor3ub(69, 88, 69);

	glVertex2f(18.6,-2.56);
	glVertex2f(18.6,-2.48);
	glVertex2f(19,-2.48);
	glVertex2f(19,-2.56);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(173, 194, 173);

	glVertex2f(18.6,-2.56);
	glVertex2f(18.7,-2.48);

	glVertex2f(18.7,-2.56);
	glVertex2f(18.8,-2.48);

	glVertex2f(18.8,-2.56);
	glVertex2f(18.9,-2.48);

	glVertex2f(18.9,-2.56);
	glVertex2f(19,-2.48);

	glEnd();

	//border_out
	glBegin(GL_POLYGON);
    glColor3ub(100, 178, 100);

	glVertex2f(17.56,-2.5);
	glVertex2f(17,-2.2);
	glVertex2f(17,-1.8);
	glVertex2f(17.6,-1.5);
	glVertex2f(19,-1.51);
	glVertex2f(19.3,-1.7);
	glVertex2f(19.3,-2.3);
	glVertex2f(19,-2.5);

	glEnd();

	//border_in
	glBegin(GL_POLYGON);
    glColor3ub(79, 173, 79);

	glVertex2f(17.6,-2.4);
	glVertex2f(17.3,-2.2);
	glVertex2f(17.3,-1.8);
	glVertex2f(17.6,-1.6);
	glVertex2f(18.9,-1.6);
	glVertex2f(19.1,-1.8);
	glVertex2f(19.1,-2.2);
	glVertex2f(18.9,-2.4);

	glEnd();

	//front
	glBegin(GL_POLYGON);
    glColor3ub(108, 188, 108);

	glVertex2f(17,-2.2);
	glVertex2f(17,-1.8);
	glVertex2f(17.3,-1.8);
	glVertex2f(17.3,-2.2);

	glEnd();

	//back_box_up
	glBegin(GL_POLYGON);
    glColor3ub(15, 108, 15);

	glVertex2f(19.1,-1.9);
	glVertex2f(19.1,-1.8);
	glVertex2f(19.3,-1.8);
	glVertex2f(19.3,-1.9);

	glEnd();

	//back_box_down
	glBegin(GL_POLYGON);
    glColor3ub(15, 108, 15);

	glVertex2f(19.1,-2.2);
	glVertex2f(19.1,-2.1);
	glVertex2f(19.3,-2.1);
	glVertex2f(19.3,-2.2);

	glEnd();

	//body_box_up_left
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.1,-1.9);
	glVertex2f(18.1,-1.7);
	glVertex2f(18.3,-1.7);
	glVertex2f(18.3,-1.9);

	glEnd();

	//body_box_up_middle
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.4,-1.9);
	glVertex2f(18.4,-1.7);
	glVertex2f(18.6,-1.7);
	glVertex2f(18.6,-1.9);

	glEnd();

	//body_box_up_right
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.7,-1.9);
	glVertex2f(18.7,-1.7);
	glVertex2f(18.9,-1.7);
	glVertex2f(18.9,-1.9);

	glEnd();

	//body_box_down_left
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.1,-2.3);
	glVertex2f(18.1,-2.1);
	glVertex2f(18.3,-2.1);
	glVertex2f(18.3,-2.3);

	glEnd();

	//body_box_down_middle
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.4,-2.3);
	glVertex2f(18.4,-2.1);
	glVertex2f(18.6,-2.1);
	glVertex2f(18.6,-2.3);

	glEnd();

	//body_box_up_right
	glBegin(GL_POLYGON);
    glColor3ub(126, 203, 126);

	glVertex2f(18.7,-2.3);
	glVertex2f(18.7,-2.1);
	glVertex2f(18.9,-2.1);
	glVertex2f(18.9,-2.3);

	glEnd();

	//body_box_up_corner_right
	glBegin(GL_POLYGON);
    glColor3ub(67, 132, 67);

	glVertex2f(18.95,-1.9);
	glVertex2f(18.95,-1.8);
	glVertex2f(19.05,-1.8);
	glVertex2f(19.05,-1.9);

	glEnd();

	//body_box_down_corner_left
	glBegin(GL_POLYGON);
    glColor3ub(67, 132, 67);

	glVertex2f(17.9,-2.3);
	glVertex2f(17.9,-2.2);
	glVertex2f(18,-2.2);
	glVertex2f(18,-2.3);

	glEnd();

	//sixton_out
	glBegin(GL_POLYGON);
    glColor3ub(63, 156, 63);

	glVertex2f(17.7,-2.3);
	glVertex2f(17.4,-2.1);
	glVertex2f(17.4,-1.9);
	glVertex2f(17.7,-1.7);
	glVertex2f(18.05,-1.9);
	glVertex2f(18.05,-2.1);

	glEnd();

	//sixton_in
	glBegin(GL_POLYGON);
    glColor3ub(75, 175, 75 );

	glVertex2f(17.7,-2.2);
	glVertex2f(17.5,-2.1);
	glVertex2f(17.5,-1.9);
	glVertex2f(17.7,-1.8);
	glVertex2f(17.96,-1.9);
	glVertex2f(17.96,-2.1);

	glEnd();

	//sixton_box_up
	glBegin(GL_POLYGON);
    glColor3ub(9, 135, 9);

	glVertex2f(17.7,-1.95);
	glVertex2f(17.7,-1.85);
	glVertex2f(17.75,-1.85);
	glVertex2f(17.75,-1.95);

	glEnd();

	//sixton_box_down
	glBegin(GL_POLYGON);
    glColor3ub(9, 135, 9);

	glVertex2f(17.55,-2.1);
	glVertex2f(17.55,-2);
	glVertex2f(17.6,-2);
	glVertex2f(17.6,-2.1);

	glEnd();


	//bounder_up_box1
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(17.75,-1.6);
	glVertex2f(17.75,-1.55);
	glVertex2f(17.9,-1.55);
	glVertex2f(17.9,-1.6);

	glEnd();

	//bounder_up_box2
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.05,-1.6);
	glVertex2f(18.05,-1.55);
	glVertex2f(18.2,-1.55);
	glVertex2f(18.2,-1.6);

	glEnd();

	//bounder_up_box3
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.35,-1.6);
	glVertex2f(18.35,-1.55);
	glVertex2f(18.5,-1.55);
	glVertex2f(18.5,-1.6);

	glEnd();

	//bounder_up_box4
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.65,-1.6);
	glVertex2f(18.65,-1.55);
	glVertex2f(18.8,-1.55);
	glVertex2f(18.8,-1.6);

	glEnd();

	//bounder_down_box1
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(17.75,-2.45);
	glVertex2f(17.75,-2.4);
	glVertex2f(17.9,-2.4);
	glVertex2f(17.9,-2.45);

	glEnd();

	//bounder_down_box2
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.05,-2.45);
	glVertex2f(18.05,-2.4);
	glVertex2f(18.2,-2.4);
	glVertex2f(18.2,-2.45);

	glEnd();

	//bounder_down_box3
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.35,-2.45);
	glVertex2f(18.35,-2.4);
	glVertex2f(18.5,-2.4);
	glVertex2f(18.5,-2.45);

	glEnd();

	//bounder_down_box4
	glBegin(GL_POLYGON);
    glColor3ub(13, 86, 13);

	glVertex2f(18.65,-2.45);
	glVertex2f(18.65,-2.4);
	glVertex2f(18.8,-2.4);
	glVertex2f(18.8,-2.45);

	glEnd();

	//bullet_up
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(16.7,-1.98);
	glVertex2f(16.7,-1.92);
	glVertex2f(17.5,-1.92);
	glVertex2f(17.5,-1.98);

	glEnd();

	//bullet_down
	glBegin(GL_POLYGON);
    glColor3ub(79, 104, 79);

	glVertex2f(17.1,-2.1);
	glVertex2f(17.1,-2.02);
	glVertex2f(17.5,-2.02);
	glVertex2f(17.5,-2.1);

	glEnd();

	glPopMatrix();
}

void rocketcar_s()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0, 0, 1);
    //glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,-4,0);
    glTranslatef(0.0f,_move2, 0.0f);

    //glRotatef(_angle1, 0.0f,-5.0f,1.0f);


    //front
	glBegin(GL_POLYGON);
    glColor3ub(36, 67, 36);

	glVertex2f(18.60,-6.4);
	glVertex2f(18.64,-6.3);
	glVertex2f(19.44,-6.3);
	glVertex2f(19.48,-6.4);

	glEnd();

	//front_light
	glBegin(GL_POLYGON);
    glColor3ub(77, 142, 77);

	glVertex2f(18.5,-6.6);
	glVertex2f(18.5,-6.4);
	glVertex2f(19.6,-6.4);
	glVertex2f(19.6,-6.6);

	glEnd();

	//front_light_left
	glBegin(GL_POLYGON);
    glColor3ub(189, 212, 189);

	glVertex2f(18.52,-6.56);
	glVertex2f(18.56,-6.44);
	glVertex2f(18.72,-6.44);
	glVertex2f(18.68,-6.56);

	glEnd();

	//front_box_left
	glBegin(GL_POLYGON);
    glColor3ub( 10, 48, 10);

	glVertex2f(18.83,-6.5);
	glVertex2f(18.8,-6.45);
	glVertex2f(19,-6.45);
	glVertex2f(19,-6.5);

	glEnd();

	//front_light_right
	glBegin(GL_POLYGON);
    glColor3ub(189, 212, 189);

	glVertex2f(19.4,-6.56);
	glVertex2f(19.36,-6.44);
	glVertex2f(19.52,-6.44);
	glVertex2f(19.56,-6.56);

	glEnd();

	//front_box_right
	glBegin(GL_POLYGON);
    glColor3ub( 10, 48, 10);

	glVertex2f(19.1,-6.5);
	glVertex2f(19.1,-6.45);
	glVertex2f(19.3,-6.45);
	glVertex2f(19.27,-6.5);

	glEnd();

	//front_wheel_left
	glBegin(GL_POLYGON);
    glColor3ub(50, 48, 48);

	glVertex2f(18.48,-7.4);
	glVertex2f(18.48,-6.81);
	glVertex2f(18.52,-6.81);
	glVertex2f(18.52,-7.4);

	glEnd();

	//front_wheel_right
	glBegin(GL_POLYGON);
    glColor3ub(50, 48, 48);

	glVertex2f(19.56,-7.4);
	glVertex2f(19.56,-6.84);
	glVertex2f(19.6,-6.84);
	glVertex2f(19.6,-7.4);

	glEnd();

	//front_body
	glBegin(GL_POLYGON);
    glColor3ub(54, 158, 54);

	glVertex2f(18.52,-7.6);
	glVertex2f(18.52,-6.68);
	glVertex2f(19.56,-6.71);
	glVertex2f(19.56,-7.6);

	glEnd();

	//front_body_box
	glBegin(GL_POLYGON);
    glColor3ub(38, 113, 38);

	glVertex2f(18.8,-7.4);
	glVertex2f(18.8,-7.2);
	glVertex2f(19.3,-7.2);
	glVertex2f(19.3,-7.4);

	glEnd();

	//front_body_rocket_left_head
	glBegin(GL_TRIANGLES);
    glColor3ub(240, 57, 82);

	glVertex2f(18.6,-7.4);
	glVertex2f(18.7,-7.04);
	glVertex2f(18.8,-7.4);

	glEnd();

	//front_body_rocket_right_head
	glBegin(GL_TRIANGLES);
    glColor3ub(240, 57, 82);

	glVertex2f(19.3,-7.4);
	glVertex2f(19.4,-7.04);
	glVertex2f(19.5,-7.4);

	glEnd();

	//front_glass
	glBegin(GL_POLYGON);
    glColor3ub( 103, 128, 103);

	glVertex2f(18.6,-7);
	glVertex2f(18.5,-6.6);
	glVertex2f(19.6,-6.6);
	glVertex2f(19.5,-7);

	glEnd();

	//left_glass_up
	glBegin(GL_POLYGON);
    glColor3ub( 98, 132, 98 );

	glVertex2f(18.52,-7.2);
	glVertex2f(18.52,-6.68);
	glVertex2f(18.58,-6.92);
	glVertex2f(18.58,-7.2);

	glEnd();

	//right_glass_up
	glBegin(GL_POLYGON);
    glColor3ub( 98, 132, 98 );

	glVertex2f(19.5,-7.2);
	glVertex2f(19.49,-6.87);
	glVertex2f(19.56,-6.71);
	glVertex2f(19.56,-7.2);

	glEnd();

	//left_glass_down
	glBegin(GL_POLYGON);
    glColor3ub( 98, 132, 98 );

	glVertex2f(18.52,-7.5);
	glVertex2f(18.52,-7.3);
	glVertex2f(18.58,-7.3);
	glVertex2f(18.58,-7.5);

	glEnd();

	//right_glass_down
	glBegin(GL_POLYGON);
    glColor3ub( 98, 132, 98 );

	glVertex2f(19.5,-7.5);
	glVertex2f(19.5,-7.3);
	glVertex2f(19.56,-7.3);
	glVertex2f(19.56,-7.5);

	glEnd();

	//small_glass_left
	glBegin(GL_POLYGON);
    glColor3ub(86, 161, 86 );

	glVertex2f(18.4,-6.8);
	glVertex2f(18.4,-6.7);
	glVertex2f(18.52,-6.68);
	glVertex2f(18.52,-6.78);

	glEnd();

	//small_glass_right
	glBegin(GL_POLYGON);
    glColor3ub(86, 161, 86 );

	glVertex2f(19.56,-6.78);
	glVertex2f(19.57,-6.68);
	glVertex2f(19.68,-6.74);
	glVertex2f(19.68,-6.8);

	glEnd();

	//middle_body
	glBegin(GL_POLYGON);
    glColor3ub(54, 158, 54);

	glVertex2f(18.46,-8.5);
	glVertex2f(18.46,-7.7);
	glVertex2f(19.6,-7.7);
	glVertex2f(19.6,-8.5);

	glEnd();

	//middle_body_box_up_out
	glBegin(GL_POLYGON);
    glColor3ub(36, 117, 56);

	glVertex2f(18.9,-8);
	glVertex2f(18.9,-7.8);
	glVertex2f(19.2,-7.8);
	glVertex2f(19.2,-8);

	glEnd();

	//middle_body_box_up_in
	glBegin(GL_POLYGON);
    glColor3ub(48, 151, 73);

	glVertex2f(18.94,-7.96);
	glVertex2f(18.94,-7.84);
	glVertex2f(19.16,-7.84);
	glVertex2f(19.16,-7.96);

	glEnd();

	//middle_body_box_down_out
	glBegin(GL_POLYGON);
    glColor3ub(36, 117, 56);

	glVertex2f(18.9,-8.4);
	glVertex2f(18.9,-8.2);
	glVertex2f(19.2,-8.2);
	glVertex2f(19.2,-8.4);

	glEnd();

	//middle_body_box_down_in
	glBegin(GL_POLYGON);
    glColor3ub(48, 151, 73);

	glVertex2f(18.94,-8.36);
	glVertex2f(18.94,-8.24);
	glVertex2f(19.16,-8.24);
	glVertex2f(19.16,-8.36);

	glEnd();

	//back_body_front
	glBegin(GL_POLYGON);
    glColor3ub(54, 158, 54);

	glVertex2f(18.8,-8.8);
	glVertex2f(18.8,-8.5);
	glVertex2f(19.3,-8.5);
	glVertex2f(19.3,-8.8);

	glEnd();

	//back_body_Black
	glBegin(GL_POLYGON);
    glColor3ub(26, 29, 27);

	glVertex2f(18.8,-9);
	glVertex2f(18.8,-8.8);
	glVertex2f(19.3,-8.8);
	glVertex2f(19.3,-9);

	glEnd();

	//back_wheel_left
	glBegin(GL_POLYGON);
    glColor3ub(50, 48, 48);

	glVertex2f(18.5,-9.1);
	glVertex2f(18.5,-8.6);
	glVertex2f(18.6,-8.6);
	glVertex2f(18.6,-9.1);

	glEnd();

	//back_wheel_right
	glBegin(GL_POLYGON);
    glColor3ub(50, 48, 48);

	glVertex2f(19.5,-9.1);
	glVertex2f(19.5,-8.6);
	glVertex2f(19.6,-8.6);
	glVertex2f(19.6,-9.1);

	glEnd();

	//back_body_tri_back
	glBegin(GL_POLYGON);
    glColor3ub(54, 158, 54);

	glVertex2f(19,-9.48);
	glVertex2f(19,-9.2);
	glVertex2f(18.8,-9);
	glVertex2f(19.28,-9);
	glVertex2f(19.08,-9.2);
	glVertex2f(19.08,-9.48);

	glEnd();

	//back_body_tri_Black
	glBegin(GL_POLYGON);
    glColor3ub(26, 29, 27);

	glVertex2f(19,-9.52);
	glVertex2f(19,-9.48);
	glVertex2f(19.1,-9.48);
	glVertex2f(19.1,-9.52);

	glEnd();

	//rocket_left_back
	glBegin(GL_POLYGON);
    glColor3ub(35, 118, 55 );


	glVertex2f(18.4,-9.6);
	glVertex2f(18.4,-9.2);
	glVertex2f(18.6,-9);
	glVertex2f(18.8,-9);
	glVertex2f(19,-9.2);
	glVertex2f(19,-9.6);
	glVertex2f(18.8,-9.4);
	glVertex2f(18.6,-9.4);

	glEnd();

	//rocket_left_body
	glBegin(GL_POLYGON);
    glColor3ub(35, 118, 55 );

	glVertex2f(18.6,-9);
	glVertex2f(18.6,-7.4);
	glVertex2f(18.8,-7.4);
	glVertex2f(18.8,-9);


	glEnd();

	//rocket_left_Black
	glBegin(GL_POLYGON);
    glColor3ub(26, 29, 27);

	glVertex2f(18.48,-9.52);
	glVertex2f(18.52,-9.48);
	glVertex2f(18.88,-9.48);
	glVertex2f(18.92,-9.52);

	glEnd();

	//rocket_right_back
	glBegin(GL_POLYGON);
    glColor3ub(35, 118, 55 );

	glVertex2f(19.08,-9.6);
	glVertex2f(19.08,-9.2);
	glVertex2f(19.28,-9);
	glVertex2f(19.5,-9);
	glVertex2f(19.68,-9.2);
	glVertex2f(19.68,-9.6);
	glVertex2f(19.5,-9.4);
	glVertex2f(19.28,-9.4);

	glEnd();

	//rocket_right_body
	glBegin(GL_POLYGON);
    glColor3ub(35, 118, 55 );

	glVertex2f(19.28,-9);
	glVertex2f(19.28,-7.4);
	glVertex2f(19.5,-7.4);
	glVertex2f(19.5,-9);


	glEnd();

	//rocket_right_Black
	glBegin(GL_POLYGON);
    glColor3ub(26, 29, 27);

	glVertex2f(19.16,-9.52);
	glVertex2f(19.2,-9.48);
	glVertex2f(19.56,-9.48);
	glVertex2f(19.6,-9.52);

	glEnd();

	//rocket_left_box_up
	glBegin(GL_POLYGON);
    glColor3ub(209, 227, 213);

	glVertex2f(18.6,-7.9);
	glVertex2f(18.6,-7.8);
	glVertex2f(18.8,-7.8);
	glVertex2f(18.8,-7.9);

	glEnd();

	//rocket_left_box_down
	glBegin(GL_POLYGON);
    glColor3ub(209, 227, 213);

	glVertex2f(18.6,-8.1);
	glVertex2f(18.6,-8);
	glVertex2f(18.8,-8);
	glVertex2f(18.8,-8.1);

	glEnd();

	//rocket_right_box_up
	glBegin(GL_POLYGON);
    glColor3ub(209, 227, 213);

	glVertex2f(19.28,-7.9);
	glVertex2f(19.28,-7.8);
	glVertex2f(19.48,-7.8);
	glVertex2f(19.48,-7.9);

	glEnd();

	//rocket_right_box_down
	glBegin(GL_POLYGON);
    glColor3ub(209, 227, 213);

	glVertex2f(19.28,-8.1);
	glVertex2f(19.28,-8);
	glVertex2f(19.48,-8);
	glVertex2f(19.48,-8.1);

	glEnd();

	//middle_body_front
	glBegin(GL_POLYGON);
    glColor3ub(60, 178, 88 );

	glVertex2f(18.8,-7.75);
	glVertex2f(18.8,-7.6);
	glVertex2f(19.28,-7.6);
	glVertex2f(19.28,-7.75);

	glEnd();


	glPopMatrix();
}

void tent_s()
{
    //left
    glBegin(GL_POLYGON);
    glColor3ub(83, 142, 24 );

	glVertex2f(11.5,-8.5);
	glVertex2f(12,-8);
	glVertex2f(13,-9);
	glVertex2f(12.5,-9.5);

	glEnd();

	glLineWidth(1.7);
	glBegin(GL_LINES);
    glColor3ub(76, 95, 58);

	glVertex2f(11.2,-8.5);
	glVertex2f(12,-8.5);
	glVertex2f(12,-8.5);
	glVertex2f(12,-7.7);
	glVertex2f(12,-8.5);
	glVertex2f(12.5,-9);
	glVertex2f(12.5,-9);
	glVertex2f(12.5,-9.8);
	glVertex2f(12.5,-9);
	glVertex2f(13.3,-9);

	glEnd();

	//right
    glBegin(GL_POLYGON);
    glColor3ub(113, 179, 48);

	glVertex2f(15.5,-9);
	glVertex2f(16.5,-8);
	glVertex2f(17,-8.5);
	glVertex2f(16,-9.5);

	glEnd();

	glLineWidth(1.5);
	glBegin(GL_LINES);
    glColor3ub(118, 137, 100 );

	glVertex2f(15.2,-9);
	glVertex2f(16,-9);
	glVertex2f(16,-9);
	glVertex2f(16.5,-8.5);
	glVertex2f(16.5,-8.5);
	glVertex2f(16.5,-7.7);
	glVertex2f(16.5,-8.5);
	glVertex2f(17.3,-8.5);
	glVertex2f(16,-9);
	glVertex2f(16,-9.8);

	glEnd();

}



void display1()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-84,27,0);
    glScalef(5.4,2.51,0);
	broader_s();
    train_platform1_s();
    rail_line1_s();
    rail_line2_s();
    rail_line3_s();
    tree_s();
    rail_line4_s();
    train_platform2_s();
    road_s();
    tank3_s();
    misael2_s();
    rocketcar_s();
    tent_s();
    glLineWidth(2);
	rain_s(10);
    glFlush();
    glPopMatrix();


}

void update_s(int value)
{
    train1 += 0.02;
    if (train1 >8)
    {
        train1 = -8;
    }
    glutPostRedisplay();
    glutTimerFunc(35, update_s, 0);
}


void update1_s(int value)
{
    train2 -= 0.02;
    if (train2 <-8)
    {
        train2 = 6;
    }

    glutPostRedisplay();
    glutTimerFunc(57, update1_s, 0);
}

void update2_s(int value)
{
    _move2 += rocket;
    if (_move2 >6.5)
    {
        misaelstatus=1;
        rocket = 0;
    }
    glutPostRedisplay();
    glutTimerFunc(57, update2_s, 0);
}

void update3_s(int value)
{
    if(misaelstatus==1)
    {
    _move1 -= misael;
    if (_move1 <-4)
    {

        misael = 0;
    }

    }
    glutPostRedisplay();
    glutTimerFunc(10, update3_s, 0);
}




//----------------------------------------------------------Jobaer function------------------------------------------


void bridge_land_t()                                //approach road and bridge land right side
{

   // glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    //glTranslatef(_move, 0.0f, 0.0f);
    //rail line
    glColor3ub(120, 129, 122);
    glBegin(GL_POLYGON);
    glVertex2f(25.7,3.35);
    glVertex2f(25.7,3);
    glVertex2f(15.6,3.0);
    glVertex2f(15.6,3.2);
    glEnd();

    glColor3ub(169, 162, 157);
    glBegin(GL_POLYGON);
    glVertex2f(26.0,2.1);
    glVertex2f(25.7,3);
    glVertex2f(15.6,3.0);
    glVertex2f(14.8,2.1);
    glEnd();

    glColor3ub(146, 94, 58);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(25.7,3);
    glVertex2f(25.6,3.35);

    glVertex2f(25.2,3);
    glVertex2f(25.1,3.35);

    glVertex2f(24.7,3);
    glVertex2f(24.6,3.32);

    glVertex2f(24.2,3);
    glVertex2f(24.1,3.31);

    glVertex2f(23.6,3.3);
    glVertex2f(23.7,3);

     glVertex2f(23.2,3);
    glVertex2f(23.1,3.31);

    glVertex2f(22.6,3.3);
    glVertex2f(22.7,3);

     glVertex2f(22.2,3);
    glVertex2f(22.1,3.31);

    glVertex2f(21.6,3.3);
    glVertex2f(21.7,3);

     glVertex2f(21.2,3);
    glVertex2f(21.1,3.29);

    glVertex2f(20.6,3.28);
    glVertex2f(20.7,3);

     glVertex2f(20.2,3);
    glVertex2f(20.1,3.28);

    glVertex2f(19.6,3.28);
    glVertex2f(19.7,3);

     glVertex2f(19.2,3);
    glVertex2f(19.1,3.27);

    glVertex2f(18.6,3.26);
    glVertex2f(18.7,3);

     glVertex2f(18.2,3);
    glVertex2f(18.1,3.25);

    glVertex2f(17.6,3.24);
    glVertex2f(17.7,3);

     glVertex2f(17.2,3);
    glVertex2f(17.1,3.235);

    glVertex2f(16.6,3.23);
    glVertex2f(16.7,3);

     glVertex2f(16.2,3);
    glVertex2f(16.1,3.235);

    glVertex2f(15.6,3.22);
    glVertex2f(15.7,3);
    glEnd();


    glColor3ub(46, 22, 6);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(25.7,3.30);
    glVertex2f(15.6,3.145);

    glVertex2f(25.7,3.07);
    glVertex2f(15.6,3.06);
    glEnd();


    glPopMatrix();
}


void sky_t()                         //day sky
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();
    glPushMatrix();



    glColor3ub(179, 240, 255);
    glBegin(GL_POLYGON);
    glVertex2f(25.7,25);
    glVertex2f(25.7,16);
    glVertex2f(-80,16);
    glVertex2f(-80,25);
    glColor3ub(255,255,250);
    glVertex2f(-80,22);
    glColor3ub(255,255,255);
    glVertex2f(-80,15);
    glColor3ub(150,255,255);
    glVertex2f(15,14);
    glEnd();
    glPopMatrix();


}

void night_sky_t()                  //night sky
{
    if(nightstatus_t)
    {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glMatrixMode(GL_MODELVIEW);
        //glLoadIdentity();
        glPushMatrix();
        glColor3ub(255, 255, 10);
        glBegin(GL_POLYGON);
        glVertex2f(25.7,25);
        glVertex2f(25.7,16);
        glVertex2f(-80,16);
        glVertex2f(-80,25);
        glColor3ub(120,120,120);
        glVertex2f(-80,15);
        glColor3ub(220,220,220);
        glVertex2f(-80,15);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-58.3,y+20.94);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-55.66,y+22.49);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-54.53,y+19.6);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-48.66,y+21.07);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-44,y+22);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-42.93,y+21);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-40,y+22);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-36.33,y+23.51);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-33.71,y+22.4);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-36.3,y+20);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-31.05,y+19.76);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-23.66,y+22.68);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.3,y+21.95);
        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16,y+20);
        }
        glEnd();

        glPopMatrix();
    }
}
void cloud_t(float x,float y)       //cloud
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(_move_cloud_t,0,0);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    if(nightstatus_t)
        glColor3ub(46, 46, 31);
    else
        glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
    {

        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+24.78,y+22);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.63;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+23.98,y+21.76);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.38;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+24,y+22.5);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.69;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+23,y+22);
    }
	glEnd();
    glPopMatrix();
}

void sun_t()                        //sun
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    if(nightstatus_t)
        glColor3ub(255,255,255);
    else
        glColor3ub(255, 255, 26);
	for(int i=0;i<200;i++)
    {

        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-76,y+23.5);
    }
	glEnd();
    glPopMatrix();
}

void boat_t(float x,float y,float z)  //boat
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(z,z,0);
    glColor3ub(131, 104, 12);
    glBegin(GL_POLYGON);
    glVertex2f(-10.42,5.87);
    glVertex2f(-10.05,5.7);
    glVertex2f(-9.72,5.58);
    glVertex2f(-7.08,5.6);
    glVertex2f(-6.84,6.61);
    glVertex2f(-7.66,6.51);
    glVertex2f(-8.59,6.46);
    glVertex2f(-9.72,6.46);
    glVertex2f(-11.06,6.53);
    glVertex2f(-10.73,6.13);
    glEnd();

    glColor3ub(115, 115, 115);
    glBegin(GL_POLYGON);
    glVertex2f(-9.02,6.46);
    glVertex2f(-8.79,6.46);
    glVertex2f(-8.8,8.8);
    glVertex2f(-8.98,8.8);
    glEnd();

    glColor3ub(0, 128, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-8.48,7.34);
    glVertex2f(-8.23,7.35);
    glVertex2f(-7.98,7.34);
    glVertex2f(-8,7.5);
    glVertex2f(-8.06,7.72);
    glVertex2f(-8.26,8);
    glVertex2f(-8.49,8.2);
    glVertex2f(-8.8,8.44);
    glVertex2f(-8.79,7.19);
    glVertex2f(-8.67,7.29);

    glEnd();

    glColor3ub(179, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-9.59,6.95);
    glVertex2f(-9.85,6.91);
    glVertex2f(-10.2,6.81);
    glVertex2f(-10.41,6.76);
    glVertex2f(-10.18,7.28);
    glVertex2f(-9.7,8.05);
    glVertex2f(-9.4,8.39);
    glVertex2f(-8.98,8.7);
    glVertex2f(-9.01,6.88);
    glVertex2f(-9.31,6.95);
    glEnd();
    glPopMatrix();
}

void tree_t(float x,float y,float z)    //tree
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x, y, 0.0f);
    glScalef(z,z,0);
    //tree
    glColor3ub(131, 104, 12);
    glBegin(GL_POLYGON);
    glVertex2f(15.7,4.03);
    glVertex2f(15.45,3.6);
    glVertex2f(16.42,3.6);
    glVertex2f(16.24,3.99);
    glVertex2f(16.24,4.65);
    glVertex2f(15.7,4.65);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(20, 122, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15.19,y+4.62);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(13, 110, 38);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15.5,y+5);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(13, 110, 38);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+16,y+5);
    }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(21, 116, 45);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+16.68,y+4.8);
    }
	glEnd();

    glPopMatrix();
}

void paddy_field_t()                //paddy fiels
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_t)
        glColor3ub(0, 128, 0);
    else
        glColor3ub(0, 230, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-62,8);
    glVertex2f(-48,16);
    glVertex2f(-80,16);
    glVertex2f(-80,6);
    glVertex2f(-64,6);
    glEnd();
    glPopMatrix();

    glColor3ub(77, 51, 25);
    glBegin(GL_LINES);
    glVertex2f(-62,8);
    glVertex2f(-48,16);


    glVertex2f(-80,6);
    glVertex2f(-64,6);

    glVertex2f(-64,6);
    glVertex2f(-62,8);

    glVertex2f(-80,12);
    glVertex2f(-54.9,12);

    glVertex2f(-80,8);
    glVertex2f(-62,8);

    glVertex2f(-56,16);
    glVertex2f(-54.9,12);

    glVertex2f(-60,16);
    glVertex2f(-59.98,9.16);

    glVertex2f(-64,16);
    glVertex2f(-64,6);

    glVertex2f(-68,16);
    glVertex2f(-68,6);

    glVertex2f(-72,16);
    glVertex2f(-72,6);

    glVertex2f(-76,16);
    glVertex2f(-76,6);

    glVertex2f(-80,10);
    glVertex2f(-60,10);
    glEnd();
    glPopMatrix();


}

void river_t()              //river
{
    //river bank
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_t)
        glColor3ub(0, 68, 102);
    else
        glColor3ub(81, 193, 189);
    glBegin(GL_POLYGON);
    glVertex2f(-5.76,6.79);
    glVertex2f(-6.45,7.86);
    glVertex2f(-20.76,16);
    glVertex2f(-44.67,16);
    glVertex2f(-60.22,7.17);
    glVertex2f(-62,5);
    glVertex2f(-64.69,3.62);
    glVertex2f(2.58,3.62);

    //
    glVertex2f(0.29,4.81);

//    glColor3ub(128,255,255);
//    //glVertex2f(-44.67,16);
//    glColor3ub(128,255,255);
//    glVertex2f(-64.69,3.62);
//    glColor3ub(128,255,255);
//    glVertex2f(2.58,3.62);

    glEnd();

    glColor3ub(120, 129, 122);
    glBegin(GL_POLYGON);
    glVertex2f(-20.77,16);
    glVertex2f(-19.64,16);
    glVertex2f(-5.73,8.46);
    glVertex2f(-6.45,7.86);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-5.73,8.46);
    glVertex2f(-6.45,7.86);
    glVertex2f(-5.76,6.79);
    glVertex2f(-5,7.43);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-5.76,6.79);
    glVertex2f(-5,7.43);
    glVertex2f(0.95,5.50);
    glVertex2f(0.29,4.81);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.95,5.50);
    glVertex2f(0.29,4.81);
    glVertex2f(5.34,2.19);
    glVertex2f(5.88,2.9);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.34,2.19);
    glVertex2f(5.88,2.9);
    glVertex2f(13.38,0);
    glVertex2f(11.36,0);
    glEnd();

    //leftside riverbank
    glBegin(GL_POLYGON);
    glVertex2f(-46,16);
    glVertex2f(-44.67,16);
    glVertex2f(-60.22,7.17);
    glVertex2f(-60.49,7.81);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-60.22,7.17);
    glVertex2f(-60.49,7.81);
    glVertex2f(-62.36,5.62);
    glVertex2f(-62,5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-62.36,5.62);
    glVertex2f(-62,5);
    glVertex2f(-71.76,0);
    glVertex2f(-73.06,0);
    glEnd();
    glPopMatrix();
}

void river_down_t()         //river down portion
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_t)
        glColor3ub(0, 68, 102);
    else
        glColor3ub(81, 193, 189);
    glBegin(GL_POLYGON);
    glVertex2f(-71.76,0);
    glVertex2f(11.36,0);
    glVertex2f(2.58,3.62);
    glVertex2f(-64.69,3.62);
    glEnd();
    glPopMatrix();
}
void land_t()               //land
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_t)
    glColor3ub(153, 115, 0);
    else
    glColor3ub(248, 240, 212);
    //rightside land
    glBegin(GL_POLYGON);
    glVertex2f(0.67,5.5);
    glVertex2f(-5,7.43);
    glVertex2f(-5.73,8.46);
    glVertex2f(-19.64,16);
    glVertex2f(25.7,16);
    glVertex2f(25.7,0);
    glVertex2f(13.38,0);
    glVertex2f(5.88,2.9);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-62.36,5.62);
    glVertex2f(-60.49,7.81);
    glVertex2f(-46,16);
    glVertex2f(-80,16);
    glVertex2f(-80,0);
    glVertex2f(-73.06,0);
    glEnd();

    glPopMatrix();
}

void bridge_span1_t()       //bridge span land
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glColor3ub(141, 60, 34);
    /*glBegin(GL_POLYGON);
    glVertex2f(15.6,3.0);
    glVertex2f(15.6,3.2);
    glVertex2f(-20,3.2);
    glVertex2f(-20,3);
    glEnd();

    glColor3ub(46, 22, 6);
    glLineWidth(2);
    glBegin(GL_LINES); //bridge railline
    glVertex2f(15.6,3.05);
    glVertex2f(-20,3.05);

    glVertex2f(15.6,3.15);//bridge body
    glVertex2f(-20,3.15);
    glEnd();*/

    glBegin(GL_POLYGON);
    glVertex2f(15.6,3.0);
    glVertex2f(15.6,3.2);
    glVertex2f(8,3.2);
    glVertex2f(8,3);
    glEnd();

    glColor3ub(46, 22, 6);
    glLineWidth(2);
    glBegin(GL_LINES); //bridge railline
    glVertex2f(15.6,3.05);
    glVertex2f(8,3.05);

    glVertex2f(15.6,3.15);//bridge body
    glVertex2f(8,3.15);
    glEnd();

    //no.1 span
    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(8.85,3.65);
    glVertex2f(8.92,3.56);
    glVertex2f(8.56,3.2);
    glVertex2f(8.36,3.2);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(13.02,3.55);
    glVertex2f(13.27,3.2);
    glVertex2f(13.47,3.2);
    glVertex2f(13.14,3.65);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(13.02,3.55);
    glVertex2f(13.14,3.65);
    glVertex2f(11.95,3.89);
    glVertex2f(11.95,3.77);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(11.95,3.89);
    glVertex2f(11.95,3.77);
    glVertex2f(9.79,3.76);
    glVertex2f(9.78,3.88);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(9.79,3.76);
    glVertex2f(9.78,3.88);
    glVertex2f(8.85,3.65);
    glVertex2f(8.92,3.56);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(8.91,3.57);
    glVertex2f(8.92,3.20);

    glVertex2f(9.28,3.20);
    glVertex2f(9.01,3.58);

    glVertex2f(9.28,3.20);
    glVertex2f(9.31,3.66);

    glVertex2f(9.63,3.20);
    glVertex2f(9.31,3.66);

    glVertex2f(9.73,3.20);
    glVertex2f(9.79,3.77);

    glVertex2f(9.79,3.77);
    glVertex2f(10.12,3.20);

    glVertex2f(10.12,3.20);
    glVertex2f(10.13,3.76);

    glVertex2f(10.13,3.76);
    glVertex2f(10.54,3.20);

    glVertex2f(10.54,3.20);
    glVertex2f(10.55,3.76);

    glVertex2f(10.55,3.76);
    glVertex2f(11.02,3.22);

    glVertex2f(11.02,3.76);
    glVertex2f(11.02,3.20);

    glVertex2f(11.02,3.76);
    glVertex2f(11.5,3.20);

    glVertex2f(11.5,3.20);
    glVertex2f(11.51,3.76);

    glVertex2f(11.94,3.20);
    glVertex2f(11.51,3.76);

    glVertex2f(11.94,3.20);
    glVertex2f(11.95,3.77);

    glVertex2f(11.95,3.77);
    glVertex2f(12.37,3.20);

    glVertex2f(12.37,3.20);
    glVertex2f(12.57,3.64);

    glVertex2f(12.57,3.64);
    glVertex2f(12.73,3.20);

    glVertex2f(12.73,3.20);
    glVertex2f(13.02,3.56);

    glVertex2f(13.02,3.56);
    glVertex2f(13.06,3.20);
    glEnd();
    glPopMatrix();




}
void bridge_span2_t(float x)        //bridge span water
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(14,3.0);
    glVertex2f(14,3.2);
    glVertex2f(8,3.2);
    glVertex2f(8,3);
    glEnd();

    glColor3ub(46, 22, 6);
    glLineWidth(2);
    glBegin(GL_LINES); //bridge railline
    glVertex2f(14,3.05);
    glVertex2f(8,3.05);

    glVertex2f(14,3.15);//bridge body
    glVertex2f(8,3.15);
    glEnd();
    //no.2 span
    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(8.85,3.65);
    glVertex2f(8.92,3.56);
    glVertex2f(8.56,3.2);
    glVertex2f(8.36,3.2);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(13.02,3.55);
    glVertex2f(13.27,3.2);
    glVertex2f(13.47,3.2);
    glVertex2f(13.14,3.65);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(13.02,3.55);
    glVertex2f(13.14,3.65);
    glVertex2f(11.95,3.89);
    glVertex2f(11.95,3.77);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(11.95,3.89);
    glVertex2f(11.95,3.77);
    glVertex2f(9.79,3.76);
    glVertex2f(9.78,3.88);
    glEnd();

    glColor3ub(141, 60, 34);
    glBegin(GL_POLYGON);
    glVertex2f(9.79,3.76);
    glVertex2f(9.78,3.88);
    glVertex2f(8.85,3.65);
    glVertex2f(8.92,3.56);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(8.91,3.57);
    glVertex2f(8.92,3.20);

    glVertex2f(9.28,3.20);
    glVertex2f(9.01,3.58);

    glVertex2f(9.28,3.20);
    glVertex2f(9.31,3.66);

    glVertex2f(9.63,3.20);
    glVertex2f(9.31,3.66);

    glVertex2f(9.73,3.20);
    glVertex2f(9.79,3.77);

    glVertex2f(9.79,3.77);
    glVertex2f(10.12,3.20);

    glVertex2f(10.12,3.20);
    glVertex2f(10.13,3.76);

    glVertex2f(10.13,3.76);
    glVertex2f(10.54,3.20);

    glVertex2f(10.54,3.20);
    glVertex2f(10.55,3.76);

    glVertex2f(10.55,3.76);
    glVertex2f(11.02,3.22);

    glVertex2f(11.02,3.76);
    glVertex2f(11.02,3.20);

    glVertex2f(11.02,3.76);
    glVertex2f(11.5,3.20);

    glVertex2f(11.5,3.20);
    glVertex2f(11.51,3.76);

    glVertex2f(11.94,3.20);
    glVertex2f(11.51,3.76);

    glVertex2f(11.94,3.20);
    glVertex2f(11.95,3.77);

    glVertex2f(11.95,3.77);
    glVertex2f(12.37,3.20);

    glVertex2f(12.37,3.20);
    glVertex2f(12.57,3.64);

    glVertex2f(12.57,3.64);
    glVertex2f(12.73,3.20);

    glVertex2f(12.73,3.20);
    glVertex2f(13.02,3.56);

    glVertex2f(13.02,3.56);
    glVertex2f(13.06,3.20);
    glEnd();
    glPopMatrix();
}

void left_bridge_approachroad_t()       //approachroad left
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    //glTranslatef(x,0,0);
    glColor3ub(120, 129, 122);
    glBegin(GL_POLYGON);
    glVertex2f(-80,3.1);
    glVertex2f(-80,2.2);
    glVertex2f(-69.38,2.18);
    glVertex2f(-70.09,3.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(141, 60, 34);
    glVertex2f(-70.09,3);
    glVertex2f(-70.09,3.2);
    glVertex2f(-68.8,3.2);
    glVertex2f(-68.8,3);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-68.8,3.17);
    glVertex2f(-80,3.25);

    glVertex2f(-68.8,3.1);
    glVertex2f(-80,3.1);
    glEnd();
    glPopMatrix();
}

void piller_t(float x)              //piller
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.4,0,0);
    glColor3ub(46, 22, 6);
    glBegin(GL_POLYGON);
    glVertex2f(14.2,2.6);
    glVertex2f(14.2,2.12);
    glVertex2f(13.14,2.12);
    glVertex2f(13.14,2.6);
    glEnd();
    glColor3ub(46, 22, 6);
    glBegin(GL_POLYGON);
    glVertex2f(13.48,3.04);
    glVertex2f(13.81,3.04);
    glVertex2f(13.81,2.6);
    glVertex2f(13.48,2.6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x,0,0);
    glColor3ub(46, 22, 6);
    glBegin(GL_POLYGON);
    glVertex2f(14.2,2.6);
    glVertex2f(14.2,2.12);
    glVertex2f(13.14,2.12);
    glVertex2f(13.14,2.6);
    glEnd();
    glColor3ub(46, 22, 6);
    glBegin(GL_POLYGON);
    glVertex2f(13.48,3.04);
    glVertex2f(13.81,3.04);
    glVertex2f(13.81,2.6);
    glVertex2f(13.48,2.6);
    glEnd();
    glPopMatrix();


}

void far_village_t(float x,float y)         //far village
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3ub(0, 102, 34);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+25.16,y+16 );
    }

    for(int i=0;i<200;i++)
    {
        glColor3ub(0, 102, 34);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.78;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+23.79,y+16 );
    }

    for(int i=0;i<200;i++)
    {
        glColor3ub(0, 102, 34);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+22.5,y+16 );
    }

    for(int i=0;i<200;i++)
    {
        glColor3ub(0, 102, 34);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+21.5,y+16 );
    }

    for(int i=0;i<200;i++)
    {
        glColor3ub(0, 102, 34);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+20.5,y+16 );
    }
    glEnd();

    if(nightstatus_t)
    glColor3ub(153, 115, 0);
    else
    glColor3ub(248, 240, 212);
    glBegin(GL_POLYGON);
    glVertex2f(19.81,16);
    glVertex2f(19.81,14.88);
    glVertex2f(26,14.86);
    glVertex2f(26,16);
    glEnd();
    glPopMatrix();
}

void fighter_jet_t()            //fighter jet
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_jet_x_t,_move_jet_y_t, 0.0f);
    glBegin(GL_POLYGON);

    glVertex2f(13.45,22.1);
    glVertex2f(13.67,22.2);
    glVertex2f(14,23);
    glVertex2f(14.14,23.03);
    glVertex2f(14.17,22.41);
    glVertex2f(14.47,22.36);
    glVertex2f(14.34,22.08);
    glVertex2f(14.91,21.75);
    glVertex2f(14.81,21.62);
    glVertex2f(13.95,21.74);
    glVertex2f(13.74,21.6);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(11.54,20.39);
    glVertex2f(11.26,20.25);
    glVertex2f(10.93,20.09);
    glVertex2f(10.49,19.91);
    glVertex2f(10.11,19.81);
    glVertex2f(10.38,20.09);
    glVertex2f(10.75,20.38);
    glVertex2f(11.06,20.61);
    glVertex2f(11.33,20.8);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.5,20.79);
    glVertex2f(11.65,20.24);
    glVertex2f(11.24,20.96);
    glVertex2f(12.13,21.42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(12.3,22.86);
    glVertex2f(11.65,22.71);
    glVertex2f(13.07,23.55);
    glVertex2f(12.93,23.35);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(14.6,20.56);
    glVertex2f(14.81,20.56);
    glVertex2f(13.4,19.76);
    glVertex2f(13.82,20.26);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(12.13,21.42);
    glVertex2f(12.3,22.86);
    glVertex2f(12.93,23.35);
    glVertex2f(13.45,22.1);
    glVertex2f(13.74,21.6);
    glVertex2f(14.6,20.56);
    glVertex2f(13.82,20.26);
    glVertex2f(12.5,20.79);
    glEnd();


    glPopMatrix();
}

void tent_t(float x,float y,float s)        //tent
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glScalef(s,s,0);



    glColor3ub(140, 140, 140);
    glBegin(GL_POLYGON);
    glVertex2f(-2.36,14.88);
    glVertex2f(-0.83,14.74);
    glVertex2f(0.67,14.73);
    glVertex2f(1.89,13.28);
    glVertex2f(1.56,13.25);
    glVertex2f(0.17,13.35);
    glVertex2f(-1.01,13.25);
    //glVertex2f(-1.01,13.25);
    glEnd();

    glColor3ub(140, 140, 140);
    glBegin(GL_POLYGON);
    glVertex2f(0.17,13.35);
    glVertex2f(1.56,13.25);
    glVertex2f(1.98,11.36);
    glVertex2f(-0.99,11.38);
    glVertex2f(-1.01,13.25);
    glEnd();

    glColor3ub(140, 140, 140);
    glBegin(GL_POLYGON);
    glVertex2f(-3,14);
    glVertex2f(-2.36,14.88);
    glVertex2f(-1.8,13.97);
    glVertex2f(-1.01,13.25);
    glVertex2f(-3.43,13.29);
    glVertex2f(-3.66,13.32);
    glEnd();

    glColor3ub(140, 140, 140);
    glBegin(GL_POLYGON);
    glVertex2f(-3.43,13.29);
    glVertex2f(-1.01,13.25);
    glVertex2f(-0.99,11.38);
    glVertex2f(-3.65,11.39);
    glEnd();

    if(nightstatus_t)
    glColor3ub(255, 198, 26);
    else
    glColor3ub(77, 77, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-2.6,13.08);
    glVertex2f(-2.83,12.31);
    glVertex2f(-3.2,11.4);
    glVertex2f(-1.57,11.39);
    glVertex2f(-2.03,12.38);
    glVertex2f(-2.23,13.05);
    glVertex2f(-2.46,14.07);
    glVertex2f(-2.6,13.08);
    glEnd();

    glColor3ub(57, 38, 19);
    glBegin(GL_LINES);
    glVertex2f(-3.66,13.32);
    glVertex2f(-4.46,11.54);

    glVertex2f(-1.01,13.25);
    glVertex2f(-0.08,11.56);

    glVertex2f(1.89,13.28);
    glVertex2f(2.63,11.49);
    glEnd();

     glColor3ub(115, 77, 38);
     //glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.01,11.72);
    glVertex2f(-0.16,11.38);

    glVertex2f(-4.59,11.68);
    glVertex2f(-4.32,11.38);

    glVertex2f(2.69,11.63);
    glVertex2f(2.53,11.32);
    glEnd();

    if(nightstatus_t)
    glColor3ub(255, 198, 26);
    else
    glColor3ub(77, 77, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.47,12.94);
    glVertex2f(0,12.92);
    glVertex2f(0.01,12.39);
    glVertex2f(-0.45,12.41);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.77,12.92);
    glVertex2f(1.28,12.94);
    glVertex2f(1.31,12.41);
    glVertex2f(0.79,12.38);
    glEnd();


    glPopMatrix();
}

void hut_t(float x, float y,float z)        //hut
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(z,z,0);
    glTranslatef(x, y, 0.0f);
    glColor3ub(26,26,0);
    glBegin(GL_POLYGON);
    glVertex2f(15,14);
    glVertex2f(22,14);
    glVertex2f(23,13);
    glVertex2f(16,13);
    glEnd();

    glColor3ub(195, 142, 85);
    glBegin(GL_POLYGON);
    glVertex2f(15,14);
    glVertex2f(16,13);
    glVertex2f(14,13);
    glEnd();

    glColor3ub(153, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(16,13);
    glVertex2f(23,13);
    glVertex2f(23,10);
    glVertex2f(16,10);
    glEnd();

    //glColor3ub();
    glBegin(GL_POLYGON);
    glVertex2f(16,13);
    glVertex2f(14,13);
    glVertex2f(14,10.22);
    glVertex2f(16,10);
    glEnd();

    glColor3ub(198, 140, 83);
    glBegin(GL_POLYGON);
    glVertex2f(18.9,11.81);
    glVertex2f(20.4,11.83);
    glVertex2f(20.42,10.67);
    glVertex2f(18.99,10.69);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(14.59,11.6);
    glVertex2f(15.39,11.6);
    glVertex2f(15.39,10.6);
    glVertex2f(14.59,10.69);
    glEnd();

    glColor3ub(77,77,0);
    glBegin(GL_LINES);
    glVertex2f(15,14);
    glVertex2f(14,13);

    glVertex2f(15,14);
    glVertex2f(16,13);

    glVertex2f(16,13);
    glVertex2f(23,13);

    glVertex2f(23,13);
    glVertex2f(22,14);

    glVertex2f(22,14);
    glVertex2f(15,14);

    glVertex2f(23,13);
    glVertex2f(23,10);

    glVertex2f(23,10);
    glVertex2f(16,10);

    glVertex2f(16,10);
    glVertex2f(16,13);

    glVertex2f(16,10);
    glVertex2f(14,10.22);

    glVertex2f(14,13);
    glVertex2f(14,10.22);

    glEnd();

    glPopMatrix();
}

void train_engine_t()              // train engine
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t,0,0);
    glColor3ub(0, 82, 204);
    glBegin(GL_POLYGON);
    glVertex2f(17.27,3.34);
    glVertex2f(17.41,3.52);
    glVertex2f(17.52,3.56);
    glVertex2f(17.73,3.68);
    glVertex2f(19.19,3.67);
    glVertex2f(19.19,3.28);
    glVertex2f(19.08,3.28);
    glVertex2f(19.05,3.32);
    glVertex2f(18.67,3.33);
    glVertex2f(18.64,3.33);
    glVertex2f(17.83,3.28);
    glVertex2f(17.81,3.32);
    glVertex2f(17.43,3.32);
    glVertex2f(17.39,3.28);
    glVertex2f(17.13,3.28);
    glVertex2f(17.11,3.32);
    glEnd();

    glColor3ub(242, 242, 242);
    glBegin(GL_POLYGON);
    glVertex2f(17.71,3.62);
    glVertex2f(17.84,3.62);
    glVertex2f(17.78,3.57);
    glVertex2f(17.6,3.56);
    glEnd();

    glColor3ub(242, 242, 242);
    glBegin(GL_POLYGON);
    glVertex2f(19.06,3.6);
    glVertex2f(19.06,3.5);
    glVertex2f(18,3.5);
    glVertex2f(18.07,3.6);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(18.26,3.6);
    glVertex2f(18.26,3.5);

    glVertex2f(18.46,3.5);
    glVertex2f(18.46,3.6);

    glVertex2f(18.66,3.5);
    glVertex2f(18.66,3.6);

    glVertex2f(18.86,3.5);
    glVertex2f(18.86,3.6);
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    //glTranslatef(15.6, 4.8f, 0.0f);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(17.47,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(17.6,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(17.74,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(18.73,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(18.87,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(19,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();



}

void train_body_t(float x)          //train body
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t,0,0);
    glColor3ub(0, 82, 204);
    glBegin(GL_POLYGON);
    glVertex2f(19.23,3.67);
    glVertex2f(19.23,3.28);
    glVertex2f(19.35,3.28);
    glVertex2f(19.37,3.32);
    glVertex2f(19.67,3.32);
    glVertex2f(19.79,3.28);
    glVertex2f(20.8,3.28);
    glVertex2f(20.83,3.32);
    glVertex2f(21.21,3.32);
    glVertex2f(21.24,3.28);
    glVertex2f(21.36,3.28);
    glVertex2f(21.36,3.67);
    glEnd();

    glColor3ub(242, 242, 242);
    glBegin(GL_POLYGON);
    glVertex2f(19.4,3.6);
    glVertex2f(19.4,3.51);
    glVertex2f(21.19,3.51);
    glVertex2f(21.19,3.6);
    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(21,3.6);
    glVertex2f(21,3.51);

    glVertex2f(20.8,3.6);
    glVertex2f(20.8,3.51);

    glVertex2f(20.6,3.6);
    glVertex2f(20.6,3.51);

    glVertex2f(20.4,3.6);
    glVertex2f(20.4,3.51);

    glVertex2f(20.2,3.6);
    glVertex2f(20.2,3.51);

    glVertex2f(20,3.6);
    glVertex2f(20,3.51);

    glVertex2f(19.8,3.6);
    glVertex2f(19.8,3.51);

    glVertex2f(19.6,3.6);
    glVertex2f(19.6,3.51);
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    //glTranslatef(15.6, 4.8f, 0.0f);
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(19.43,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(19.56,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(19.7,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(20.88,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(21.07,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(_move_train_t, 0.0f, 0.0f);
    glTranslatef(21.15,3.29,0);
    glRotatef(_angle1_t, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
    {
        glColor3ub(51, 51, 51);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.06;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}

void tide(float y)              //tide
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(0,_move_tide_t,0);
    glColor3ub(255,255,255);
    glBegin(GL_LINES);
    glVertex2f(-48.94,13.5);
    glVertex2f(-48.91,11.23);

    glVertex2f(-46.62,14.5);
    glVertex2f(-46.65,11.76);

    glVertex2f(-44,16);
    glVertex2f(-43.98,13.4);

    glVertex2f(-42.01,15.63);
    glVertex2f(-42,12);

    glVertex2f(-39,15);
    glVertex2f(-39,13);

    glVertex2f(-37,16);
    glVertex2f(-37,13);

    glVertex2f(-34,15);
    glVertex2f(-34,11);

    glVertex2f(-31.22,14.81);
    glVertex2f(-31.22,11.24);

    glVertex2f(-28.06,15.8);
    glVertex2f(-28,12);

    glVertex2f(-25.02,15.99);
    glVertex2f(-25.02,11.48);

    glVertex2f(-22.75,15.31);
    glVertex2f(-22.77,12.18);

    glVertex2f(-21.07,16);
    glVertex2f(-21.07,13.72);

    glVertex2f(-18.92,15);
    glVertex2f(-18.86,11.22);

    glVertex2f(-16.03,13);
    glVertex2f(-15.98,10.71);
    glEnd();
    glPopMatrix();
}

void bomb_t()                   //bomb
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glColor3ub(102, 51, 0);
    glTranslatef(5,6,0);
    glTranslatef(0,_move_bomb_t,0);
        glBegin(GL_POLYGON);
        glVertex2f(-41.98,8.13);
        glVertex2f(-41.86,8.47);
        glVertex2f(-41.75,8.94);
        glVertex2f(-41.95,8.94);
        glVertex2f(-41.94,9);
        glVertex2f(-41.98,9.01);
        glVertex2f(-41.99,8.96);
        glVertex2f(-42.17,9.04);
        glVertex2f(-42.28,8.57);
        glVertex2f(-42.19,8.49);
        glVertex2f(-42.4,8.04);
        glVertex2f(-42.52,7.56);
        glVertex2f(-42.52,7.42);
        glVertex2f(-42.46,7.16);
        glVertex2f(-42.33,7.13);
        glVertex2f(-42.15,7.34);
        glVertex2f(-42.07,7.53);
        glVertex2f(-41.98,7.92);
        glEnd();
        glPopMatrix();



}

void explosion_t()              //explotion
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,_move_span_t,0);

    if(explosionstatus_t==1 && _move_jet_x_t<-18)
    {
         glColor3ub(255,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(-39.5,5.5);
        glVertex2f(-39,6);
        glVertex2f(-39,4.6);
        glColor3ub(255, 255, 102);
        glVertex2f(-39.97,4.6);
        glVertex2f(-41,6);
        glEnd();

        glColor3ub(255,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(-38.5,5.5);
        glVertex2f(-37.5,6);
        glVertex2f(-38,4.6);
        glColor3ub(255, 255, 102);
        glVertex2f(-39,4.6);
        glVertex2f(-39,6);
        glEnd();
    }
    glPopMatrix();
}

void road_t()                   //road under bridge
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    //Road
    glColor3ub(220, 222, 161);
    glBegin(GL_POLYGON);
    glVertex2f(16.3,1.2);
    glVertex2f(15,1.3);
    glVertex2f(13.9,1.7);
    glVertex2f(14.3,0.8);
    glVertex2f(15.3,0.6);
    glVertex2f(16.7,0.5);
    glVertex2f(19,0.3);
    glVertex2f(20.4,0);
    glVertex2f(24,0);
    glVertex2f(22.1,0.4);
    glVertex2f(19.6,1);
    glEnd();

    glBegin(GL_POLYGON);
     glVertex2f(12.9,1.5);
     glVertex2f(13.2,2.4);
     glVertex2f(13.9,2.6);
     glVertex2f(15.6,2.8);
     glVertex2f(15.6,2.4);
     glVertex2f(14.5,2.2);
     glVertex2f(14.7,1.6);
     glVertex2f(15,1.3);
     glVertex2f(14.3,0.8);
     glEnd();
    glPopMatrix();

}

void span_10_t()                //broken span       //update2
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,_move_span_t,0);
    bridge_span2_t(-49.5);    //10
    glPopMatrix();
}

void cloudMove_t()        //cloud move        //update3
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_cloud_t,0,0);
    cloud_t(-3,1);
    cloud_t(-12,-0.5);
    cloud_t(2,-1);
    cloud_t(-1,-0.5);
    glPopMatrix();
}

void boatMove_t()           //boat move     //update5
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_boat_t,0,0);
    boat_t(0,0,1);
    glPopMatrix();

}
void boatMove2_t()
{
     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_boat_2_t,0,0);
    boat_t(-9,8,0.7);
    glPopMatrix();
}

void bridge_t(float y)          //boat move     //update4
{
     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    road_t();
    bridge_land_t();
    left_bridge_approachroad_t();
    train_engine_t();
    train_body_t(0);
    train_body_t(2.2);
    train_body_t(4.4);
    train_body_t(6.6);
    train_body_t(8.8);
    train_body_t(10);
    train_body_t(12.2);
    train_body_t(14.4);
    bridge_span1_t();         //1

    bridge_span2_t(-5.5);     //2

    bridge_span2_t(-11);      //3

    bridge_span2_t(-16.5);    //4

    bridge_span2_t(-22);      //5

    bridge_span2_t(-27.5);    //6

    bridge_span2_t(-33);      //7

    bridge_span2_t(-38.5);    //8

    bridge_span2_t(-44);      //9

    span_10_t();

    bridge_span2_t(-55);      //11

    bridge_span2_t(-60.5);     //12

    bridge_span2_t(-66);      //13

    bridge_span2_t(-71.5);     //14

    bridge_span2_t(-77);      //15

    piller_t(-5.5);
    piller_t(-11);
    piller_t(-16.5);
    piller_t(-22);
    piller_t(-27.5);
    piller_t(-33);
    piller_t(-38.5);
    piller_t(-44);
    piller_t(-49.5);
    piller_t(-55);
    piller_t(-60.5);
    piller_t(-66);
    piller_t(-71.5);
    piller_t(-77);
    piller_t(-82.5);

    glPopMatrix();
}

void display2()
{

    sky_t();
    night_sky_t();
    sun_t();
    cloudMove_t();


    far_village_t(0,0);
    far_village_t(-5.3,0);
    far_village_t(-10.6,0);
    far_village_t(-15.9,0);
    far_village_t(-21.2,0);
    far_village_t(-26.5,0);
    far_village_t(-31.8,0);
    far_village_t(-37.1,0);
    far_village_t(-39.5,0);
    far_village_t(-72,0);
    far_village_t(-77.3,0);
    far_village_t(-81.5,0);
    far_village_t(-86.8,0);
    far_village_t(-92.1,0);
    far_village_t(-97.4,0);
    far_village_t(-102,0);


    land_t();
    far_village_t(-2,-6);
    far_village_t(-1,-4);
    far_village_t(-21,-4.5);
    paddy_field_t();

    river_t();
    //tide(0);
    explosion_t();
    boatMove_t();
    boatMove2_t();

    bridge_t(1.5);

    if(explosionstatus_t==1)
    {
        bomb_t();
    }
    river_down_t();
    tree_t(0,0,1);//(translate_x,translate_y,scaling_x_y)
    tree_t(5,4,1);
    tree_t(2,6,1);
    tree_t(-2,8,1);
    tree_t(5,10,1);
    tree_t(-5,10.5,.9);
    tree_t(-13,10,.9);
    tree_t(-15,10,.9);
    tree_t(-17,10,.9);
    tree_t(-23,12.5,.9);
    tree_t(-27,12.5,.9);
    tree_t(-19,11.5,.9);
    tree_t(-21,11.5,.9);
    tree_t(-13,12.5,.9);
    tree_t(-9,12.5,.9);
    tree_t(-9,9,0.9);
    tree_t(-5,4,1);
    tent_t(3,5,0.5);
    tent_t(-3,7,0.5);
    tent_t(4,1,0.6);
    hut_t(20,3,0.5);
    hut_t(12,15,0.4);
    hut_t(30,38,0.3);
    hut_t(10,35,0.3);



    fighter_jet_t();

}



void update_t(int value)
{
    _move_t += 0.2;
    if(_move_t > 10)
    {
        _move_t = -25.0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update_t, 0);
}

void update2_t(int value)        //span move
{
        if(explosionstatus_t==1)
    {
        _move_span_t -= object_t;
        if(_move_span_t < -1.2)
        {
            object_t=0;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(20, update2_t, 0);
}

void update3_t(int value)           //cloud move
{
    if(cloudstatus_t==1)
    {
         _move_cloud_t -= 0.02;
        if(_move_cloud_t < -55)
        {
            _move_cloud_t= 0.0;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(20, update3_t, 0);


}
void update4_t(int value)     //boat move 1
{
    if(boatstatus_t==1)
    {
         _move_boat_t -= 0.05;
        if(_move_boat_t < -50)
        {
            _move_boat_t = 0.0;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(20, update4_t, 0);


}

void update5_t(int value)     //boat move
{
    if(boatstatus_t==1)
    {
         _move_boat_2_t += 0.04;
        if(_move_boat_2_t > 1)
        {
            _move_boat_2_t = -35;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(20, update5_t, 0);


}

void update6_t(int value)     //jet move x axis
{
    if(jetstatus_t==1)
    {
         _move_jet_x_t -= 0.2;
        if(_move_jet_x_t < -18)
        {
          // _move_bomb -= 0.02;
          bombstatus_t=1;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(1, update6_t, 0);


}
void update7_t(int value)     //jet move y axis
{
    if(jetstatus_t==1)
    {
         _move_jet_y_t -= 0.06;
        if(_move_jet_y_t < -100)
        {
           // _move_jet_y = 0;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(1, update7_t, 0);


}

void update8_t(int value)     //bomb move
{
    if(bombstatus_t==1)
    {
         _move_bomb_t -= 0.05;
        if(_move_bomb_t < -8)
        {
            explosionstatus_t=1;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(2, update8_t, 0);
}

void update9_t(int value)     //bomb move
{
    if(trainstatus_t==1)
    {
        if(bombstatus_t==0)
        {
            _move_train_t -= 0.3;
            if(_move_train_t < -120)
            {
                _move_train_t=10;
            }
        }

    }
    glutPostRedisplay();
    glutTimerFunc(20, update9_t, 0);
}

void update10_t(int value)      //tide move
{
    _move_tide_t += 0.2;
    if(_move_tide_t > 2)
    {
        _move_t = -25.0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update10_t, 0);
}

void update1_t(int value)       //train wheel move
 {
     if(trainstatus_t==1)
    {
        if(bombstatus_t==0)
        {
            _angle1_t+=2.0f;
            if(_angle1_t > 360.0)
            {
                _angle1_t-=360;
            }
        }
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update1_t, 0); //Notify GLUT to call update again in 25 milliseconds
}


//--------------------------------------------Shayan function----------------------------------------------


    void mainBackGround_a()
    {
        //mainbackground(sky)
        if(nightstatus_a)
        glColor3ub(29, 0, 51); // Darkest violet


        else
             glColor3ub(135,211,248);

     //glColor3ub(135,211,248);
    glBegin(GL_POLYGON);
    glVertex2f(-10,0);
    glVertex2f(-10,-4);
    glVertex2f(-18,-4);
    glColor3ub(230, 230, 230);
    glVertex2f(-18,0);
    glVertex2f(-10,0);


    glEnd();

    }

    void jet_a()
    {
    //jet
    if(nightstatus_a)
        glColor3ub(77, 77, 77); // Darker gray

        else
    glColor3ub(68, 77, 86);//dark gray


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_a, 0.0f, 0.0f);



    //glColor3ub(68, 77, 86);//dark gray
	glBegin(GL_POLYGON);
	 glVertex2f(-10.760,-0.453);
    glVertex2f(-10.624,-0.375);
    glVertex2f(-10.600,-0.375);
    glVertex2f(-10.657,-0.453);
    glVertex2f(-10.629,-0.460);
     glVertex2f(-10.627,-0.477);
    glVertex2f(-10.651,-0.485);
    glVertex2f(-10.773,-0.494);
    glVertex2f(-10.94,-0.494);
    glVertex2f(-11.052,-0.486);
    glVertex2f(-11.109,-0.464);
	 glVertex2f(-11.109,-0.464);
    glVertex2f(-11.036,-0.448);
    glVertex2f(-11.012,-0.432);
    glVertex2f(-10.987,-0.430);
    glVertex2f(-10.95,-0.45);

        glEnd();
        glPopMatrix();
    }

     void bomb_a()
    {
        //bomb
    glColor3ub(169, 169, 169); // Dark gray
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_a, 0.0f, 0.0f);
    glTranslatef(0.0f, _move_bomb_a, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-10.96,-0.53);
    glVertex2f(-10.94,-0.52);
    glVertex2f(-10.86,-0.52);
    glVertex2f(-10.86,-0.54);
    glVertex2f(-10.94,-0.54);
    glVertex2f(-10.96,-0.53);

    glEnd();
    glPopMatrix();

    }

    void jetcockpit_a()
    {
        //jetcockpit
        glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move_a, 0.0f, 0.0f);

    glColor3ub(255, 255, 255); // White color
    glBegin(GL_POLYGON);
    glVertex2f(-11.036,-0.448);
    glVertex2f(-11.012,-0.432);
    glVertex2f(-10.987,-0.430);
    glVertex2f(-10.95,-0.45);
    glVertex2f(-11.036,-0.448);


    glEnd();
    glPopMatrix();

    }

     void lowerfarvillage_a()
    {
        //lowerfarvillage

            if(nightstatus_a)
        glColor3ub(30, 90, 50); // Darker sea green


        else
    glColor3ub(46, 139, 87); // Sea green


    glBegin(GL_POLYGON);
    glVertex2f(-18,-1.5);
    glVertex2f(-18,-1.4);
    glVertex2f(-10,-1.4);
    glVertex2f(-10,-1.5);
    glVertex2f(-18,-1.5);


    glEnd();


    //lowerfarvillage-line
    //1
       if(nightstatus_a)
        glColor3ub(0, 50, 0); // Extremely dark green




        else
    glColor3ub(0, 100, 0); // Dark green





    glBegin(GL_LINES);


    glVertex2f(-10,-1.5);
    glVertex2f(-18,-1.5);

    glEnd();

    }

    void upperfarvillage_a() {
    // Upper far village

            if(nightstatus_a)
        glColor3ub(30, 90, 50); // Darker sea green


        else
    glColor3ub(46, 139, 87); // Sea green

    //1
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.202;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-17.802,y-1.4);
        }
        glEnd();

    //2
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.086;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-17.518,y-1.4);
        }
        glEnd();


        //3
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.193;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-17.28,y-1.317);
        }
        glEnd();

        //4
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.154;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.96,y-1.36);
        }
        glEnd();


        //5
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.094;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.73,y-1.4);
        }
        glEnd();

        //6
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.044;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.6,y-1.4);
        }
        glEnd();

        //7
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.141;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.441,y-1.4);
        }
        glEnd();


        //8
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.2,y-1.4);
        }
        glEnd();


        //9
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.2,y-1.4);
        }
        glEnd();


        //10
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.062;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16.04,y-1.4);
        }
        glEnd();


        //11
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.159;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.859,y-1.4);
        }
        glEnd();


        //12
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.106;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.681,y-1.4);
        }
        glEnd();


        //13
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.026;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.6,y-1.4);
        }
        glEnd();


        //14
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.198;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.473,y-1.4);
        }
        glEnd();


        //15
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.113;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15.22,y-1.4);
        }
        glEnd();


                //15
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.273;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-14.891,y-1.4);
        }
        glEnd();


                     //16
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-14.58,y-1.4);
        }
        glEnd();


                             //17
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.109;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-14.4,y-1.4);
        }
        glEnd();


                              //18
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.219;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-14.1,y-1.4);
        }
        glEnd();


                               //19
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.034;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.88,y-1.4);
        }
        glEnd();


                                  //20
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.8,y-1.4);
        }
        glEnd();


                                   //21
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.112;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.65,y-1.4);
        }
        glEnd();


                                    //22
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.5,y-1.4);
        }
        glEnd();


                                         //23
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.116;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.35,y-1.4);
        }
        glEnd();


                                          //24
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.079;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-13.158,y-1.4);
        }
        glEnd();


                                           //25
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.115;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12.991,y-1.4);
        }
        glEnd();


                                           //26
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.248;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12.8,y-1.4);
        }
        glEnd();


                                            //27
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.058;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12.5,y-1.4);
        }
        glEnd();



                                             //28
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.142;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12.4,y-1.4);
        }
        glEnd();

        //29
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.082;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12.182,y-1.4);
        }
        glEnd();


          //30
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-12,y-1.4);
        }
        glEnd();



          //31
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.059;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-11.84,y-1.4);
        }
        glEnd();


        //32
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.123;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-11.661,y-1.4);
        }
        glEnd();


        //33
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.236;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-11.322,y-1.4);
        }
        glEnd();


        //34
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.144;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-10.962,y-1.4);
        }
        glEnd();


           //35
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.087;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-10.8,y-1.4);
        }
        glEnd();


           //36
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.157;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-10.557,y-1.4);
        }
        glEnd();



          //37
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.238;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-10.238,y-1.4);
        }
        glEnd();
}


    void riverbank_a()
    {
        //riverbank
        if(nightstatus_a)
        glColor3ub(80, 35, 10); // Dark brown

        else

    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);
    glVertex2f(-16.05,-1.5);
    glVertex2f(-16,-1.5);
    glVertex2f(-10,-4);
    glVertex2f(-10.5,-4);
    glVertex2f(-16.05,-1.5);


    glEnd();


    //riverbank-line
    //1
       if(nightstatus_a)
        glColor3ub(77, 38, 0); // Very dark brown



        else
    glColor3ub(35, 20, 5); // Very dark brown




    glBegin(GL_LINES);


    glVertex2f(-16,-1.5);
    glVertex2f(-10,-4);

    glEnd();

    //2
    glBegin(GL_LINES);


    glVertex2f(-10.5,-4);
    glVertex2f(-16.05,-1.5);

    glEnd();

    }

     void river_a()
    {
        //river

                if(nightstatus_a)
        glColor3ub(60, 80, 120); // Darker blue


        else
    glColor3ub(173, 216, 230); // Light blue
    glBegin(GL_POLYGON);


    glVertex2f(-18,-1.5);
    glVertex2f(-16.05,-1.5);
    glVertex2f(-10.5,-4);
    glVertex2f(-18,-4);
    glVertex2f(-18,-1.5);


    glEnd();

    }




    void lawn_a()
    {
        //lawn
        if(nightstatus_a)
        glColor3ub(56, 73, 20); // Dark olive drab

        else
    glColor3ub(107, 142, 35); // Olive drab
    glBegin(GL_POLYGON);
    glVertex2f(-16,-1.5);
    glVertex2f(-10,-1.5);
    glVertex2f(-10,-4);
    glVertex2f(-16,-1.5);


    glEnd();

    }


    void gunboat_a(float x, float y, float z)
    {

        glMatrixMode(GL_MODELVIEW);
        glPushMatrix();
        glTranslatef(x,y,0);
        glScalef(z,z,0);
        glTranslatef(_move_boat_a,0,0);
        //gunboathull
    glColor3ub(47, 79, 79); // Dark slate gray
    glBegin(GL_POLYGON);


    glVertex2f(-17.8,-3.3);
    glVertex2f(-15,-3.2);
    glVertex2f(-15.4,-3.6);
    glVertex2f(-17.8,-3.6);
    glVertex2f(-17.8,-3.3);


    glEnd();


        //gunboatbody
    glColor3ub(105, 105, 105); // Dim gray

    glBegin(GL_POLYGON);


    glVertex2f(-17.6,-3);
    glVertex2f(-16.2,-3);
    glVertex2f(-16.2,-3.243);
    glVertex2f(-17.6,-3.293);
    glVertex2f(-17.6,-3);


    glEnd();


        //gunboatglass
    glColor3ub(70, 130, 180); // Steel blue

    glBegin(GL_POLYGON);


    glVertex2f(-17.6,-2.8);
    glVertex2f(-16.6,-2.8);
    glVertex2f(-16.4,-3);
    glVertex2f(-17.6,-3);
    glVertex2f(-17.6,-2.8);


    glEnd();


    //gunboatglass-line
    //1
       if(nightstatus_a)
        glColor3ub(0, 0, 100); // Darker blue


        else
    glColor3ub(0, 0, 139); // Dark blue

    glLineWidth(2);
    glBegin(GL_LINES);


    glVertex2f(-16.5,-2.9);
    glVertex2f(-16.5,-3);


    glEnd();

    //2
    glBegin(GL_LINES);


    glVertex2f(-16.9,-2.8);
    glVertex2f(-16.9,-3);

    glEnd();


    //3
    glBegin(GL_LINES);


    glVertex2f(-17.3,-2.8);
    glVertex2f(-17.3,-3);

    glEnd();


        //turrent
    glColor3ub(105, 105, 105); // Dim gray
    glBegin(GL_POLYGON);


    glVertex2f(-16,-2.9);
    glVertex2f(-15.4,-2.9);
    glVertex2f(-15.4,-3.214);
    glVertex2f(-16,-3.236);
    glVertex2f(-16,-2.9);


    glEnd();

    //barrel holder
    glColor3ub(50, 50, 50); // Darker gray
    glBegin(GL_POLYGON);


    glVertex2f(-15.4,-3);
    glVertex2f(-15.2,-3);
    glVertex2f(-15.2,-3.1);
    glVertex2f(-15.4,-3.1);
    glVertex2f(-15.4,-3);


    glEnd();

    //barrel
    glColor3ub(169, 169, 169); // Dark gray
    glBegin(GL_POLYGON);


    glVertex2f(-15.2,-3.02);
    glVertex2f(-14.74,-3.02);
    glVertex2f(-14.74,-3.08);
    glVertex2f(-15.2,-3.08);
    glVertex2f(-15.2,-3.02);


    glEnd();


        glTranslatef(_move_pakbullet_a,0,0);
    glColor3ub(255, 69, 0); // Red-orange
    glBegin(GL_POLYGON);


    glVertex2f(-14.579,-3.03);
    glVertex2f(-14.539,-3.052);
    glVertex2f(-14.58,-3.07);
    glVertex2f(-14.579,-3.03);

    glEnd();

    //backbulletpart
    glColor3ub(255, 223, 0); // Gold
    glBegin(GL_POLYGON);


    glVertex2f(-14.68,-3.03);
    glVertex2f(-14.579,-3.03);
    glVertex2f(-14.58,-3.07);
    glVertex2f(-14.68,-3.07);
    glVertex2f(-14.68,-3.03);


    glEnd();



    glPopMatrix();

    }

    void banbullet_a(float x, float y, float z)
    {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glScalef(z,z,0);
    glTranslatef(_move_banbullet_a, 0.0f, 0.0f);
    //back
    glColor3ub(255, 223, 0); // Gold
    glBegin(GL_POLYGON);

    glVertex2f(-10.12,-3.1);
    glVertex2f(-10.1,-3.08);
    glVertex2f(-10,-3.08);
    glVertex2f(-10,-3.12);
    glVertex2f(-10.1,-3.12);
    glVertex2f(-10.12,-3.1);

    glEnd();

    //front
    glColor3ub(255, 69, 0); // Red-orange
    glBegin(GL_POLYGON);

    glVertex2f(-10.12,-3.1);
    glVertex2f(-10.1,-3.08);
    glVertex2f(-10.1,-3.12);
    glVertex2f(-10.12,-3.1);

    glEnd();
    glPopMatrix();
    }


    void watchtower_a(float x, float y, float z)
    {

    glMatrixMode(GL_MODELVIEW);
        glPushMatrix();
        glTranslatef(x,y,0);
        glScalef(z,z,0);

    //pedestel
    glColor3ub(69, 39, 19);
    glBegin(GL_POLYGON);


    glVertex2f(-11.07,-2.703);
    glVertex2f(-11.12,-2.804);
    glVertex2f(-10.02,-2.802);
    glVertex2f(-10.081,-2.703);
    glVertex2f(-11.07,-2.703);

    glEnd();

    //subpedestel01
    glColor3ub(69, 39, 19);
    glBegin(GL_POLYGON);


    glVertex2f(-10.95,-2.65);
    glVertex2f(-10.821,-2.651);
    glVertex2f(-10.821,-2.703);
    glVertex2f(-10.95,-2.703);
    glVertex2f(-10.95,-2.65);


    glEnd();


    //subpedestel02
    glColor3ub(69, 39, 19);
    glBegin(GL_POLYGON);


    glVertex2f(-10.33,-2.65);
    glVertex2f(-10.2,-2.65);
    glVertex2f(-10.2,-2.703);
    glVertex2f(-10.331,-2.703);
    glVertex2f(-10.33,-2.65);


    glEnd();



    //leftside-stand
    glColor3ub(101, 67, 33);
    glBegin(GL_POLYGON);


    glVertex2f(-10.851,-2.65);
    glVertex2f(-10.913,-2.65);
    glVertex2f(-10.809,-1.55);
    glVertex2f(-10.755,-1.549);
    glVertex2f(-10.851,-2.65);


    glEnd();


    //rightside-stand
    glColor3ub(101, 67, 33);
    glBegin(GL_POLYGON);


    glVertex2f(-10.298,-2.65);
    glVertex2f(-10.234,-2.65);
    glVertex2f(-10.339,-1.546);
    glVertex2f(-10.399,-1.546);
    glVertex2f(-10.298,-2.65);


    glEnd();


    //wooden-ralling
    glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);


    glVertex2f(-10.916,-1.552);
    glVertex2f(-10.915,-1.334);
    glVertex2f(-10.24,-1.332);
    glVertex2f(-10.238,-1.554);
    glVertex2f(-10.916,-1.552);


    glEnd();



        //wooden-ralling-center-design
    glColor3ub(64, 64, 64);
    glBegin(GL_POLYGON);


    glVertex2f(-10.916,-1.4);
    glVertex2f(-10.238,-1.4);
    glVertex2f(-10.238,-1.5);
    glVertex2f(-10.916,-1.5);
    glVertex2f(-10.916,-1.4);


    glEnd();


    //roof-support-left
    glColor3ub(101, 67, 33);
    glBegin(GL_POLYGON);


    glVertex2f(-10.856,-1.334);
    glVertex2f(-10.799,-1.334);
    glVertex2f(-10.8,-1.05);
    glVertex2f(-10.858,-1.052);
    glVertex2f(-10.856,-1.334);


    glEnd();



    //roof-support-right
    glColor3ub(101, 67, 33);
    glBegin(GL_POLYGON);


    glVertex2f(-10.35,-1.05);
    glVertex2f(-10.3,-1.05);
    glVertex2f(-10.298,-1.332);
    glVertex2f(-10.351,-1.33);
    glVertex2f(-10.35,-1.05);


    glEnd();



    //roof
    glColor3ub(139, 90, 43);
    glBegin(GL_POLYGON);


    glVertex2f(-10.575,-0.74);
    glVertex2f(-10.147,-1.051);
    glVertex2f(-11.001,-1.053);
    glVertex2f(-10.575,-0.74);


    glEnd();


    //roof-line
    //1
       if(nightstatus_a)
        glColor3ub(77, 38, 0); // Very dark brown


        else
    glColor3ub(101, 67, 33); // Dark brown

    glBegin(GL_LINES);


    glVertex2f(-10.65,-0.8);
    glVertex2f(-10.5,-0.8);

    glEnd();

    //2
    glBegin(GL_LINES);


    glVertex2f(-10.79,-0.9);
    glVertex2f(-10.36,-0.9);

    glEnd();


    //3
    glBegin(GL_LINES);


    glVertex2f(-10.93,-1);
    glVertex2f(-10.22,-1);

    glEnd();

    //rope-left

        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
     glColor3ub(231,159,49);
    glBegin(GL_LINES);

    glVertex2f(-10.799,-1.333);
    glVertex2f(-10.779,-1.427);
    glVertex2f(-10.779,-1.427);
    glVertex2f(-10.745,-1.563);


    glEnd();


    //rope-right
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
     glColor3ub(231,159,49);
    glBegin(GL_LINES);

    glVertex2f(-10.36,-1.33);
    glVertex2f(-10.37,-1.43);
    glVertex2f(-10.37,-1.43);
    glVertex2f(-10.41,-1.56);


    glEnd();


    //stand-support(lower)
     glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);

    glVertex2f(-10.843,-2.56);
    glVertex2f(-10.307,-2.56);
    glVertex2f(-10.303,-2.598);
    glVertex2f(-10.847,-2.598);
    glVertex2f(-10.843,-2.56);

    glEnd();


    //stand-support(upper)
     glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);

    glVertex2f(-10.819,-2.285);
    glVertex2f(-10.332,-2.285);
    glVertex2f(-10.328,-2.326);
    glVertex2f(-10.823,-2.326);
    glVertex2f(-10.819,-2.285);

    glEnd();


    //stand-support(top to down)
     glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);

    glVertex2f(-10.823,-2.33);
    glVertex2f(-10.782,-2.33);
    glVertex2f(-10.308,-2.537);
    glVertex2f(-10.307,-2.558);
    glVertex2f(-10.345,-2.558);
    glVertex2f(-10.824,-2.346);
    glVertex2f(-10.823,-2.33);

    glEnd();



    //stand-support(down to top)
     glColor3ub(139, 69, 19);
    glBegin(GL_POLYGON);

    glVertex2f(-10.841,-2.54);
    glVertex2f(-10.843,-2.56);
    glVertex2f(-10.806,-2.56);
    glVertex2f(-10.326,-2.347);
    glVertex2f(-10.328,-2.326);
    glVertex2f(-10.345,-2.328);
    glVertex2f(-10.841,-2.54);

    glEnd();


    //flag

        //green-part
    glBegin(GL_POLYGON);

    glColor3ub(0, 106, 78);
    glVertex2f(-10.745,-1.563);
    glVertex2f(-10.691,-1.581);
    glVertex2f(-10.611,-1.589);
    glVertex2f(-10.55,-1.59);
    glVertex2f(-10.47,-1.579);
    glVertex2f(-10.414,-1.56);
    glVertex2f(-10.4,-2.25);
    glVertex2f(-10.43,-2.262);
    glVertex2f(-10.511,-2.271);
    glVertex2f(-10.601,-2.27);
    glVertex2f(-10.681,-2.263);
    glVertex2f(-10.756,-2.252);
    glVertex2f(-10.745,-1.563);

    glEnd();

//flag
    //red-part

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(206, 17, 38);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.091;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-10.58,y-1.9);
        }

glEnd();
 glPopMatrix();
    }




    void sandbag_a(float x, float y, float z)

    {
        glMatrixMode(GL_MODELVIEW);
        glPushMatrix();
        glTranslatef(x,y,0);
        glScalef(z,z,0);
        //lower 1st section, 1
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(-11.19,-3.35);
    glVertex2f(-11.19,-3.36);
    glVertex2f(-11.19,-3.38);
    glVertex2f(-11.2,-3.4);
    glVertex2f(-11.22,-3.41);
    glVertex2f(-11.21,-3.42);
    glVertex2f(-11.19,-3.43);
    glVertex2f(-11.16,-3.42);
    glVertex2f(-11.09,-3.43);
    glVertex2f(-11,-3.44);
    glVertex2f(-10.86,-3.43);
    glVertex2f(-10.8,-3.43);
    glVertex2f(-10.77,-3.42);
    glVertex2f(-10.77,-3.41);
    glVertex2f(-10.79,-3.39);
    glVertex2f(-10.79,-3.37);
    glVertex2f(-10.79,-3.35);
    glVertex2f(-10.79,-3.34);
    glVertex2f(-10.79,-3.33);
    glVertex2f(-10.81,-3.32);
    glVertex2f(-10.94,-3.32);
    glVertex2f(-11.05,-3.32);
    glVertex2f(-11.15,-3.33);
    glVertex2f(-11.17,-3.33);
    glVertex2f(-11.19,-3.34);
    glVertex2f(-11.19,-3.35);

    glEnd();



    //lower 1st section, 3
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(-10.66,-3.39);
    glVertex2f(-10.67,-3.4);
    glVertex2f(-10.69,-3.41);
    glVertex2f(-10.69,-3.42);
    glVertex2f(-10.66,-3.44);
    glVertex2f(-10.6,-3.43);
    glVertex2f(-10.51,-3.44);
    glVertex2f(-10.41,-3.44);
    glVertex2f(-10.34,-3.43);
    glVertex2f(-10.32,-3.43);
    glVertex2f(-10.3,-3.43);
    glVertex2f(-10.26,-3.44);
    glVertex2f(-10.24,-3.43);
    glVertex2f(-10.24,-3.41);
    glVertex2f(-10.26,-3.4);
    glVertex2f(-10.26,-3.35);
    glVertex2f(-10.26,-3.34);
    glVertex2f(-10.27,-3.33);
    glVertex2f(-10.29,-3.33);
    glVertex2f(-10.31,-3.32);
    glVertex2f(-10.38,-3.32);
    glVertex2f(-10.5,-3.32);
    glVertex2f(-10.58,-3.33);
    glVertex2f(-10.63,-3.33);
    glVertex2f(-10.66,-3.34);
    glVertex2f(-10.66,-3.35);
    glVertex2f(-10.66,-3.35);
    glVertex2f(-10.66,-3.37);
    glEnd();



    //lower 1st section, 2
        if(nightstatus_a)
        glColor3ub(110, 80, 15); // Darker golden rod


        else
    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);

    glVertex2f(-10.58,-3.33);
    glVertex2f(-10.63,-3.33);
    glVertex2f(-10.66,-3.34);
    glVertex2f(-10.66,-3.35);
    glVertex2f(-10.66,-3.35);
    glVertex2f(-10.66,-3.37);
    glVertex2f(-10.66,-3.39);
    glVertex2f(-10.67,-3.4);
    glVertex2f(-10.69,-3.41);
    glVertex2f(-10.69,-3.42);
    glVertex2f(-10.66,-3.44);
    glVertex2f(-10.72,-3.44);
    glVertex2f(-10.8,-3.43);
    glVertex2f(-10.77,-3.42);
    glVertex2f(-10.77,-3.41);
    glVertex2f(-10.79,-3.39);
    glVertex2f(-10.79,-3.37);
    glVertex2f(-10.79,-3.35);
    glVertex2f(-10.79,-3.34);
    glVertex2f(-10.79,-3.33);
    glVertex2f(-10.72,-3.32);
    glVertex2f(-10.66,-3.32);
    glVertex2f(-10.59,-3.32);
    glVertex2f(-10.58,-3.33);
    glEnd();



        //lower 2nd section, 1
        if(nightstatus_a)
        glColor3ub(110, 80, 15); // Darker golden rod


        else
    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);

    glVertex2f(-11.19,-3.34);
    glVertex2f(-11.2,-3.33);
    glVertex2f(-11.21,-3.33);
    glVertex2f(-11.21,-3.32);
    glVertex2f(-11.19,-3.31);
    glVertex2f(-11.18,-3.3);
    glVertex2f(-11.18,-3.28);
    glVertex2f(-11.17,-3.27);
    glVertex2f(-11.18,-3.26);
    glVertex2f(-11.17,-3.25);
    glVertex2f(-11.15,-3.25);
    glVertex2f(-11.04,-3.24);
    glVertex2f(-10.97,-3.24);
    glVertex2f(-10.88,-3.24);
    glVertex2f(-10.85,-3.24);
    glVertex2f(-10.84,-3.25);
    glVertex2f(-10.82,-3.25);
    glVertex2f(-10.82,-3.27);
    glVertex2f(-10.82,-3.29);
    glVertex2f(-10.8,-3.3);
    glVertex2f(-10.8,-3.31);
    glVertex2f(-10.81,-3.32);
    glVertex2f(-10.94,-3.32);
    glVertex2f(-11.05,-3.32);
    glVertex2f(-11.15,-3.33);
    glVertex2f(-11.17,-3.33);
    glVertex2f(-11.19,-3.34);
    glEnd();



    //lower 2nd section, 3
        if(nightstatus_a)
        glColor3ub(110, 80, 15); // Darker golden rod


        else
    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);

    glVertex2f(-10.64,-3.25);
    glVertex2f(-10.62,-3.25);
    glVertex2f(-10.56,-3.24);
    glVertex2f(-10.48,-3.24);
    glVertex2f(-10.44,-3.24);
    glVertex2f(-10.34,-3.24);
    glVertex2f(-10.33,-3.24);
    glVertex2f(-10.32,-3.25);
    glVertex2f(-10.32,-3.26);
    glVertex2f(-10.32,-3.27);
    glVertex2f(-10.32,-3.29);
    glVertex2f(-10.32,-3.3);
    glVertex2f(-10.3,-3.32);
    glVertex2f(-10.3,-3.32);
    glVertex2f(-10.31,-3.32);
    glVertex2f(-10.38,-3.32);
    glVertex2f(-10.5,-3.32);
    glVertex2f(-10.58,-3.33);
    glVertex2f(-10.59,-3.32);
    glVertex2f(-10.66,-3.32);
    glVertex2f(-10.66,-3.31);
    glVertex2f(-10.66,-3.31);
    glVertex2f(-10.65,-3.3);
    glVertex2f(-10.65,-3.29);
    glVertex2f(-10.65,-3.27);
    glVertex2f(-10.64,-3.27);
    glVertex2f(-10.65,-3.26);
    glVertex2f(-10.64,-3.25);
    glEnd();


     //lower 2nd section, 2
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(-10.84,-3.25);
    glVertex2f(-10.82,-3.25);
    glVertex2f(-10.82,-3.27);
    glVertex2f(-10.82,-3.29);
    glVertex2f(-10.8,-3.3);
    glVertex2f(-10.8,-3.31);
    glVertex2f(-10.81,-3.32);
    glVertex2f(-10.79,-3.33);
    glVertex2f(-10.72,-3.32);
    glVertex2f(-10.66,-3.32);
    glVertex2f(-10.66,-3.31);
    glVertex2f(-10.66,-3.31);
    glVertex2f(-10.65,-3.3);
    glVertex2f(-10.65,-3.29);
    glVertex2f(-10.65,-3.27);
    glVertex2f(-10.64,-3.27);
    glVertex2f(-10.65,-3.26);
    glVertex2f(-10.64,-3.25);
    glVertex2f(-10.62,-3.25);
    glVertex2f(-10.56,-3.24);
    glVertex2f(-10.6,-3.23);
    glVertex2f(-10.71,-3.23);
    glVertex2f(-10.76,-3.23);
    glVertex2f(-10.84,-3.25);
    glEnd();



    //lower 3nd section, 1
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(-11.15,-3.17);
    glVertex2f(-11.15,-3.18);
    glVertex2f(-11.15,-3.19);
    glVertex2f(-11.16,-3.2);
    glVertex2f(-11.16,-3.22);
    glVertex2f(-11.16,-3.23);
    glVertex2f(-11.18,-3.24);
    glVertex2f(-11.18,-3.25);
    glVertex2f(-11.17,-3.25);
    glVertex2f(-11.17,-3.25);
    glVertex2f(-11.15,-3.25);
    glVertex2f(-11.04,-3.24);
    glVertex2f(-10.97,-3.24);
    glVertex2f(-10.88,-3.24);
    glVertex2f(-10.86,-3.22);
    glVertex2f(-10.86,-3.2);
    glVertex2f(-10.86,-3.18);
    glVertex2f(-10.85,-3.17);
    glVertex2f(-10.86,-3.15);
    glVertex2f(-10.87,-3.15);
    glVertex2f(-10.88,-3.16);
    glVertex2f(-10.93,-3.15);
    glVertex2f(-11,-3.15);
    glVertex2f(-11.05,-3.15);
    glVertex2f(-11.13,-3.17);
    glVertex2f(-11.15,-3.17);
    glEnd();



    //lower 3nd section, 2
        if(nightstatus_a)
        glColor3ub(110, 80, 15); // Darker golden rod


        else
    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);

    glVertex2f(-10.85,-3.17);
    glVertex2f(-10.86,-3.18);
    glVertex2f(-10.86,-3.2);
    glVertex2f(-10.86,-3.22);
    glVertex2f(-10.88,-3.24);
    glVertex2f(-10.85,-3.24);
    glVertex2f(-10.84,-3.25);
    glVertex2f(-10.76,-3.23);
    glVertex2f(-10.71,-3.23);
    glVertex2f(-10.6,-3.23);
    glVertex2f(-10.56,-3.24);
    glVertex2f(-10.47,-3.24);
    glVertex2f(-10.49,-3.22);
    glVertex2f(-10.49,-3.2);
    glVertex2f(-10.49,-3.18);
    glVertex2f(-10.48,-3.16);
    glVertex2f(-10.49,-3.15);
    glVertex2f(-10.52,-3.15);
    glVertex2f(-10.58,-3.14);
    glVertex2f(-10.68,-3.14);
    glVertex2f(-10.76,-3.15);
    glVertex2f(-10.85,-3.17);
    glEnd();



    //lower 4th section, 1
        if(nightstatus_a)
        glColor3ub(110, 80, 15); // Darker golden rod


        else
    glColor3ub(139, 69, 19); // Saddle brown
    glBegin(GL_POLYGON);

    glVertex2f(-11.12,-3.1);
    glVertex2f(-11.11,-3.1);
    glVertex2f(-11.05,-3.09);
    glVertex2f(-10.97,-3.08);
    glVertex2f(-10.89,-3.07);
    glVertex2f(-10.84,-3.08);
    glVertex2f(-10.83,-3.07);
    glVertex2f(-10.81,-3.08);//
    glVertex2f(-10.83,-3.08);
    glVertex2f(-10.85,-3.08);
    glVertex2f(-10.85,-3.09);
    glVertex2f(-10.84,-3.1);
    glVertex2f(-10.85,-3.11);
    glVertex2f(-10.85,-3.13);
    glVertex2f(-10.84,-3.14);
    glVertex2f(-10.85,-3.15);
    glVertex2f(-10.85,-3.17);
    glVertex2f(-10.86,-3.15);
    glVertex2f(-10.87,-3.15);
    glVertex2f(-10.88,-3.16);
    glVertex2f(-10.93,-3.15);
    glVertex2f(-11,-3.15);
    glVertex2f(-11.05,-3.15);
    glVertex2f(-11.13,-3.17);
    glVertex2f(-11.15,-3.17);
    glVertex2f(-11.14,-3.16);
    glVertex2f(-11.13,-3.14);
    glVertex2f(-11.13,-3.13);
    glVertex2f(-11.13,-3.12);
    glVertex2f(-11.13,-3.11);
    glVertex2f(-11.12,-3.1);
    glEnd();




    //lower 4th section, 2
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);


    glVertex2f(-10.81,-3.08);
    glVertex2f(-10.83,-3.08);
    glVertex2f(-10.85,-3.08);
    glVertex2f(-10.85,-3.09);
    glVertex2f(-10.84,-3.1);
    glVertex2f(-10.85,-3.11);
    glVertex2f(-10.85,-3.13);
    glVertex2f(-10.84,-3.14);
    glVertex2f(-10.85,-3.15);
    glVertex2f(-10.85,-3.17);
    glVertex2f(-10.76,-3.15);
    glVertex2f(-10.68,-3.14);
    glVertex2f(-10.58,-3.14);
    glVertex2f(-10.57,-3.14);
    glVertex2f(-10.56,-3.12);
    glVertex2f(-10.56,-3.11);
    glVertex2f(-10.56,-3.1);
    glVertex2f(-10.56,-3.09);
    glVertex2f(-10.57,-3.08);
    glVertex2f(-10.58,-3.09);
    glVertex2f(-10.63,-3.08);
    glVertex2f(-10.69,-3.07);
    glVertex2f(-10.76,-3.07);
    glVertex2f(-10.81,-3.08);
    glEnd();



    //top section, 1
        if(nightstatus_a)
        glColor3ub(150, 105, 35); // Darker gold


        else
glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);


    glVertex2f(-11.12,-3.1);
    glVertex2f(-11.11,-3.1);
    glVertex2f(-11.05,-3.09);
    glVertex2f(-10.97,-3.08);
    glVertex2f(-10.89,-3.07);
    glVertex2f(-10.84,-3.08);
    glVertex2f(-10.83,-3.07);
    glVertex2f(-10.81,-3.08);//
    glVertex2f(-10.81,-3.06);
    glVertex2f(-10.82,-3.05);
    glVertex2f(-10.81,-3.03);
    glVertex2f(-10.82,-3.03);
    glVertex2f(-10.83,-3.02);
    glVertex2f(-10.84,-3.02);
    glVertex2f(-10.91,-3.02);
    glVertex2f(-10.96,-3.02);
    glVertex2f(-11.03,-3.02);
    glVertex2f(-11.08,-3.03);
    glVertex2f(-11.09,-3.03);
    glVertex2f(-11.1,-3.04);
    glVertex2f(-11.1,-3.05);
    glVertex2f(-11.11,-3.06);
    glVertex2f(-11.11,-3.07);
    glVertex2f(-11.11,-3.08);
    glVertex2f(-11.11,-3.09);
    glVertex2f(-11.12,-3.1);
    glEnd();

     glPopMatrix();
    }


    void hedgehog_a(float x, float y, float z)
    {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glScalef(z,z,0);

    //front
        if(nightstatus_a)
        glColor3ub(77, 77, 77); // Dark gray


        else
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON);

    glVertex2f(-11.42,-3);
    glVertex2f(-11.39,-3.03);
    glVertex2f(-11.47,-3.32);
    glVertex2f(-11.51,-3.29);
    glVertex2f(-11.42,-3);

    glEnd();


    //front-end
        if(nightstatus_a)
        glColor3ub(40, 40, 40); // Very dark gray


        else
    glColor3ub(105, 105, 105);
    glBegin(GL_POLYGON);

    glVertex2f(-11.47,-3.32);
    glVertex2f(-11.51,-3.29);
    glVertex2f(-11.5,-3.34);

    glEnd();




    //middle
        if(nightstatus_a)
        glColor3ub(77, 77, 77); // Dark gray


        else
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON);

    glVertex2f(-11.26,-3.08);
    glVertex2f(-11.23,-3.11);
    glVertex2f(-11.51,-3.26);
    glVertex2f(-11.55,-3.27);
    glVertex2f(-11.54,-3.23);
    glVertex2f(-11.26,-3.08);

    glEnd();


    //middle-end
        if(nightstatus_a)
        glColor3ub(40, 40, 40); // Very dark gray


        else
    glColor3ub(105, 105, 105);
    glBegin(GL_POLYGON);

    glVertex2f(-11.26,-3.08);
    glVertex2f(-11.23,-3.11);
    glVertex2f(-11.27,-3.12);

    glEnd();


    //middle- line
       if(nightstatus_a)
        glColor3ub(20, 20, 20); // Extremely dark gray


        else
    glColor3ub(50, 50, 50);
    glBegin(GL_LINES);


    glVertex2f(-11.27,-3.12);
    glVertex2f(-11.55,-3.27);

    glEnd();


    //back
     if(nightstatus_a)
        glColor3ub(77, 77, 77); // Dark gray


        else
    glColor3ub(169, 169, 169);
    glBegin(GL_POLYGON);

    glVertex2f(-11.55,-3.02);
    glVertex2f(-11.25,-3.26);
    glVertex2f(-11.29,-3.27);
    glVertex2f(-11.57,-3.05);
    glVertex2f(-11.55,-3.02);

    glEnd();


    //back-end
     if(nightstatus_a)

       glColor3ub(40, 40, 40); // Very dark gray


        else
    glColor3ub(105, 105, 105);
    glBegin(GL_POLYGON);

    glVertex2f(-11.57,-3.05);
    glVertex2f(-11.55,-3.02);
    glVertex2f(-11.53,-3.03);

    glEnd();
    glPopMatrix();
    }



void update_a(int value)
{
    _move_a -= .05;
    if(_move_a < -8)
    {
        _move_a = 1;
    }
    glutPostRedisplay();
   glutTimerFunc(20, update_a, 0);
}

void update1_a(int value)
{
    if(_move_a==-15)
    {
    _move_bomb_a -= .03;
    if(_move_bomb_a < -18)
    {
        _move_bomb_a = -12;
    }
    glutPostRedisplay();
   glutTimerFunc(20, update1_a, 0);    }

}

void update2_a(int value)
{
    _move_boat_a+=number_a;
    if(_move_boat_a>1.5)
    {
        number_a=0;
    }
    glutPostRedisplay();
   glutTimerFunc(20, update2_a, 0);

}

void update3_a(int value)
{
    _move_pakbullet_a+=1.5;
    if(_move_pakbullet_a>10)
    {
        _move_pakbullet_a=0;
    }
    glutPostRedisplay();
   glutTimerFunc(20, update3_a, 0);

}

void update4_a(int value)
{
    _move_banbullet_a -= 1.0;
    if(_move_banbullet_a < -20)
    {
        _move_banbullet_a = 1;
    }
    glutPostRedisplay();
   glutTimerFunc(20, update4_a, 0);
}



void display3()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(165,25,0);
    glScalef(14,5.8,0);

	mainBackGround_a();
    jet_a();
    bomb_a();
    jetcockpit_a();
	lowerfarvillage_a();
	upperfarvillage_a();
	riverbank_a();
	river_a();
	lawn_a();
	gunboat_a(0,0,1);
	gunboat_a(-7.2,-0.5,0.6);
	watchtower_a(0,0,1);
	watchtower_a(-3,0.2,0.8);
	sandbag_a(0,0,1);
	sandbag_a(-7,-0.1,0.5);
	sandbag_a(-3,-0.1,0.8);
	sandbag_a(-5.3,-0.0,0.6);
	hedgehog_a(0,0,1);
	hedgehog_a(-6,0.15,0.6);
	hedgehog_a(-9,-0.35,0.4);
	hedgehog_a(-3.2,-0.25,0.8);
    hedgehog_a(-4.8,-0.25,0.65);
    hedgehog_a(-4.8,0.15,0.75);
	banbullet_a(0,0,1);
	banbullet_a(-5.4,-0.1,0.5);
	banbullet_a(-8,-0.5,0.3);
	banbullet_a(-8.3,-0.7,0.3);
	banbullet_a(-5,-0.3,0.5);
	banbullet_a(-5.2,-0.4,0.5);
	banbullet_a(0.2,0.5,1);
	banbullet_a(0.8,-0.5,1);
	banbullet_a(-0.1,-0.3,1);
	banbullet_a(-5.9,-0.5,0.5);
	glPopMatrix();
	//branch();


    //glFlush();  // Render now
}

//-----------------------------------------saymon function------------------------------------------

void sky_N() {

    if(nightstatus_n==1)
        glColor3ub(89, 89, 89);
    else
        glColor3ub(179, 255, 255);
    glBegin(GL_POLYGON);

    glVertex2f(31.02, 108.58);
    glVertex2f(98.33, 108.55);
    glVertex2f(98.27,96.76);
    glVertex2f(31.08,96.76);
    glColor3ub(255, 153, 51);
    glVertex2f(70, 95);
    glColor3ub(255, 153, 51);
    glVertex2f(70, 10);
    glEnd();
}
void nightsky_n(){


    if(nightstatus_n==1)
    {
        glColor3ub(89, 89, 89);
    glBegin(GL_POLYGON);

    glVertex2f(31.02, 108.58);
    glVertex2f(98.33, 108.55);
    glVertex2f(98.27,96.76);
    glVertex2f(31.08,96.76);
    glColor3ub(128, 128, 128);
    glVertex2f(70, 95);
    glColor3ub(128, 128, 128);
    glVertex2f(70, 10);
    glEnd();

}
}
void Cloud_N(float x, float y) {
        if(nightstatus_n==0)
{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(move_Cloud_N,0,0);

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.95;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+87.61,y+102.11);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.87;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+89.17,y+102.68);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.97;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+87.66,y+103.17);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.81;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+86.13,y+103.19);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.8;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+84.64,y+102.73);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+85.97,y+102.11);
        }
	glEnd();
	glPopMatrix();
}
else {
        glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(move_Cloud_N,0,0);

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
    glColor3ub(115, 115, 115);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.87;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+89.17,y+102.68);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(115, 115, 115);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.97;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+87.66,y+103.17);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(115, 115, 115);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.81;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+86.13,y+103.19);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(115, 115, 115);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.8;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+84.64,y+102.73);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(115, 115, 115);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+85.97,y+102.11);
        }
	glEnd();
	glPopMatrix();
}

}
void sun_N(){
        if(nightstatus_n==0)
{


        glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(204, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.34;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+64,y+98);
        }
	glEnd();

	glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(63.38,101);
    glVertex2f(63.65,100.45);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(63,101);
    glVertex2f(63.4,100.4);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(62.6,100.9);
    glVertex2f(63,100.3);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(62.3,100.8);
    glVertex2f(62.76,100.2);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(62,100.7);
    glVertex2f(62.5,100.1);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(61.7,100.55);
    glVertex2f(62.25,99.25);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(61.6,100.3);
    glVertex2f(62.05,99.8);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(61.4,100.1);
    glVertex2f(61.9,99.65);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(63.62,101.04);
    glVertex2f(63.85,100.45);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(64,101);
    glVertex2f(64,100.45);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(64.5,101);
    glVertex2f(64.25,100.45);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(65.2,101);
    glVertex2f(64.8,100.4);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(65.6,100.8);
    glVertex2f(65.2,100.2);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(66,100.6);
    glVertex2f(65.6,100);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(66.55,100.35);
    glVertex2f(66,99.6);
    glEnd();

    glBegin(GL_LINES);// ray
    glColor3ub(0, 0, 0);

    glVertex2f(67,99.8);
    glVertex2f(66.4,99);
    glEnd();

}
    else{
        glBegin(GL_POLYGON);// moon
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35.5,y+106);
        }
	glEnd();

	glBegin(GL_POLYGON);// moon
	for(int i=0;i<200;i++)
        {
            glColor3ub(89, 89, 89);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.6;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+34.8,y+106.8);
        }
	glEnd();
    }
}

void jungle_N(float x) {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);

     glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.76;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+96.82,y+97.67);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.93;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+95.01,y+97.21);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.14;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+93.14,y+97.13);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.78;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+90,y+98);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 102, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+87,y+98);
        }
	glEnd();
	glPopMatrix();
}
void Bird_N(float x, float y){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(move_Bird_N,0,0);

    glBegin(GL_LINES);// bird
    glColor3ub(0, 0, 0);

    glVertex2f(91.5,105.49);
    glVertex2f(91.41,105.4);
    glVertex2f(91.4,105.4);
    glVertex2f(91.5,105.5);
    glEnd();

    glBegin(GL_LINES);// bird
    glColor3ub(0, 0, 0);

    glVertex2f(91.5,105.5);
    glVertex2f(92.5,105.5);
    glVertex2f(92.5,105.49);
    glVertex2f(91.5,105.49);
    glEnd();

    glBegin(GL_LINES);// bird
    glColor3ub(0, 0, 0);

    glVertex2f(92.5,105.5);
    glVertex2f(92.6,105.6);
    glVertex2f(92.6,105.59);
    glVertex2f(92.5,105.49);
    glEnd();



    glBegin(GL_LINES);// bird
    glColor3ub(0, 0, 0);

    glVertex2f(91.62,106);
    glVertex2f(92,105.52);
    glVertex2f(92,105.5);
    glVertex2f(91.6,106);
    glEnd();

    glBegin(GL_LINES);// bird
    glColor3ub(0, 0, 0);

    glVertex2f(92.4,106);
    glVertex2f(92,105.5);
    glVertex2f(92,105.52);
    glVertex2f(92.38,106);
    glEnd();
    glPopMatrix();
}
void tree_N(float x, float y) {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(34.22,90.23);
    glVertex2f(35.55,90.22);
    glVertex2f(36.69,89.69);
    glVertex2f(35.62,89.75);
    glVertex2f(34.89,89.13);
    glVertex2f(34.17,89.72);
    glVertex2f(33.05,89.75);
    glEnd();
    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(33.75,92.95);
    glVertex2f(34.22,92.78);
    glVertex2f(34.2,92.48);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(33.83,95.31);
    glVertex2f(34.07,95.6);
    glVertex2f(34.48,95.62);
    glVertex2f(35,95);
    glVertex2f(34.26,94.62);
    glEnd();


    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(35,95);
    glVertex2f(35.6, 95.63);
    glVertex2f(35.97, 95.73);
    glVertex2f(36.12,95.49);
    glVertex2f(35.53,95.01);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(34.26,94.62);
    glVertex2f(35,95);
    glVertex2f(35.53,95.01);
    glVertex2f(35.55,90.22);
    glVertex2f(34.22,90.23);
    glVertex2f(34.2,92.48);
    glVertex2f(34.22,92.78);
    glEnd();

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.09;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+34.65,y+96.86);
        }
	glEnd();

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.22;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+36.72,y+95.32);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.22;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+36.86,y+96.21);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+36.43,y+97.81);
        }
	glEnd();

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+34.85,y+98.95);
        }
	glEnd();
glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.09;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+33.24,y+97.97);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(51, 204, 51);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.48;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+32.88,y+96.27);
        }
	glEnd();
	glPopMatrix();
}
void field_N() {
    glBegin(GL_POLYGON);//left field
    glColor3ub(0, 153, 51);


    glVertex2f(31.08,96.76);
    glVertex2f(49.51,96.76);
    glVertex2f(52.3,91.27);
    glVertex2f(48,81.08);
    glVertex2f(31.07, 81.12);

    glBegin(GL_POLYGON);//right field
    glColor3ub(0, 153, 51);

    glVertex2f(74, 96.76);
    glVertex2f(98.27, 96.76);
    glVertex2f(98.32,80.98);
    glVertex2f(76.45,81.02);
    glVertex2f(71.02,91.6);
    glEnd();


}
void river_N() {
        if(nightstatus_n==0)
        {
    glBegin(GL_POLYGON);//river
    glColor3ub(153, 204, 255);


    glVertex2f(52.5,91.3);
    glVertex2f(50,96.76);
    glVertex2f(73.76,96.76);
    glVertex2f(70.9,91.6);
    glVertex2f(76,81.03);
    glVertex2f(48.42,81.08);

    glEnd();

    glBegin(GL_POLYGON);// left river border top
    glColor3ub(179, 119, 0);


    glVertex2f(49.51,96.76);
    glVertex2f(50,96.76);
    glVertex2f(52.5,91.3);
    glVertex2f(52.3,91.27);
    glEnd();

    glBegin(GL_POLYGON);// left river border
    glColor3ub(179, 119, 0);


    glVertex2f(52.3,91.27);
    glVertex2f(52.5,91.3);
    glVertex2f(48.42,81.08);
    glVertex2f(48,81.08);
    glEnd();

    glBegin(GL_POLYGON);// right river border top
    glColor3ub(179, 119, 0);


    glVertex2f(73.76,96.76);
    glVertex2f(74,96.76);
    glVertex2f(71.2,91.6);
    glVertex2f(70.9,91.6);
    glEnd();

    glBegin(GL_POLYGON);// right river border
    glColor3ub(179, 119, 0);


    glVertex2f(70.9,91.6);
    glVertex2f(71.2,91.6);
    glVertex2f(76.45,81.02);
    glVertex2f(76,81.03);
    glEnd();

}

else{

    glBegin(GL_POLYGON);//river
    glColor3ub(0, 68, 102);


    glVertex2f(52.5,91.3);
    glVertex2f(50,96.76);
    glVertex2f(73.76,96.76);
    glVertex2f(70.9,91.6);
    glVertex2f(76,81.03);
    glVertex2f(48.42,81.08);

    glEnd();

    glBegin(GL_POLYGON);// left river border top
    glColor3ub(179, 119, 0);


    glVertex2f(49.51,96.76);
    glVertex2f(50,96.76);
    glVertex2f(52.5,91.3);
    glVertex2f(52.3,91.27);
    glEnd();

    glBegin(GL_POLYGON);// left river border
    glColor3ub(179, 119, 0);


    glVertex2f(52.3,91.27);
    glVertex2f(52.5,91.3);
    glVertex2f(48.42,81.08);
    glVertex2f(48,81.08);
    glEnd();

    glBegin(GL_POLYGON);// right river border top
    glColor3ub(179, 119, 0);


    glVertex2f(73.76,96.76);
    glVertex2f(74,96.76);
    glVertex2f(71.2,91.6);
    glVertex2f(70.9,91.6);
    glEnd();

    glBegin(GL_POLYGON);// right river border
    glColor3ub(179, 119, 0);


    glVertex2f(70.9,91.6);
    glVertex2f(71.2,91.6);
    glVertex2f(76.45,81.02);
    glVertex2f(76,81.03);
    glEnd();

}}

void Boat_N(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move_Boat_N,0,0);

    glBegin(GL_POLYGON);//boat
    glColor3ub(0, 0, 0);


    glVertex2f(53,90);
    glVertex2f(56,90);
    glVertex2f(56,89.5);
    glVertex2f(53,89.5);
    glEnd();

    glBegin(GL_POLYGON);//boat
    glColor3ub(0, 0, 0);


    glVertex2f(52.4,90.2);
    glVertex2f(53,90);
    glVertex2f(53,89.5);
    glEnd();

    glBegin(GL_POLYGON);//boat
    glColor3ub(0, 0, 0);


    glVertex2f(56,90);
    glVertex2f(56.6,90.2);
    glVertex2f(56,89.5);
    glEnd();

    glBegin(GL_POLYGON);//rooftop
    glColor3ub(172, 115, 57);


    glVertex2f(53.4,90.4);
    glVertex2f(55.6,90.4);
    glVertex2f(55.2,90);
    glVertex2f(53,90);
    glEnd();

    glBegin(GL_LINES);//rooftop lines
    glColor3ub(0, 0, 0);


    glVertex2f(53.4,90.4);
    glVertex2f(55.6,90.4);
    glVertex2f(55.6,90.4);
    glVertex2f(55.2,90);
    glVertex2f(55.2,90);
    glVertex2f(53,90);
    glVertex2f(53,90);
    glVertex2f(53.4,90.4);
    glEnd();

    glBegin(GL_POLYGON);//rooftop
    glColor3ub(0, 0, 0);


    glVertex2f(55.6,90.4);
    glVertex2f(56,90);
    glVertex2f(55.2,90);
    glEnd();

    glBegin(GL_POLYGON);//pal
    glColor3ub(255, 80, 80);


    glVertex2f(54,91.2);
    glVertex2f(55.4,91.2);
    glVertex2f(55.2,90.4);
    glVertex2f(53.8,90.4);
    glEnd();

    glBegin(GL_LINES);//pal lines
    glColor3ub(0, 0, 0);


    glVertex2f(54,91.2);
    glVertex2f(55.4,91.2);
    glVertex2f(55.4,91.2);
    glVertex2f(55.2,90.4);
    glVertex2f(55.2,90.4);
    glVertex2f(53.8,90.4);
    glVertex2f(53.8,90.4);
    glVertex2f(54,91.2);
    glEnd();

    glBegin(GL_POLYGON);//pal
    glColor3ub(0, 0, 0);


    glVertex2f(54.6,92.15);
    glVertex2f(54.63,92.15);
    glVertex2f(54.63,91.2);
    glVertex2f(54.6,91.2);
    glEnd();
    glPopMatrix();
}
void floatingtree_N(float x, float y){
        if(nightstatus_n==0)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0,move_floatingtree_N,0);

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.2,84);
    glVertex2f(60.8,84);
    glVertex2f(61.4,83.8);
    glVertex2f(60.9,83.8);
    glVertex2f(60.5,83.6);
    glVertex2f(60.2,83.8);
    glVertex2f(59.6,83.8);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.8,85.4);
    glVertex2f(61.2,85.6);
    glVertex2f(60.8,85);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(59.8,86.2);
    glVertex2f(60,86.4);
    glVertex2f(60.5,85.8);
    glVertex2f(60.2,85.8);
    glEnd();


    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(61,86.4);
    glVertex2f(61.2, 86.2);
    glVertex2f(60.8, 85.8);
    glVertex2f(60.5,85.5);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.2,85.8);
    glVertex2f(60.8,85.8);
    glVertex2f(60.8,84);
    glVertex2f(60.2,84);
    glEnd();

	glBegin(GL_POLYGON);// right river border
    glColor3ub(153, 204, 255);


    glVertex2f(58.99,87);
    glVertex2f(60.47,86.99);
    glVertex2f(60.49,83);
    glVertex2f(59,83);
    glEnd();
    glPopMatrix();

}
else{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0,move_floatingtree_N,0);

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.2,84);
    glVertex2f(60.8,84);
    glVertex2f(61.4,83.8);
    glVertex2f(60.9,83.8);
    glVertex2f(60.5,83.6);
    glVertex2f(60.2,83.8);
    glVertex2f(59.6,83.8);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.8,85.4);
    glVertex2f(61.2,85.6);
    glVertex2f(60.8,85);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(59.8,86.2);
    glVertex2f(60,86.4);
    glVertex2f(60.5,85.8);
    glVertex2f(60.2,85.8);
    glEnd();


    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);
    glVertex2f(61,86.4);
    glVertex2f(61.2, 86.2);
    glVertex2f(60.8, 85.8);
    glVertex2f(60.5,85.5);
    glEnd();

    glBegin(GL_POLYGON);// tree body
    glColor3ub(102, 51, 0);

    glVertex2f(60.2,85.8);
    glVertex2f(60.8,85.8);
    glVertex2f(60.8,84);
    glVertex2f(60.2,84);
    glEnd();

	glBegin(GL_POLYGON);// Tree cover
    glColor3ub(0, 68, 102);


    glVertex2f(58.99,87);
    glVertex2f(60.47,86.99);
    glVertex2f(60.49,83);
    glVertex2f(59,83);
    glEnd();
    glPopMatrix();
}
}
void floatingtre_N(float x, float y){
 glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0, move_floatingtre_N,0);
    glBegin(GL_POLYGON);// tree body 2


    glColor3ub(102, 51, 0);

    glVertex2f(57,94.92);
    glVertex2f(58,95);
    glVertex2f(57.97,93.18);
    glVertex2f(57,93);
    glEnd();

    glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+57.5,y+95);
        }
	glEnd();

	glBegin(GL_POLYGON);// tree leaf
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+57.5,y+93);
        }
	glEnd();
	glPopMatrix();
}
void floatinghome_N(float x, float y){
        if(nightstatus_n==0)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0,move_floatinghome_N,0);
    glBegin(GL_POLYGON);// rooftop
    glColor3ub(255, 51, 0);

    glVertex2f(63,91);
    glVertex2f(63.5,94);
    glVertex2f(64,94.5);
    glVertex2f(64,92);
    glEnd();

    glBegin(GL_LINES);// rooftop lines
    glColor3ub(0, 0, 0);

    glVertex2f(63,91);
    glVertex2f(63.5,94);
    glVertex2f(63.5,94);
    glVertex2f(64,94.5);
    glVertex2f(64,94.5);
    glVertex2f(64,92);
    glVertex2f(64,92);
    glVertex2f(63,91);
    glEnd();

    glBegin(GL_POLYGON);// rooftop
    glColor3ub(0, 0, 0);
    glVertex2f(63,91);
    glVertex2f(64,92);
    glVertex2f(64,90);
    glEnd();

    glBegin(GL_POLYGON);// rooftop
    glColor3ub(153, 204, 255);
    glVertex2f(62.5,94.5);
    glVertex2f(64.5,94.5);
    glVertex2f(64.5,92.8);
    glVertex2f(62.5,93.5);
    glEnd();
    glPopMatrix();
}
else{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0,move_floatinghome_N,0);
    glBegin(GL_POLYGON);// rooftop
    glColor3ub(255, 51, 0);

    glVertex2f(63,91);
    glVertex2f(63.5,94);
    glVertex2f(64,94.5);
    glVertex2f(64,92);
    glEnd();

    glBegin(GL_POLYGON);// rooftop
    glColor3ub(0, 0, 0);
    glVertex2f(63,91);
    glVertex2f(64,92);
    glVertex2f(64,90);
    glEnd();

    glBegin(GL_POLYGON);// rooftop
    glColor3ub(0, 68, 102);
    glVertex2f(62.5,94.5);
    glVertex2f(64.5,94.5);
    glVertex2f(64.5,92.8);
    glVertex2f(62.5,93.5);
    glEnd();
    glPopMatrix();
}
}
void Haysatck_N(){
    glBegin(GL_POLYGON);//Haysatck
    glColor3ub(230, 184, 0);


    glVertex2f(44.22,93.87);
    glVertex2f(46.25,94.76);
    glVertex2f(46.61,94.76);
    glVertex2f(48.34,94.03);
    glVertex2f(49.79,92.37);
    glVertex2f(50.43,90.26);
    glVertex2f(45,90.27);

    glEnd();

    glBegin(GL_POLYGON);//Haysatck
    glColor3ub(153, 102, 51);


    glVertex2f(46.26,95.11);
    glVertex2f(46.6,95.11);
    glVertex2f(46.61,94.76);
    glVertex2f(46.25,94.76);
    glEnd();

    glBegin(GL_LINES);//Haysatck
    glColor3ub(0, 0, 0);


    glVertex2f(46.26,95.11);
    glVertex2f(46.6,95.11);
    glVertex2f(46.6,95.11);
    glVertex2f(46.61,94.76);
    glVertex2f(46.61,94.76);
    glVertex2f(46.25,94.76);
    glVertex2f(46.25,94.76);
    glVertex2f(46.26,95.11);
    glEnd();

    glBegin(GL_LINES);//Haysatck
    glColor3ub(0, 0, 0);


    glVertex2f(44.22,93.87);
    glVertex2f(46.25,94.76);
    glVertex2f(46.25,94.76);
    glVertex2f(46.61,94.76);
    glVertex2f(46.61,94.76);
    glVertex2f(48.34,94.03);
    glVertex2f(48.34,94.03);
    glVertex2f(49.79,92.37);
    glVertex2f(49.79,92.37);
    glVertex2f(50.43,90.26);
    glVertex2f(50.43,90.26);
    glVertex2f(45,90.27);
    glEnd();

}
void house_N() {
        if(nightstatus_n==0)
    {
    glBegin(GL_POLYGON);// left rooftop
    glColor3ub(102, 51, 0);


    glVertex2f(38.42,94.7);
    glVertex2f(43.43,94.71);
    glVertex2f(45.6,92.4);
    glVertex2f(40.38,92.4);
    glEnd();

    glBegin(GL_LINES);// left rooftop lines
    glColor3ub(0, 0, 0);


    glVertex2f(38.42,94.7);
    glVertex2f(43.43,94.71);
    glVertex2f(43.43,94.71);
    glVertex2f(45.6,92.4);
    glVertex2f(45.6,92.4);
    glVertex2f(40.38,92.4);
    glVertex2f(40.38,92.4);
    glVertex2f(38.42,94.7);
    glEnd();

    glBegin(GL_POLYGON);//left rooftop border
    glColor3ub(102, 51, 0);


    glVertex2f(38.18,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(36.24,92.45);
    glVertex2f(35.73,92.45);
    glEnd();

    glBegin(GL_LINES);//left rooftop border lines
    glColor3ub(0, 0, 0);


    glVertex2f(38.18,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(36.24,92.45);
    glVertex2f(36.24,92.45);
    glVertex2f(35.73,92.45);
    glVertex2f(35.73,92.45);
    glVertex2f(38.18,94.7);
    glEnd();

    glBegin(GL_POLYGON);//left house body 1
    glColor3ub(153, 102, 51);


    glVertex2f(40.29,92.51);
    glVertex2f(45,92.4);
    glVertex2f(45,90.27);
    glVertex2f(40.26,90.26);
    glEnd();

    glBegin(GL_LINES);//left house body 1 line
    glColor3ub(0, 0, 0);

    glVertex2f(40.29,92.51);
    glVertex2f(45,92.4);
    glVertex2f(45,92.4);
    glVertex2f(45,90.27);
    glVertex2f(45,90.27);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90.26);
    glVertex2f(40.29,92.51);
    glEnd();

    glBegin(GL_POLYGON);//left house body 2
    glColor3ub(204, 102, 0);


    glVertex2f(36.31,92.52);
    glVertex2f(38.42,94.7);
    glVertex2f(40.29,92.51);
    glVertex2f(40.26,90.26);
    glVertex2f(36.32,90.78);
    glEnd();

    glBegin(GL_LINES);//left house body 2 LINES
    glColor3ub(0, 0, 0);


    glVertex2f(36.31,92.52);
    glVertex2f(38.42,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(40.29,92.51);
    glVertex2f(40.29,92.51);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90.26);
    glVertex2f(36.32,90.78);
    glVertex2f(36.32,90.78);
    glVertex2f(36.31,92.52);
    glEnd();

    glBegin(GL_POLYGON);//left window
    glColor3ub(0, 0, 0);


    glVertex2f(37.6,92.4);
    glVertex2f(38.95,92.4);
    glVertex2f(38.95,91.35);
    glVertex2f(37.6,91.35);
    glEnd();

    glBegin(GL_POLYGON);//left Door
    glColor3ub(153, 153, 0);


    glVertex2f(41.66,92.19);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,90.27);
    glVertex2f(41.66,90.26);
    glEnd();

    glBegin(GL_LINES);//left Door lines
    glColor3ub(0, 0, 0);


    glVertex2f(41.66,92.19);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,90.27);
    glVertex2f(43.66,90.27);
    glVertex2f(41.66,90.26);
    glVertex2f(41.66,90.26);
    glVertex2f(41.66,92.19);
    glEnd();

    glBegin(GL_POLYGON);//left Door middle
    glColor3ub(0, 0, 255);


    glVertex2f(42.78,91.98);
    glVertex2f(42.78,90.26);
    glVertex2f(42.59,90.26);
    glVertex2f(42.59,91.99);
    glVertex2f(41.97,92.19);
    glVertex2f(43.56,92.2);
    glEnd();

    glBegin(GL_POLYGON);//left ground border
    glColor3ub(102, 51, 0);


    glVertex2f(36.32,90.78);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90);
    glVertex2f(35.85,90.61);
    glEnd();

    glBegin(GL_POLYGON);//left ground border
    glColor3ub(102, 51, 0);
    glVertex2f(40.26,90.26);
    glVertex2f(45,90.27);
    glVertex2f(45.5,90);
    glVertex2f(40.26,90);
    glEnd();

    glBegin(GL_LINES);//left ground border line
    glColor3ub(0, 0, 0);
    glVertex2f(40.26,90.26);
    glVertex2f(45,90.27);
    glVertex2f(45,90.27);
    glVertex2f(45.5,90);
    glVertex2f(45.5,90);
    glVertex2f(40.26,90);
    glVertex2f(40.26,90);
    glVertex2f(40.26,90.26);
    glEnd();

    glBegin(GL_POLYGON);// Right rooftop
    glColor3ub(51, 102, 153);


    glVertex2f(76.23,94.69);
    glVertex2f(81.19,94.7);
    glVertex2f(83.3,92.5);
    glVertex2f(78.1,92.5);
    glEnd();

    glBegin(GL_LINES);// Right rooftop lines
    glColor3ub(0, 0, 0);


    glVertex2f(76.23,94.69);
    glVertex2f(81.19,94.7);
    glVertex2f(81.19,94.7);
    glVertex2f(83.3,92.5);
    glVertex2f(83.3,92.5);
    glVertex2f(78.1,92.5);
    glVertex2f(78.1,92.5);
    glVertex2f(76.23,94.69);
    glEnd();

    glBegin(GL_POLYGON);//right rooftop border
    glColor3ub(51, 102, 153);


    glVertex2f(75.87,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(74,92.5);
    glVertex2f(73.5,92.5);
    glEnd();

    glBegin(GL_LINES);//right rooftop border lines
    glColor3ub(0, 0, 0);


    glVertex2f(75.87,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(74,92.5);
    glVertex2f(74,92.5);
    glVertex2f(73.5,92.5);
    glVertex2f(73.5,92.5);
    glVertex2f(75.87,94.69);
    glEnd();

    glBegin(GL_POLYGON);//right house body
    glColor3ub(153, 102, 51);


    glVertex2f(78.01,92.61);
    glVertex2f(82.86,92.5);
    glVertex2f(82.85,90.21);
    glVertex2f(78,90.21);
    glEnd();

    glBegin(GL_LINES);//right house body lines
    glColor3ub(0, 0, 0);


    glVertex2f(78.01,92.61);
    glVertex2f(82.86,92.5);
    glVertex2f(82.86,92.5);
    glVertex2f(82.85,90.21);
    glVertex2f(82.85,90.21);
    glVertex2f(78,90.21);
    glVertex2f(78,90.21);
    glVertex2f(78.01,92.61);
    glEnd();

    glBegin(GL_POLYGON);//right house body
    glColor3ub(204, 102, 0);


    glVertex2f(74.08,92.58);
    glVertex2f(76.23,94.69);
    glVertex2f(78.01,92.61);
    glVertex2f(78,90.21);
    glVertex2f(74.14,90.73);
    glEnd();

    glBegin(GL_LINES);//right house body lines
    glColor3ub(0, 0, 0);


    glVertex2f(74.08,92.58);
    glVertex2f(76.23,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(78.01,92.61);
    glVertex2f(78.01,92.61);
    glVertex2f(78,90.21);
    glVertex2f(78,90.21);
    glVertex2f(74.14,90.73);
    glVertex2f(74.14,90.73);
    glVertex2f(74.08,92.58);
    glEnd();

    glBegin(GL_POLYGON);//right window
    glColor3ub(0, 0, 0);


    glVertex2f(75.4,92.4);
    glVertex2f(76.8,92.4);
    glVertex2f(76.8,91.4);
    glVertex2f(75.4,91.4);
    glEnd();

    glBegin(GL_POLYGON);//right Door
    glColor3ub(102, 51, 0);


    glVertex2f(79.4,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.53,90.21);
    glVertex2f(79.4,90.2);
    glEnd();

    glBegin(GL_LINES);//right Door lines
    glColor3ub(0, 0, 0);


    glVertex2f(79.4,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.53,90.21);
    glVertex2f(81.53,90.21);
    glVertex2f(79.4,90.2);
    glVertex2f(79.4,90.2);
    glVertex2f(79.4,92.18);
    glEnd();

    glBegin(GL_POLYGON);//right Door border
    glColor3ub(0, 0, 0);


    glVertex2f(80.6,92);
    glVertex2f(80.59,90.21);
    glVertex2f(80.34,90.21);
    glVertex2f(80.35,92);
    glVertex2f(79.6,92.18);
    glVertex2f(81.3,92.18);
    glEnd();

    glBegin(GL_POLYGON);//right ground border
    glColor3ub(51, 102, 153);


    glVertex2f(74.12,90.73);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,89.76);
    glVertex2f(73.7,90.43);
    glEnd();

    glBegin(GL_LINES);//right ground border lines
    glColor3ub(0, 0, 0);


    glVertex2f(74.12,90.73);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(73.7,90.43);
    glVertex2f(73.7,90.43);
    glVertex2f(74.12,90.73);
    glEnd();

    glBegin(GL_POLYGON);//right ground border
    glColor3ub(51, 102, 153);


    glVertex2f(78.06,90.2);
    glVertex2f(82.85,90.21);
    glVertex2f(83.39,89.76);
    glVertex2f(78.06,89.76);
    glEnd();

    glBegin(GL_LINES);//right ground border lines
    glColor3ub(0, 0, 0);


    glVertex2f(78.06,90.2);
    glVertex2f(82.85,90.21);
    glVertex2f(82.85,90.21);
    glVertex2f(83.39,89.76);
    glVertex2f(83.39,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,90.2);
    glEnd();


}
else{
    glBegin(GL_POLYGON);// left rooftop
    glColor3ub(102, 51, 0);


    glVertex2f(38.42,94.7);
    glVertex2f(43.43,94.71);
    glVertex2f(45.6,92.4);
    glVertex2f(40.38,92.4);
    glEnd();

    glBegin(GL_LINES);// left rooftop lines
    glColor3ub(0, 0, 0);


    glVertex2f(38.42,94.7);
    glVertex2f(43.43,94.71);
    glVertex2f(43.43,94.71);
    glVertex2f(45.6,92.4);
    glVertex2f(45.6,92.4);
    glVertex2f(40.38,92.4);
    glVertex2f(40.38,92.4);
    glVertex2f(38.42,94.7);
    glEnd();

    glBegin(GL_POLYGON);//left rooftop border
    glColor3ub(102, 51, 0);


    glVertex2f(38.18,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(36.24,92.45);
    glVertex2f(35.73,92.45);
    glEnd();

    glBegin(GL_LINES);//left rooftop border lines
    glColor3ub(0, 0, 0);


    glVertex2f(38.18,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(36.24,92.45);
    glVertex2f(36.24,92.45);
    glVertex2f(35.73,92.45);
    glVertex2f(35.73,92.45);
    glVertex2f(38.18,94.7);
    glEnd();

    glBegin(GL_POLYGON);//left house body 1
    glColor3ub(153, 102, 51);


    glVertex2f(40.29,92.51);
    glVertex2f(45,92.4);
    glVertex2f(45,90.27);
    glVertex2f(40.26,90.26);
    glEnd();

    glBegin(GL_LINES);//left house body 1 line
    glColor3ub(0, 0, 0);

    glVertex2f(40.29,92.51);
    glVertex2f(45,92.4);
    glVertex2f(45,92.4);
    glVertex2f(45,90.27);
    glVertex2f(45,90.27);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90.26);
    glVertex2f(40.29,92.51);
    glEnd();

    glBegin(GL_POLYGON);//left house body 2
    glColor3ub(204, 102, 0);


    glVertex2f(36.31,92.52);
    glVertex2f(38.42,94.7);
    glVertex2f(40.29,92.51);
    glVertex2f(40.26,90.26);
    glVertex2f(36.32,90.78);
    glEnd();

    glBegin(GL_LINES);//left house body 2 LINES
    glColor3ub(0, 0, 0);


    glVertex2f(36.31,92.52);
    glVertex2f(38.42,94.7);
    glVertex2f(38.42,94.7);
    glVertex2f(40.29,92.51);
    glVertex2f(40.29,92.51);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90.26);
    glVertex2f(36.32,90.78);
    glVertex2f(36.32,90.78);
    glVertex2f(36.31,92.52);
    glEnd();

    glBegin(GL_POLYGON);//left window
    glColor3ub(255, 255, 255);


    glVertex2f(37.6,92.4);
    glVertex2f(38.95,92.4);
    glVertex2f(38.95,91.35);
    glVertex2f(37.6,91.35);
    glEnd();

    glBegin(GL_POLYGON);//left Door
    glColor3ub(153, 153, 0);


    glVertex2f(41.66,92.19);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,90.27);
    glVertex2f(41.66,90.26);
    glEnd();

    glBegin(GL_LINES);//left Door lines
    glColor3ub(0, 0, 0);


    glVertex2f(41.66,92.19);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,92.2);
    glVertex2f(43.66,90.27);
    glVertex2f(43.66,90.27);
    glVertex2f(41.66,90.26);
    glVertex2f(41.66,90.26);
    glVertex2f(41.66,92.19);
    glEnd();

    glBegin(GL_POLYGON);//left Door middle
    glColor3ub(255, 255, 255);


    glVertex2f(42.78,91.98);
    glVertex2f(42.78,90.26);
    glVertex2f(42.59,90.26);
    glVertex2f(42.59,91.99);
    glVertex2f(41.97,92.19);
    glVertex2f(43.56,92.2);
    glEnd();

    glBegin(GL_POLYGON);//left ground border
    glColor3ub(102, 51, 0);


    glVertex2f(36.32,90.78);
    glVertex2f(40.26,90.26);
    glVertex2f(40.26,90);
    glVertex2f(35.85,90.61);
    glEnd();

    glBegin(GL_POLYGON);//left ground border
    glColor3ub(102, 51, 0);
    glVertex2f(40.26,90.26);
    glVertex2f(45,90.27);
    glVertex2f(45.5,90);
    glVertex2f(40.26,90);
    glEnd();

    glBegin(GL_LINES);//left ground border line
    glColor3ub(0, 0, 0);
    glVertex2f(40.26,90.26);
    glVertex2f(45,90.27);
    glVertex2f(45,90.27);
    glVertex2f(45.5,90);
    glVertex2f(45.5,90);
    glVertex2f(40.26,90);
    glVertex2f(40.26,90);
    glVertex2f(40.26,90.26);
    glEnd();

    glBegin(GL_POLYGON);// Right rooftop
    glColor3ub(0, 64, 128);


    glVertex2f(76.23,94.69);
    glVertex2f(81.19,94.7);
    glVertex2f(83.3,92.5);
    glVertex2f(78.1,92.5);
    glEnd();

    glBegin(GL_LINES);// Right rooftop lines
    glColor3ub(0, 0, 0);


    glVertex2f(76.23,94.69);
    glVertex2f(81.19,94.7);
    glVertex2f(81.19,94.7);
    glVertex2f(83.3,92.5);
    glVertex2f(83.3,92.5);
    glVertex2f(78.1,92.5);
    glVertex2f(78.1,92.5);
    glVertex2f(76.23,94.69);
    glEnd();

    glBegin(GL_POLYGON);//right rooftop border
    glColor3ub(0, 64, 128);


    glVertex2f(75.87,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(74,92.5);
    glVertex2f(73.5,92.5);
    glEnd();

    glBegin(GL_LINES);//right rooftop border lines
    glColor3ub(0, 0, 0);


    glVertex2f(75.87,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(74,92.5);
    glVertex2f(74,92.5);
    glVertex2f(73.5,92.5);
    glVertex2f(73.5,92.5);
    glVertex2f(75.87,94.69);
    glEnd();

    glBegin(GL_POLYGON);//right house body
    glColor3ub(153, 102, 51);


    glVertex2f(78.01,92.61);
    glVertex2f(82.86,92.5);
    glVertex2f(82.85,90.21);
    glVertex2f(78,90.21);
    glEnd();

    glBegin(GL_LINES);//right house body lines
    glColor3ub(0, 0, 0);


    glVertex2f(78.01,92.61);
    glVertex2f(82.86,92.5);
    glVertex2f(82.86,92.5);
    glVertex2f(82.85,90.21);
    glVertex2f(82.85,90.21);
    glVertex2f(78,90.21);
    glVertex2f(78,90.21);
    glVertex2f(78.01,92.61);
    glEnd();

    glBegin(GL_POLYGON);//right house body
    glColor3ub(204, 102, 0);


    glVertex2f(74.08,92.58);
    glVertex2f(76.23,94.69);
    glVertex2f(78.01,92.61);
    glVertex2f(78,90.21);
    glVertex2f(74.14,90.73);
    glEnd();

    glBegin(GL_LINES);//right house body lines
    glColor3ub(0, 0, 0);


    glVertex2f(74.08,92.58);
    glVertex2f(76.23,94.69);
    glVertex2f(76.23,94.69);
    glVertex2f(78.01,92.61);
    glVertex2f(78.01,92.61);
    glVertex2f(78,90.21);
    glVertex2f(78,90.21);
    glVertex2f(74.14,90.73);
    glVertex2f(74.14,90.73);
    glVertex2f(74.08,92.58);
    glEnd();

    glBegin(GL_POLYGON);//right window
    glColor3ub(255, 255, 255);


    glVertex2f(75.4,92.4);
    glVertex2f(76.8,92.4);
    glVertex2f(76.8,91.4);
    glVertex2f(75.4,91.4);
    glEnd();

    glBegin(GL_POLYGON);//right Door
    glColor3ub(102, 51, 0);


    glVertex2f(79.4,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.53,90.21);
    glVertex2f(79.4,90.2);
    glEnd();

    glBegin(GL_LINES);//right Door lines
    glColor3ub(0, 0, 0);


    glVertex2f(79.4,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.52,92.18);
    glVertex2f(81.53,90.21);
    glVertex2f(81.53,90.21);
    glVertex2f(79.4,90.2);
    glVertex2f(79.4,90.2);
    glVertex2f(79.4,92.18);
    glEnd();

    glBegin(GL_POLYGON);//right Door border
    glColor3ub(255, 255, 255);


    glVertex2f(80.6,92);
    glVertex2f(80.59,90.21);
    glVertex2f(80.34,90.21);
    glVertex2f(80.35,92);
    glVertex2f(79.6,92.18);
    glVertex2f(81.3,92.18);
    glEnd();

    glBegin(GL_POLYGON);//right ground border
    glColor3ub(0, 64, 128);


    glVertex2f(74.12,90.73);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,89.76);
    glVertex2f(73.7,90.43);
    glEnd();

    glBegin(GL_LINES);//right ground border lines
    glColor3ub(0, 0, 0);


    glVertex2f(74.12,90.73);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,90.2);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(73.7,90.43);
    glVertex2f(73.7,90.43);
    glVertex2f(74.12,90.73);
    glEnd();

    glBegin(GL_POLYGON);//right ground border
    glColor3ub(0, 64, 128);


    glVertex2f(78.06,90.2);
    glVertex2f(82.85,90.21);
    glVertex2f(83.39,89.76);
    glVertex2f(78.06,89.76);
    glEnd();

    glBegin(GL_LINES);//right ground border lines
    glColor3ub(0, 0, 0);


    glVertex2f(78.06,90.2);
    glVertex2f(82.85,90.21);
    glVertex2f(82.85,90.21);
    glVertex2f(83.39,89.76);
    glVertex2f(83.39,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,89.76);
    glVertex2f(78.06,90.2);
    glEnd();
}
}
void display4() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-133,-72.7,0);
    glScalef(1.7,0.9,0);
    sky_N();
    nightsky_n();
    sun_N();
    Cloud_N(0,0);
    Cloud_N(-14,-2);
    Cloud_N(-16,2);
    Cloud_N(-28,-0);
    Cloud_N(-42,3);
    Cloud_N(-65,-0);

    Bird_N(0,0);
    Bird_N(-1,2);
    Bird_N(-4,0);
    Bird_N(-6,2);
    Bird_N(-8,0);
    Bird_N(-9,-2);
    Bird_N(-3,-2);

    jungle_N(0);
    jungle_N(-9.82);
    jungle_N(-19.64);
    jungle_N(-29.46);
    jungle_N(-39.28);
    jungle_N(-49.1);
    jungle_N(-58.92);
    field_N();
    Haysatck_N();
    house_N();
    tree_N(0,0);
    tree_N(49,4);
    river_N();
    floatingtree_N(0,0);
    floatingtree_N(5,0);
    floatingtree_N(10,9);
    floatingtre_N(0,0);
    floatingtre_N(6,-6);
    floatinghome_N(0,0);
    floatinghome_N(-5,-5);
    Boat_N();
    glPopMatrix();
}
void update5_N(int value)     //Cloud move 2
{

         move_Cloud_N -= 0.04;
        if(move_Cloud_N < -20)
        {
            move_Cloud_N = 2;
        }
        glutPostRedisplay();
        glutTimerFunc(20, update5_N, 0);


}
void update6_N(int value)     //Boat move 2
{
    if(boatstatus_n==1)
    {

         move_Boat_N += 0.004;
        if(move_Boat_N >15)
        {
            move_Boat_N = 0;
        }
    }
        glutPostRedisplay();
        glutTimerFunc(20, update6_N, 0);



}
void update7_N(int value)     //Bird move 2
{

         move_Bird_N -= 0.04;
        if(move_Bird_N < -50)
        {
            move_Bird_N = 2;
        }
        glutPostRedisplay();
        glutTimerFunc(20, update7_N, 0);


}
void update8_N(int value)     //Bird move 2
{

         move_floatingtree_N += 0.008;
        if(move_floatingtree_N >0.8)
        {
            move_floatingtree_N = -6;
        }
        glutPostRedisplay();
        glutTimerFunc(20, update8_N, 0);


}
void update9_N(int value)     //Bird move 2
{

         move_floatingtre_N += 0.008;
        if(move_floatingtre_N >0.8)
        {
            move_floatingtre_N = -6;
        }
        glutPostRedisplay();
        glutTimerFunc(20, update9_N, 0);


}
void update10_N(int value)     //Bird move 2
{

         move_floatinghome_N += 0.008;
        if(move_floatinghome_N >0.8)
        {
            move_floatinghome_N = -6;
        }
        glutPostRedisplay();
        glutTimerFunc(20, update10_N, 0);


}



//----------------------------------------samia----------------------------------------------------

void sky()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_d)
        glColor3ub(26,0,26);
    else
        glColor3ub(135, 206, 235);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(50,0);
    glVertex2f(50,-36);
    glVertex2f(0,-36);
    glColor3ub(250, 250, 250);
    //glVertex2f(0,-36);
    glVertex2f(60,0);
    glEnd();

  }
void sun()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(!nightstatus_d)
    {
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {
            glColor3ub(255, 255, 26) ;
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+45.82,y-2.85 );
        }
        glEnd();
    }
    glPopMatrix();
}

void moon()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_d)
    {
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        for(int i=0;i<200;i++)
        {
            glColor3ub(242,242,242);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+45.82,y-2.78 );
        }
        glEnd();
    }

    glPopMatrix();
}

void plane()
{
 glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,-0.5,0);
    glTranslatef(plane_move,0,0);
    if(nightstatus_d)
        glColor3ub(102, 75, 0);
    else
        glColor3ub(255, 204,229);
    glBegin(GL_POLYGON);
    glVertex2f(2.67,-1.37);
    glVertex2f(2.32,-1);
    glVertex2f(2,-1);
    glVertex2f(2.25,-1.81);
    glVertex2f(2.37,-2.05);
    glVertex2f(2.55,-2.16);
    glVertex2f(3.92,-2.16);
    glVertex2f(4.73,-2.16);
    glVertex2f(5.48,-2.15);
    glVertex2f(6,-2);
    glVertex2f(5.96,-1.74);
    glVertex2f(5.75,-1.55);
    glVertex2f(5.36,-1.38);
    glVertex2f(4.79,-1.37);
    glVertex2f(4,-1.38);
    glVertex2f(2.67,-1.37);


    //plane hand 1st
    glBegin(GL_POLYGON);
    glVertex2f(3.92,-2.16);
    glVertex2f(3.6,-2.49);
    glVertex2f(3.44,-2.7);
    glVertex2f(3.45,-2.9);
    glVertex2f(3.69,-2.93);
    glVertex2f(4.73,-2.16);
    glVertex2f(3.92,-2.16);
    glEnd();
    //plane hand 2nd

    glBegin(GL_POLYGON);
    glVertex2f(3.51,-0.9);
    glVertex2f(3.45,-0.7);
    glVertex2f(3.73,-0.6);
    glVertex2f(4.8,-1.38);
    glVertex2f(4,-1.38);
    glVertex2f(3.51,-0.9);
    glEnd();



    //line behind plane
        glBegin(GL_LINES);
    glColor3ub(0,0,0);

     glVertex2f(2.2,-0.6);
     glVertex2f(2.6,-0.6);

     glVertex2f(1.2,-1.4);
     glVertex2f(1.6,-1.4);

     glVertex2f(0.2,-1.4);
     glVertex2f(0.8,-1.4);

     glVertex2f(0.2,-1.8);
     glVertex2f(0.6,-1.8);

     glVertex2f(0.9,-1.8);
     glVertex2f(1.46,-1.8);

     glVertex2f(0.8,-2.2);
     glVertex2f(1.4,-2.2);
     glEnd();

    glPopMatrix();


}
void river()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_d)
        glColor3ub(0, 71, 179);
    else
        glColor3ub(8, 125, 180);
    glBegin(GL_POLYGON);
    glVertex2f(0,-6);
    glVertex2f(50,-6);
    glVertex2f(50,-36);
    glVertex2f(0,-36);
    glEnd();
    glPopMatrix();
  }

void land()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_d)
        glColor3ub(102, 75, 0);
    else
        glColor3ub(191, 128, 64);
    glBegin(GL_POLYGON);
    glVertex2f(0,-6);
    glVertex2f(21.37,-5.96);
    glVertex2f(0,-30.98);
    glEnd();
    glPopMatrix();
}

void river_border()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    if(nightstatus_d)
        glColor3ub(191, 191, 191);
    else
        glColor3ub(153, 92, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0,-30.78);
    glVertex2f(20,-6);
    glVertex2f(22.5,-6);
    glVertex2f(0,-32.38);
    glEnd();
    glPopMatrix();
}
void smoke(float x,float y)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glTranslatef(0,smoke_move,0);
    if(nightstatus_d)
        glColor3ub(77,77,0);
    else
        glColor3ub(235, 235, 224) ;

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {

        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.03,y-5.07 );
    }
	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.3;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.55,y-5.09 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.30;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.3,y-4.74 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.69,y-4.78 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.33;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.7,y-4.15 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
       // glColor3ub(235, 235, 224);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.23;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.03,y-4.04 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.35;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+4.7,y-3.75 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.22;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.42,y-3.22 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
       // glColor3ub(235, 235, 224) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.58,y-3.01 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
       // glColor3ub(235, 235, 224) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.29,y-3 );
    }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        //glColor3ub(235, 235, 224);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5.41,y-2.76 );
    }
	glEnd();
	glPopMatrix();
}
void powerplant_border()
{
    glColor3ub(92, 66, 61);
    glBegin(GL_POLYGON);
    glVertex2f(0,-6.52);
    glVertex2f(11,-6.5);
    glVertex2f(10.59,-7);
    glVertex2f(0,-7);
    glEnd();

    glColor3ub(92, 66, 61);
    glBegin(GL_POLYGON);
    glVertex2f(11,-6.5);
    glVertex2f(10.59,-7);
    glVertex2f(10.6,-9.88);
    glVertex2f(11,-10.4);
    glEnd();

    glColor3ub(92, 66, 61);
    glBegin(GL_POLYGON);
    glVertex2f(10.6,-9.88);
    glVertex2f(11,-10.4);
    glVertex2f(0,-10.4);
    glVertex2f(0,-9.88);
    glEnd();
  }

  void powerplant(float x,float y)
  {
      //
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
      //1st left
      if(!nightstatus_d)
        glColor3ub(217, 217, 217);
      else
     glColor3ub(60, 86, 91);
    glBegin(GL_POLYGON);
    glVertex2f(5.1,-6.48);
    glVertex2f(5.18,-6.87);
     glVertex2f(5.27,-7.17);
    glVertex2f(5.37,-7.44);
    glVertex2f(5.45,-7.67);
    glVertex2f(5.59,-7.91);
    glVertex2f(5.5,-8);
    glVertex2f(5.2,-8.19);
    glVertex2f(4.78,-8.29);
    glVertex2f(4.53,-8.29);
    glVertex2f(4.51,-5.21);
    glVertex2f(5.1,-5.21);
    glVertex2f(5.07,-5.84);
    glVertex2f(5.06,-6.22);
    glEnd();

        //1st left
    if(!nightstatus_d)
        glColor3ub(217, 217, 217);
    else
        glColor3ub(60, 86, 91);
    glBegin(GL_POLYGON);
    glVertex2f(3.82,-6.45);
    glVertex2f(3.78,-6.7);
     glVertex2f(3.71,-7.01);
    glVertex2f(3.63,-7.32);
    glVertex2f(3.4,-7.99);
    glVertex2f(3.61,-8.18);
    glVertex2f(4.05,-8.28);
    glVertex2f(4.45,-8.29);
    glVertex2f(4.53,-8.29);
    glVertex2f(4.51,-5.21);
    glVertex2f(3.79,-5.21);
    glVertex2f(3.82,-5.57);
    glVertex2f(3.83,-6.04);
    glVertex2f(3.82,-6.45);
    glVertex2f(5.06,-6.22);
    glEnd();
    glPopMatrix();

  }

void piller_hardinge(float x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glColor3ub(92, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(40.26,-31);
    glVertex2f(41,-31.01);
    glVertex2f(40.96,-36.39);
    glVertex2f(40.25,-36.39);
    glEnd();

    //glColor3ub(178, 190, 181);
    glBegin(GL_POLYGON);
    glVertex2f(39.2,-34.79);
    glVertex2f(42.02,-34.78);
    glVertex2f(42.01,-36.4);
    glVertex2f(39.2,-36.4);
    glEnd();
    glPopMatrix();
  }

void Bridge_1()
{
    if(nightstatus_d)
        glColor3ub(77, 0, 0);
    else
        glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0,-30);
    glVertex2f(50,-30);
    glVertex2f(50,-31);
    glVertex2f(0,-31);
    glEnd();
}
void span(float x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    if(nightstatus_d)
        glColor3ub(77, 0, 0);
    else
        glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(49.24,-30);
    glVertex2f(48.5,-28.5);
    glVertex2f(49,-28);
    glVertex2f(50,-30);
    glVertex2f(49.24,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(48.5,-28.5);
    glVertex2f(46.98,-27.74);
    glVertex2f(47,-27);
    glVertex2f(49,-28);
    glVertex2f(48.5,-28.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(46.98,-27.74);
    glVertex2f(44.11,-27.75);
    glVertex2f(44,-27);
    glVertex2f(47,-27);
    glVertex2f(46.98,-27.74);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(44.11,-27.75);
    glVertex2f(42.5,-28.5);
    glVertex2f(42,-28);
    glVertex2f(44,-27);
    glVertex2f(44.11,-27.75);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(42,-28);
    glVertex2f(41,-30);
    glVertex2f(41.85,-30);
    glVertex2f(42.5,-28.5);
    glVertex2f(42,-28);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(48.5,-28.5);
    glVertex2f(48.5,-30);

    glVertex2f(48.5,-28.5);
    glVertex2f(47.78,-30);

    glVertex2f(47.78,-30);
    glVertex2f(46.98,-27.74);

    glVertex2f(46.98,-27.74);
    glVertex2f(47,-30);

    glVertex2f(47,-30);
    glVertex2f(46.07,-27.74);

    glVertex2f(46.07,-27.74);
    glVertex2f(46.09,-30);

    glVertex2f(46.09,-30);
    glVertex2f(45.1,-27.75);

    glVertex2f(45.1,-27.75);
    glVertex2f(45.1,-30);

    glVertex2f(45.1,-30);
    glVertex2f(44.11,-27.75);

    glVertex2f(44.11,-27.75);
    glVertex2f(44.1,-30);

    glVertex2f(44.1,-30);
    glVertex2f(43.24,-28.16);

    glVertex2f(43.24,-28.16);
    glVertex2f(43,-30);

    glVertex2f(43,-30);
    glVertex2f(42.5,-28.5);

    glVertex2f(42.5,-28.5);
    glVertex2f(42.2,-30.0);

    glEnd();
    glPopMatrix();
}

void Bridge_2()
{
    glColor3ub(102, 102, 102);
    glBegin(GL_POLYGON);
    glVertex2f(0,-13);
    glVertex2f(50,-13);
    glVertex2f(50,-16);
    glVertex2f(0,-16);
    glEnd();

}

void road_square(float x,float y)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(2,-14.7);
    glVertex2f(4.4,-14.7);
    glVertex2f(4.4,-15.2);
    glVertex2f(2,-15.2);
    glEnd();
    glPopMatrix();

}

void piller(float x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(4.65,-16);
    glVertex2f(5.54,-17.15);
    glVertex2f(6.01,-17.17);
    glVertex2f(6.84,-16);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.54,-17.15);
    glVertex2f(6.01,-17.17);
    glVertex2f(6,-20);
    glVertex2f(5.51,-19.97);
    glEnd();
    glPopMatrix();
}

void Bridge()
{
    Bridge_1();
    Bridge_2();
    piller(-5);
    piller(0);
    piller(7);
    piller(14);
    piller(21);
    piller(28);
    piller(35);
    piller(42);
    road_square(0,0.5);
    road_square(4,0.5);
    road_square(8,0.5);
    road_square(12,0.5);
    road_square(16,0.5);
    road_square(20,0.5);
    road_square(24,0.5);
    road_square(28,0.5);
    road_square(32,0.5);
    road_square(36,0.5);
    road_square(40,0.5);
    road_square(44,0.5);
}

void car_1(float y)
{
    //lower
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(car_move,0,0);
    glColor3ub(185, 119, 14);
    glBegin(GL_POLYGON);
    glVertex2f(7.5, -14.6);
    glVertex2f(12, -14.6);
    glVertex2f(12, -15.6);
    glVertex2f(7.5, -15.6);
    glEnd();

    //upper
    glColor3ub(241, 196, 15);
    glBegin(GL_POLYGON);
    glVertex2f(7.77, -14.6);
    glVertex2f(8.5, -13.6);
    glVertex2f(10.5, -13.6);
    glVertex2f(11.23,-14.6);
    glEnd();

    //window 1

    glColor3ub(240, 243, 244 );
    glBegin(GL_POLYGON);
    glVertex2f(9.6,-13.8);
    glVertex2f(10.2,-13.8);
    glVertex2f(10.4,-14.4);
     glVertex2f(9.6,-14.4);
    glEnd();

    //window 2
    glColor3ub(240, 243, 244 );
    glBegin(GL_POLYGON);
    glVertex2f(8.6,-13.8);
    glVertex2f(9.4,-13.8);
    glVertex2f(9.4,-14.4);
    glVertex2f(8.6,-14.4);
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(car_move,0,0);
    glTranslatef(8.5,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(40, 40, 43) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(car_move,0,0);
    glTranslatef(8.5,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(255, 255, 255) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(car_move,0,0);
	glTranslatef(10.5,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(40, 40, 43) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,y,0);
    glTranslatef(car_move,0,0);
	glTranslatef(10.5,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(255, 255, 255) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.42;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
	glPopMatrix();
}

void car_2()
{
    //lower
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move1_d,0,0);
    glColor3ub(185, 119, 14);
    glBegin(GL_POLYGON);
    glVertex2f(43.6, -14.6);
    glVertex2f(49.1, -14.6);
    glVertex2f(49.1, -15.6);
    glVertex2f(43.6, -15.6);
    glEnd();

    //upper
    glColor3ub(241, 196, 15);
    glBegin(GL_POLYGON);
    glVertex2f(44.1, -14.6);
    glVertex2f(45.1, -13.6);
     glVertex2f(47.6,-13.6);
    glVertex2f(48.74, -14.61);
    glEnd();

    //window 1

    glColor3ub(240, 243, 244 );
    glBegin(GL_POLYGON);
    glVertex2f(45.45,-13.83);
    glVertex2f(46.12,-13.84);
    glVertex2f(46.1,-14.45);
     glVertex2f(45.08,-14.45);
    glEnd();

    //window 2
    glColor3ub(240, 243, 244 );
    glBegin(GL_POLYGON);
    glVertex2f(46.59,-13.84);
    glVertex2f(47.6,-13.84);
    glVertex2f(47.6,-14.4);
    glVertex2f(46.59,-14.4);
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move1_d,0,0);
	glTranslatef(47.6,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();


     glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(255,255,255) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(car_move1_d,0,0);
	glTranslatef(45.1,-15.6,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();

	glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(255,255,255) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.4;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
	glPopMatrix();


}

void boat(float x,float y,float s)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,y,0);
    glScalef(s,s,0);
    glTranslatef(boat_move,0,0);
    glColor3ub(179, 89, 0);
    glBegin(GL_POLYGON);
    glVertex2f(28.98,-24.73);
    glVertex2f(28.75,-24.72);
    glVertex2f(28.6,-24.55);
    glVertex2f(34.65,-24.97);
    glVertex2f(34.63,-25.13);
    glVertex2f(34.42,-25.14);
    glVertex2f(34.01,-25.68);
    glVertex2f(29.82,-25.67);
    glVertex2f(28.98,-24.73);
    glEnd();

    glColor3ub(255, 153, 51);
    glBegin(GL_POLYGON);
    glVertex2f(28.6,-24.55);
    glVertex2f(29.78,-24.38);
    glVertex2f(30.45,-24.35);
    glVertex2f(31.68,-24.41);
    glVertex2f(31.68,-24.76);
    glVertex2f(28.6,-24.55);
    glEnd();

    glColor3ub(255, 153, 51);
    glBegin(GL_POLYGON);
    glVertex2f(34.65,-24.97);
    glVertex2f(33.87,-24.74);
    glVertex2f(33.18,-24.55);
    glVertex2f(32.57,-24.47);
    glVertex2f(32.16,-24.43);
    glVertex2f(31.75,-24.44);
    glVertex2f(31.75,-24.77);
    glVertex2f(34.65,-24.97);
    glEnd();

        //stick
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(31.68,-20.75);
    glVertex2f(31.78,-20.75);
    glVertex2f(31.78,-24.77);
    glVertex2f(31.68,-24.77);
    glEnd();

    //flag
    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
    glVertex2f(31.68,-20.75);
    glVertex2f(32.8,-20.75);
    glVertex2f(32.8,-21.47);
    glVertex2f(31.68,-21.47);
    glEnd();
        //flag circle
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(255,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.25;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+32.29,y-21.09 );
    }
	glEnd();

	//noukar pal
    glColor3ub(255, 214, 153);
    glBegin(GL_POLYGON);
    glVertex2f(31.27,-22.85);
    glVertex2f(31.26,-21.99);
    glVertex2f(31.34,-21.46);
    glVertex2f(31.68,-20.74);
    glVertex2f(30.88,-21.16);
    glVertex2f(30.03,-21.86);
    glVertex2f(29.32,-22.77);
    glVertex2f(28.86,-23.6);
    glVertex2f(28.6,-24.55);
    glVertex2f(29.78,-24.38);
    glVertex2f(30.45,-24.35);
    glVertex2f(31.68,-24.76);
    glVertex2f(31.38,-23.6);
    glVertex2f(31.27,-22.85);
    glEnd();

    //2nd pal
    glColor3ub(255, 214, 153);
    glBegin(GL_POLYGON);
    glVertex2f(31.89,-23.49);
    glVertex2f(31.75,-24.44);
    glVertex2f(32.16,-24.43);
    glVertex2f(32.57,-24.47);
    glVertex2f(33.18,-24.55);
    glVertex2f(33.87,-24.74);
    glVertex2f(34.65,-24.97);
    glVertex2f(33.58,-23.95);
    glVertex2f(32.92,-23.16);
    glVertex2f(31.78,-21.53);
    glVertex2f(31.91,-22.44);
    glVertex2f(31.89,-23.49);
    glEnd();
    glPopMatrix();
}

void Train_1()
{
    //1st bogi
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glColor3ub(102, 140, 255);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,-28.8);
    glVertex2f(11.45, -28.8);
    glVertex2f(12,-29);
    glVertex2f(12.79,-29.53);
    glVertex2f(12.6,-29.8);
    glVertex2f(6.5,-29.8);
    glVertex2f(6.5,-28.8);
    glEnd();

    glColor3ub(179, 198, 255);
    glBegin(GL_POLYGON);
    glVertex2f(6.72,-29.04);
    glVertex2f(11.38, -29.02);
    glVertex2f(11.69,-29.34);
    glVertex2f(6.72,-29.34);
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glTranslatef(11.4,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
    glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glTranslatef(10.87,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glTranslatef(10.39,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
	glEnd();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glTranslatef(7.66,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(car_move,0,0);
    glTranslatef(7.19,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }


	glEnd();
	glPopMatrix();
//2nd bogi

}
void train_2(float x)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
	glColor3ub(102, 140, 255);
    glBegin(GL_POLYGON);
    glVertex2f(1.6,-28.8);
    glVertex2f(6.4, -28.8);
    glVertex2f(6.4,-29.8);
    glVertex2f(1.6,-29.8);
    glEnd();

    glColor3ub(179, 198, 255);
    glBegin(GL_POLYGON);
    glVertex2f(2.09,-29.06);
    glVertex2f(6.07,-29.06);
    glVertex2f(6.07,-29.42);
    glVertex2f(2.09,-29.42);
    glEnd();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(5.83,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
	glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(5.41,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }


	glEnd();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(4.96,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(2.8,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
	glPopMatrix();


	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(2.36,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(x,0,0);
    glTranslatef(car_move,0,0);
    glTranslatef(1.93,-29.8,0);
    glRotatef(_angle, 0.0f, 0.0f,1.0f);
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0) ;
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=-0.20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y);
    }
	glEnd();
	glPopMatrix();
}

void backgroud()
{
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(-10,-40);
    glVertex2f(0, -40);
    glVertex2f(0,0);
    glVertex2f(-10,0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0,-36);
    glVertex2f(50,-36);
    glVertex2f(50,-40);
    glVertex2f(0,-40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(50,0);
    glVertex2f(60, 0);
    glVertex2f(60,-36);
    glVertex2f(50,-36);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0, -36);
    glVertex2f(-50,-36);
    glVertex2f(-50,0);
    glEnd();

}





void display5()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-2,1.4,0);
    glScalef(1,1,0);
	sky();
	sun();
	moon();
	plane();
	river();
	river_border();
	land();
	smoke(0,-1);
	smoke(2,0);
	smoke(-2,0);
	powerplant_border();
	powerplant(0,-1);
	powerplant(2,0);
	powerplant(-2,0);
	Bridge();
    Train_1();
    train_2(0);
    train_2(-5);
    train_2(-10);
    train_2(-15);
	span(0);
	span(-9.5);
	span(-19);
	span(-28.5);
	span(-38);
    span(-47.5);
    piller_hardinge(0);
    piller_hardinge(-9.5);
    piller_hardinge(-19);
    piller_hardinge(-28.5);
    piller_hardinge(-38);
    piller_hardinge(-47.5);
    car_1(2);
    car_2();
    boat(0,0,1);
    boat(18,7,0.6);
    backgroud();
    glPopMatrix();
}

void update1(int value)     //boat move
{
    boat_move += 0.04;
    if(boat_move > 20)
    {
        boat_move = -24;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update1, 0);

}

void update2(int value)     //car move
{
    car_move += 0.1;
    if(car_move > 45)
    {
        car_move = -15;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update2, 0);

}

void update3(int value)     //car wheel move
{
    _angle+=0.1;
    if(_angle > 360.0)
    {
        _angle-=360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}

void update4(int value)     //car move
{
    smoke_move += 0.02;
    if(smoke_move > 4)
    {
        smoke_move = +0.5;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update4, 0);

}

void update5(int value)     //plane move
{
    plane_move += 0.2;
    if(plane_move > 50)
    {
        plane_move = +0.5;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update5, 0);

}

void update6(int value)     //car move
{
    car_move1_d -= 0.1;
    if(car_move1_d <-40)
    {
        car_move1_d = 4;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update6, 0);

}







void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1,1,1,1);
    if(show_display1)
    display1();
    if(show_display2)
    display2();
    if(show_display3)
    display3();
    if(show_display4)
    display4();
    if(show_display5)
    display5();
    glutSwapBuffers();
    glFlush();

}

void mykeyboard_t(unsigned char key, int x, int y)
{
    //-------------------------------jobaer----------------------
	 if (key == 'A' || key == 'a'){		////cloud starting
		cloudstatus_t = 1;
	}
	if (key == 'B' || key == 'b'){		//cloud stop
		cloudstatus_t = 0;
	}


	else if (key == 'C' || key == 'c'){              //boat starting
		boatstatus_t = 1;
	}
	else if (key == 'D' || key == 'd'){		//boat stop
		boatstatus_t = 0;
	}

	else if (key == 'E' || key == 'e'){              //jet starting
		jetstatus_t = 1;
	}
	else if (key == 'F' || key == 'f'){		//jet stop
		jetstatus_t = 0;
	}
	else if (key == 'G' || key == 'g'){              //train starting
		trainstatus_t = 1;
	}
	else if (key == 'H' || key == 'h'){		//train stop
		trainstatus_t = 0;
	}
    else if (key == 'I' || key == 'i'){              //night
		nightstatus_t = true;
	}
	else if (key == 'J' || key == 'j'){		//day
		nightstatus_t = false;
	}
    //-------------------rifah------------
    else if (key == 'K' || key == 'k'){		//day
		day=true;
	}
	else if (key == 'L' || key == 'l'){		//day
		day=false;
	}
	else if (key == 'M' || key == 'm'){		//day
		rainy=true;
	}

	//----------------------Shayan-----------------------

    else if(key=='N' || key=='n'){
        nightstatus_a = true;
    }

    else if(key=='O' || key=='o'){
        nightstatus_a = false;
    }

    //------------------------saymon-----------------------

    if (key == 'P' || key == 'p'){		////boat strting
		boatstatus_n = 1;
	}
	if (key == 'Q' || key == 'q'){		//boat stop
		boatstatus_n = 0;
	}


	else if (key == 'R' || key == 'r'){              //night
		nightstatus_n = 1;
	}
	else if (key == 'S' || key == 's'){		//day
		nightstatus_n = 0;
	}

    //------------------------samia-------------------------
    if (key == 'T' || key == 't')
    {		////cloud starting
		nightstatus_d = true;
	}
	if (key == 'U' || key == 'u')
    {		//cloud stop
		nightstatus_d = false;
	}


    if(key=='1' ){
        show_display1 = true;
        show_display2=false;
        show_display3=false;
        show_display4=false;
        show_display5=false;
    }

    if(key=='2' ){
        show_display2 = true;
        show_display1=false;
        show_display3=false;
        show_display4=false;
        show_display5=false;
    }

    if(key=='3' ){
        show_display3 = true;
        show_display2=false;
        show_display1=false;
        show_display4=false;
        show_display5=false;
    }
    if(key=='4' ){
        show_display4 = true;
        show_display2=false;
        show_display3=false;
        show_display1=false;
        show_display5=false;
    }
    if(key=='5' ){
        show_display5 = true;
        show_display2=false;
        show_display3=false;
        show_display4=false;
        show_display1=false;
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(3600, 3600);
    glutCreateWindow("Down of victory- 1971 liberation war");
    glutPostRedisplay();
    glutDisplayFunc(display);
    gluOrtho2D(-80,25.7,0,25);
    glutKeyboardFunc(mykeyboard_t);
    //-----------------------------------jobaer-----------------
    glutTimerFunc(20, update_t, 0); //Add a timer
    glutTimerFunc(20, update1_t, 0); //Add a timer
    glutTimerFunc(20, update2_t, 0);
    glutTimerFunc(20, update3_t, 0);
    glutTimerFunc(20, update4_t, 0);
    glutTimerFunc(20, update5_t, 0);
    glutTimerFunc(20, update6_t, 0);
    glutTimerFunc(20, update7_t, 0);
    glutTimerFunc(20, update8_t, 0);
    glutTimerFunc(20, update9_t, 0);
    glutTimerFunc(20, update10_t, 0);
    //-------------------------rifah-------------------
    glutTimerFunc(20, update_s, 0); // Add a timer
	glutTimerFunc(15, update1_s, 0); // Add a timer
	glutTimerFunc(10, update2_s, 0); //Add a timer
	glutTimerFunc(5, update3_s, 0);
	//-------------------------------shayan-----------
	glutTimerFunc(4, update_a, 0);
    glutTimerFunc(4, update3_a, 0);
    glutTimerFunc(4, update2_a, 0);
    glutTimerFunc(4, update4_a, 0);
    //----------------------------saymon---------------------
    glutTimerFunc(20, update5_N, 0);
    glutTimerFunc(20, update6_N, 0);
    glutTimerFunc(20, update7_N, 0);
    glutTimerFunc(20, update8_N, 0);
    glutTimerFunc(20, update9_N, 0);
    glutTimerFunc(20, update10_N, 0);


    //----------------------------samia------------------------
    glutTimerFunc(20, update1, 0);
	glutTimerFunc(20, update2, 0);
	glutTimerFunc(20, update3, 0);
	glutTimerFunc(20, update4, 0);
	glutTimerFunc(20, update5, 0);
	glutTimerFunc(20, update6, 0);

	cout<<"obj2-Cloud move 'A'"<<endl;
	cout<<"obj2-Cloud move stop 'B'"<<endl;
    glutMainLoop();
    return 0;
}



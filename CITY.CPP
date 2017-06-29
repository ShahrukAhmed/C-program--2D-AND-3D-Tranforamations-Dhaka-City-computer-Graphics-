#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<snap.h>


int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax,i;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");


		   {
 for(int i=1;i<=600;i++){

/* car,bus etc */
 /*car 1 */

 line(40+i,250, 80+i,250);
 line(80+i,250, 80+i,270);
 line(80+i,270, 40+i,270);
 line(40+i,270, 40+i,250);
 circle(70+i,270,5);
 circle(50+i,270,5);





  /*car 2 */
  line(100+i,300, 120+i,300);
  line(120+i,300, 120+i,310);
  line(120+i,310, 135+i,310);
  line(135+i,310, 135+i,320);
  line(135+i,320, 130+i,320);
  line(120+i,320, 95+i,320);
  line(80+i,320,  80+i,310);
  line(80+i,320,  85+i,320);
  line(80+i,310,  100+i,310);
  line(100+i,310, 100+i,300);
    circle(125+i,320,5);
    circle(90+i,320,5);
 /*car 3 */
 line(500-i,250, 530-i ,250);
 line(530-i,250, 530-i,270);
 line(530-i,270, 580-i,270);
 line(580-i,270,580-i,285);
 line(580-i,285,570-i,285);
 line(525-i,285,555-i,285);

 line(500-i,250, 500-i,285);
 line(500-i,285,510-i,285);
 circle(562-i,285,7);
 circle(518-i,285,7);
  /* car 4*/
  line(410-i,350,480-i,350);
  line(480-i,350,480-i,375);
  line(480-i,360,410-i,360);
  line(480-i,375,470-i,375);
  line(458-i,375,425-i,375);
  line(414-i,374,410-i,374);
  line(410-i,374, 410-i,350);

  circle(465-i,375,6);
  circle(420-i,374,6);

	 delay(100);
	 cleardevice();









/* road line */
   line(0,200,1000,200);
   line(0,400,1000,400);
   line(315,200,290,400);
   line(270,200,245, 400);

/* building 1 */
line(10,200 ,10 ,100);
line(10,100, 50,100);
line(50,100,50,200);
/*build2*/
line(60,200, 60,80);
line(60,80, 100,80);
line(100,80,100,200);
/*build3 */
line(110,200, 110,70);
line(110,70,125,50);
line(125,50, 160,50);
line(160,50,160,200);
line(125,50,125,200);
/*build4 */
line(180,200,180,130);
line(180,130,195,118);
line(195,118,215,118);
line(215,118,215,200);
line(195,200,195,120);
/* build5*/
line(215,118,215,80);
line(215,80,250,80);
line(250,80,250,200);
line(250,200,250,150);
line(250,150,280,150);
line(280,150,280,200);
/*build6 */
line(300,200,300,10);
line(300,10,340,10 );
line(340, 10,340,200);
/*build7 */
line(350,200, 350,90);
line(350,90, 390,90);
line(390,90, 390,200);
line(360,90,360,70);                  /* 36 line */
line(360, 70,380,70);                 /* 37 line */
line(380,70,380,90);                  /* 38 line */
/*build8*/
line(400,200,400,50);
line(400,50, 440,50);
line(440, 50,440,200);
/*build9*/
line(460,200,460,150);
line(460,150,515,150);
line(515, 150,515,200);
line(480,200,480,170);
line(480, 170,495,170);
line(495,170, 495,200);
line(515, 150,530,160);
line(530,160,530,200);

/* build 10*/
line(540,200, 540,120);
line(540, 120,560,120);
line(560,120, 560 ,200);
/*build11 */
line(580,200, 580 ,130);
line(580,130, 600,130);
line(600, 130 ,600,200);
/*build12*/
line(600,200, 600 ,90);
line(600,90, 630,90);
line(630,90, 630,200);







	 }
	    }



   /* clean up */
   getch();
   closegraph();
   return 0;
    }

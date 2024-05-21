#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include <dos.h>


int main()
{
    int gd= DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    setcolor(DARKGRAY);
    line(1,300,900,300); //roadsline1
    line(1,400,900,400);  //roadsline2
    line(1,305,900,305); //roadsline1...
        line(1,405,900,405); //roadsline1..

        //zebra crossing
         rectangle(272,305,305,310);
         rectangle(274,315,307,320);
         rectangle(276,325,309,330);
         rectangle(278,335,311,340);
         rectangle(280,345,313,350);
         rectangle(282,355,315,360);
         rectangle(284,365,317,370);
         rectangle(286,375,319,380);
         rectangle(288,385,321,390);
         rectangle(290,395,323,400);
         floodfill(1,400, DARKGRAY);

            setcolor(BLUE);
            line(1,150,50,150); //building1...
            line(1,150,1,300); //building1
                line(50,150,50,300); //building1
                line(50,150,70,155); //building1
                line(70,155,70,300); //building1 complete
               rectangle(5,155,45,165); //window
               rectangle(5,175,45,185); //window
                rectangle(5,195,45,205); //window
                rectangle(5,215,45,225); //window
                rectangle(5,235,45,245);
                rectangle(5,255,45,265);
               rectangle(5,275,45,285);
                setfillstyle(SOLID_FILL,BLUE);
                floodfill(5, 150, BLUE);

                //setcolor(GREEN);
                setfillstyle(11,GREEN);
                line(60,100,110,100); //building2
                line(60,100,60,152); //building2
                line(110,100,115,105); //building2
                line(110,100,110,300); //building2
                line(115,105,115,300); //building2
                //building 2 window
                rectangle(65,110,105,125);
                 rectangle(65,135,105,150);
                  rectangle(70,160,105,175);
                   rectangle(70,185,105,200);
                    rectangle(70,210,105,225);
                    rectangle(70,235,105,250);
                    rectangle(70,260,105,275);
                //floodfill(62,92,15);

                setcolor(DARKGRAY);
                line(115,160,140,160); //shortbuilding3
                line(115,160,115,300); //shortbuilding3
                line(140,160,140,170); //shortbuilding3
                setfillstyle(SOLID_FILL,DARKGRAY);

                line(118,170,118,300); //shortbuilding4
                line(170,170,118,170); //shortbuilding4
                line(170,170,170,300); //shortbuilding4

                setcolor(BROWN);
                rectangle(115,115,200,300);//pichoner building 5
                setfillstyle(SOLID_FILL, BROWN);
                floodfill(115, 115, BROWN);

                rectangle(200,98,270,300); //building6
                // building 6 windows
                rectangle(210,108,260,128);
                rectangle(210,138,260,158);
                rectangle(210,168,260,188);
                rectangle(210,198,260,218);
                rectangle(210,228,260,248);
                rectangle(210,258,260,278);
                rectangle(230,288,250,300);


//building 7 windows
                rectangle(305,160,330,180); //1
                rectangle(340,160,365,180);// 2
                rectangle(305,190,330,210);//1
                rectangle(340,190,365,210);//2
                rectangle(305,220,330,240);//1
                rectangle(340,220,365,240);//2
                rectangle(305,250,330,270);//1
                rectangle(340,250,365,270);//2
                rectangle(320,280,350,300);//gate

                rectangle(300,150,370,300); //building7
                line(280,170,300,150); //build7side
                line(280,170,280,300); //build7side
                //rectangle(280,170,300,300); //building7sidepart
                rectangle(400,100,490,300); //building8
                line(365,150,365,145); //build8side
                line(400,100,365,145); //build8side
                //rectangle(365,150,400,300); //building8sidepart

                setfillstyle(6,7);
                rectangle(490,95,550,300); //build9


                rectangle(550,130,610,300); //build

                //moon
                setcolor(WHITE);
                circle(200, 5, 50);
                setfillstyle(SOLID_FILL, WHITE);
                floodfill(200, 5, WHITE);


                //circle(200,5,20); //moon
//star's
putpixel(100,70,WHITE);
putpixel(210,60,WHITE);putpixel(120,50,WHITE);putpixel(830,40,WHITE);
putpixel(300,70,WHITE);putpixel(420,50,WHITE);putpixel(530,40,WHITE);
putpixel(10,60,WHITE);putpixel(120,10,WHITE);putpixel(880,20,WHITE);
putpixel(350,20,WHITE);putpixel(380,10,WHITE);putpixel(690,30,WHITE);
putpixel(750,70,WHITE);putpixel(280,40,WHITE);putpixel(600,30,WHITE);




                setcolor(DARKGRAY);
                line(90,400,90,280); //lamppost
                line(90,280,95,276); //lamppost
                line(90,280,85,304); //lamppost
                circle(95,278,2); //lamplight1
                circle(85,306,2); //lamplight2
                setfillstyle(SOLID_FILL, DARKGRAY);


                setcolor(DARKGRAY);
                line(270,400,270,280); //lamppost2
                line(270,280,275,276); //lamppost2
                line(270,280,265,304); //lamppost2
                circle(275,278,2); //lamplight1-2
                circle(265,306,2); //lamplight2-2
                setfillstyle(SOLID_FILL, DARKGRAY);

                 setcolor(DARKGRAY);
                line(450,400,450,280); //lamppost3
                line(450,280,455,276); //lamppost3
                line(450,280,445,304); //lamppost3
                circle(455,278,2); //lamplight1-3
                circle(445,306,2); //lamplight2-3
                setfillstyle(SOLID_FILL, DARKGRAY);

                 setcolor(DARKGRAY);
                line(630,400,630,280); //lamppost4
                line(630,280,635,276); //lamppost4
                line(630,280,625,304); //lamppost4
                circle(635,278,2); //lamplight1-4
                circle(625,306,2); //lamplight2-4
                setfillstyle(SOLID_FILL, DARKGRAY);


//road
rectangle(00,345,30,350);
rectangle(50,345,80,350);
rectangle(100,345,130,350);
rectangle(150,345,180,350);
rectangle(200,345,230,350);
rectangle(250,345,275,350);
rectangle(320,345,350,350);
rectangle(370,345,400,350);
rectangle(420,345,445,350);
rectangle(470,345,500,350);
rectangle(520,345,550,350);
rectangle(570,345,600,350);
rectangle(620,345,650,350);


//car1 left to right
rectangle(120,360,140,370);
line(140,370,160,370);
line(120,360,115,360);
line(120,370,105,370);
line(105,370,115,360);
line(105,370,100,370);
line(140,360,160,370);
line(160,370,170,370);
line(170,370,170,380);
line(100,370,100,380);
line(100,380,110,380);
line(170,380,155,380);
line(145,380,120,380);
arc(115,380,0,180,5);
arc(150,380,0,180,5);

setcolor(WHITE);
        setfillstyle(SOLID_FILL, DARKGRAY);
circle(150,  380, 5);
circle(115 ,  380, 5);
circle(150,  380, 2);
circle(115 ,  380, 2);

       floodfill(150, 380, WHITE);
        floodfill(115, 380, WHITE);



        //car 2 right to left
    rectangle(520,310,540,320);
line(540,320,530,320);
line(540,310,545,310);
line(545,310,550,320);
line(540,320,550,320);
line(520,320,500,320);
line(520,310,500,320);
line(500,320,490,320);
line(490,320,490,330);
line(550,320,555,320);
line(555,320,555,330);
line(490,330,500,330);
line(555,330,550,330);
line(510,330,540,330);


setcolor(WHITE);
      setfillstyle(SOLID_FILL, DARKGRAY);
circle(545,  330, 5);
circle(505 ,  330, 5);
circle(545,  330, 2);
circle(505 ,  330, 2);

      floodfill(545, 330, WHITE);
      floodfill(505, 330, WHITE);

 getch();
    closegraph();
    return 0;
}


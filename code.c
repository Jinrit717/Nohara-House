#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{ int gd=DETECT,gmode;
  initgraph(&gd,&gmode,"C:\\TURBOC3\\BGI");

  //vertical
  line(1,355,40,355);
  line(40,350,40,440);
  line(70,350,70,440);
  line(180,350,180,440);
  line(210,350,210,440);
  line(240,350,240,440);
  line(350,350,350,440);
  line(380,350,380,440);
  line(420,350,420,440);
  line(520,350,520,440);
  line(550,350,550,440);
  line(90,410,90,440);
  line(110,410,110,440);
  line(130,410,130,440);
  line(150,410,150,440);
  line(260,410,260,440);
  line(280,410,280,440);
  line(300,410,300,440);
  line(320,410,320,440);
  line(470,365,470,425);
  line(530,280,530,350);
  line(518,280,518,365);
  line(120,280,120,355);
  line(170,245,170,190);
  line(380,245,380,190);
  line(210,190,210,225);
  line(340,190,340,225);
  line(180,190,180,140);
  line(510,245,510,140);
  line(190,155,190,190);
  line(240,155,240,195);
  line(250,155,250,195);
  line(300,155,300,195);
  line(420,155,420,215);
  line(470,155,470,215);
  line(170,295,170,355);
  line(220,295,220,350);
  line(230,280,230,350);
  line(300,280,300,355);
  line(410,280,410,300);
  line(400,280,400,310);
  line(406,310,406,350);
  line(418,325,418,350);
  line(460,325,460,365);
  line(490,310,490,365);

  //horizontal
  line(40,410,380,410);
  line(40,350,70,350);
  line(180,350,240,350);
  line(350,350,420,350);
  line(520,350,550,350);
  line(70,355,180,355);
  line(240,355,350,355);
  line(550,355,getmaxx(),355);
  line(40,370,70,370);
  line(40,390,70,390);
  line(180,370,240,370);
  line(180,390,240,390);
  line(350,370,380,370);
  line(350,390,380,390);
  line(380,360,420,360);
  line(380,370,420,370);
  line(380,380,420,380);
  line(380,390,420,390);
  line(380,400,420,400);
  line(380,410,420,410);
  line(380,420,420,420);
  line(380,430,420,430);
  line(520,360,550,360);
  line(520,370,550,370);
  line(520,380,550,380);
  line(520,390,550,390);
  line(520,400,550,400);
  line(520,410,550,410);
  line(520,420,550,420);
  line(520,430,550,430);
  line(420,365,520,365);
  line(420,425,520,425);
  line(70,280,580,280);
  line(140,245,510,245);
  line(170,190,210,190);
  line(340,190,380,190);
  line(210,225,340,225);
  line(130,140,550,140);
  line(210,195,340,195);
  line(210,200,340,200);
  line(190,155,240,155);
  line(250,155,300,155);
  line(420,155,470,155);
  line(420,215,470,215);
  line(170,295,220,295);
  line(410,300,518,300);
  line(400,310,518,310);
  line(418,325,460,325);

  //slant
  line(70,280,140,245);
  line(510,245,580,280);
  line(130,140,340,50);
  line(340,50,550,140);
  delay(2000);

  
  outtextxy(20,20,"Nohara House :-");
  getch();
  closegraph();
}

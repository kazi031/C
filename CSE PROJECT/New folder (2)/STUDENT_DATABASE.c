/* PROJECT ON STUDENT DATABASE MANAGEMENT SYSTEM
Â  Â  Author :- shinde prashant
Â  Â  Copyright 2015 */
Â #include<stdio.h>
Â #include<conio.h>
Â #include<graphics.h>
Â #include<dos.h>
Â #include<string.h>
Â void login_window();
Â void main()
Â {
Â int gd=DETECT,gm;
Â initgraph(&gd,&gm,"C:\\turboc3\\bgi");
Â login_window();
Â getch();
Â closegraph();
Â }
Â void login_window()
Â {
Â  /* rectangle for password input */
Â  Â  setcolor(3);
Â  Â  setfillstyle(1,WHITE);
Â  Â  rectangle(426,288,201,259);
Â  Â  rectangle(425,287,202,260);
Â  Â  floodfill(419,262,3);
Â  Â  /* RECTANGLE FOR LOGO */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(10,4);
Â  Â  rectangle(402,142,224,222);
Â  Â  rectangle(403,141,223,223);
Â  Â  rectangle(404,140,222,224);
Â  Â  floodfill( 400,218,WHITE);
Â  Â  /* draws 1st body */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,2);
Â  Â  ellipse(270, 190, 0, 360,10, 18);
Â  Â  ellipse(270, 190, 0, 360,11, 19);
Â  Â  floodfill(271,191,WHITE);
Â  Â  /* draws and fills 2nd body Â */
Â  Â  setfillstyle(1,2);
Â  Â  ellipse(300, 195, 0, 360,10, 18);
Â  Â  ellipse(300, 195, 0, 360,9, 17);
Â  Â  floodfill(301,196,WHITE);
Â  Â  /* draws 3rd body */
Â  Â  Â  setfillstyle(1,2);
Â  Â  Â  ellipse(320, 199, 0, 360,8, 12);
Â  Â  Â  ellipse(320, 199, 0, 360,7, 11);
Â  Â  Â  floodfill(321,200,WHITE);
Â  Â  /* draw 4th body */
Â  Â  setfillstyle(1,2);
Â  Â  ellipse(340, 190, 0, 360,11, 25);
Â  Â  ellipse(340, 190, 0, 360,10, 24);
Â  Â  floodfill(341,191,WHITE);
Â  Â  /* draws head for 1st body */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,2);
Â  Â  circle(270,152,9);
Â  Â  circle(270,152,8);
Â  Â  floodfill(271,153,WHITE);
Â  Â /* draws head for 2nd body */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,2);
Â  Â  circle(300,160,9);
Â  Â  circle(300,160,8);
Â  Â  floodfill(301,161,WHITE);
Â  Â /* draws a head for 3rd body */
Â  Â  Â setcolor(WHITE);
Â  Â  Â setfillstyle(1,2);
Â  Â  Â circle(320,180,4);
Â  Â  Â circle(320,180,3);
Â  Â  Â floodfill(321,181,WHITE);
Â  Â /* draws head for 4th body */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,2);
Â  Â  circle(340,152,9);
Â  Â  circle(340,152,8);
Â  Â  floodfill(341,153,WHITE);
Â  Â  gotoxy(23,16);
Â  Â  printf("STUDENT DATABASE MANAGEMENT SYSTEM !");
Â  Â  /* following coad is to draw the circle Enter Button */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,4);
Â  Â  circle(442,272,12);
Â  Â  circle(442,272,11);
Â  Â  circle(442,272,10);
Â  Â  floodfill(442,272,WHITE);
Â  Â  outtextxy(435,269,"->");
Â  Â  setcolor(WHITE);
Â  Â  circle(442,272,9);
Â  Â  setbkcolor(0);
Â  Â  gotoxy(15,15);
Â  Â  setcolor(WHITE);
Â  Â  settextstyle(1,0,1);
Â  Â  outtextxy(512,98,"x");
Â  Â  /* 510 for right side increaseo or decrease Â /
Â  Â  Â  Â 120 top increase decrease
Â  Â  Â  Â 130 left increase decrease
Â  Â  Â  Â 300 bottom increase decrease
Â  Â  Â  Â FOLLWING RECTANLGE JUST ABOVE INNERMOST RECTANGLE */
Â  Â  setcolor(WHITE);
Â  Â  rectangle(510,120,130,300);
Â  Â  /* FOLLOWING IS COAD FOR INNER MOST RECTANGLE */
Â  Â  setcolor(WHITE);
Â  Â  setfillstyle(1,3);
Â  Â  rectangle(531,100,112,321);
Â  Â  floodfill(530,111,WHITE);
Â  Â  /* FOLLOWING IS THE COAD FOR OUTERMOST WINDOW Â */
Â  Â  setcolor(8);
Â  Â  setfillstyle(7,8);
Â  Â  rectangle(532,99,111,322);
Â  Â  rectangle(533,98,110,323);
Â  Â  rectangle(534,97,109,324);
Â  Â  rectangle(535,96,108,325);
Â  Â  rectangle(536,95,107,326);
Â  Â  rectangle(537,94,106,327);
Â  Â  rectangle(538,93,105,328);
Â  Â  rectangle(539,92,104,329);
Â  Â  rectangle(540,91,103,328);
Â  Â  floodfill(0,0,8);
Â

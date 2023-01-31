#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
void main()
{
    int count_question,count_marks;
    system("cls");
    Mainhome:
    system("cls");
    gotoxy(40,0);
    system("color 20");
    printf("__________________________________");
    gotoxy(40,3);
    printf("  WELCOME TO ONLINE TEST PROGRAM");
    gotoxy(40,6);
    printf("__________________________________");
    system("color 30");
    gotoxy(40,8);
    printf("----------------------------------");
    gotoxy(40,9);
    printf("      Enter 'S' to start game      ");
    gotoxy(40,10);
    printf("   Enter 'V' to view High score    ");
    gotoxy(40,11);
    printf("       Enter 'H' for Help          ");
    gotoxy(40,12);
    printf("        Enter 'Q' to quit          ");
    gotoxy(40,13);
    printf("----------------------------------");
    getch();
}
void gotoxy(int x,int y)
{
    //system("cls");
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    //getch();
}

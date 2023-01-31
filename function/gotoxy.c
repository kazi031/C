#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    //system("cls");
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    //getch();
}
void main()
{
    system("cls");
    gotoxy(15,15);
    printf("*");
    getch();
}


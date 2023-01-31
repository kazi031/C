#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
//#include<time.h>
/*GotoXY Function*/
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
    int i;
    char s[]={"#FILE/FOLDER PROJECT SOFTWARE !"};
    system("cls");
    gotoxy(14,5);
    system("color 20");
    printf("__________________________________");
    gotoxy(40,0);
    printf("__________________________________");
    gotoxy(14,10);
    printf("__________________________________");
    gotoxy(16,8);
    system("color 30");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    getch();
}

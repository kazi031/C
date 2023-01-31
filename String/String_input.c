#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    char string[20];
    //String Input//
    //scanf("%s", string);
    //printf("Hello %s!",string);
    //%s works until it finds a space//
    //To get a sentence as input we have to use gets() function//
    gets(string);
    printf("Hello %s!",string);
    getch();
}

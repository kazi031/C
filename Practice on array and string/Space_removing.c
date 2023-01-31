#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    system("cls");
    char c[20];
    gets(c);
    int x=strlen(c),i;
    for(i=0;i<x;i++)
    {
        if(c[i]==' ')
        {
            goto A;
            //printf("");
        }
        else
        {
            printf("%c",c[i]);
        }
        A:;
    }
    getch();
}

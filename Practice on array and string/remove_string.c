#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[20]="cse-18";
    strupr(string);
    int x=strlen(string);
    //printf("%d is the length",x);
    int i;
    for(i=0;i<x;i++)
    {
        if ((string[i]>='A') && (string[i]<='Z'))
        {
            printf("");
        }
        else
        {
            printf("%c",string[i]);
        }
    }
    //puts(string);
    getch();
}

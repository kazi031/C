#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    char string[20];
    gets(string);
    int i,length=0;
    i=0;
    while(i<20)
    {
        if(string[i]!='\0')
        {
            length++;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("%d",length);
    getch();
    //or we can add the header file string.h and use strlen(string) instead//
}

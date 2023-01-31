#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    system("cls");
    char string[20];
    char c;
    gets(string);
    scanf("%c", &c);
    int count=0,i;
    for(i=0;i<strlen(string);i++)
    {
        if (string[i]==c)
        {
            count++;
        }
    }
    printf("%d",count);
    getch();
}

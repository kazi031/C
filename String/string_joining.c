#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    system("cls");
    char string1[20];
    char string2[20];
    gets(string1);
    gets(string2);
    /*int length_1=strlen(string1);
    int length_2=strlen(string2);
    int i;
    for(i=length_1;i<=length_1+length_2;i++)
    {
        string1[i]=string2[i-length_1];
    }
    puts(string1);*/
    strcat(string1,string2);
    printf("The new stirng is >>");
    puts(string1);
    getch();
}

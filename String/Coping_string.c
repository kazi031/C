#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    system("cls");
    char string[20]="Hello World!";
    char copied_string[20];
    system("cls");
    //gets(string);
    printf("Before coping the string is:");
    puts(string);
    gets(copied_string);
    /*int length=strlen(string),i;
    //if we use <= that include the null character also//
    for(i=0;i<=length;i++)
    {
        copied_string[i]=string[i];
    }
    //thats why although having 20 items it prints until '\0'//
    puts(copied_string);*/
    //instead of this we can use strcpy//
    strcpy(string,copied_string);
    printf("\nAfter Coping The string is:");
    puts(string);
    getch();
}

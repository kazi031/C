#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[30];
    system("cls");
    gets(string);
    int length=strlen(string);
    int i;
    int count=0;
    char string_new[20];
    for(i=0;i<length;i++)
    {
        char c=string[i];
        if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
        {
            string_new[count]=string[i];
            count++;
            //printf("%c", string[i]);
        }
        /*else if((c>='a')&&(c<='z'))
        {
            string_new[count]=string[i];
            count++;
            //printf("%c", string[i]);
        }*/
        else
        {
            //printf("");
            count=count+0;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%c", string_new[i]);
    }
    getch();
}

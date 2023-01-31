#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[20],new_string[20];
    gets(string);
    int len=strlen(string);
    int count=0;
    int i=0;
    while(i<len)
    {
        if(string[i]==' ')
        {
            printf("=%d",count);
            printf("\n");
            count=0;
        }
        else if(i==len-1)
        {
            count++;
            printf("%c",string[i]);
            printf("=%d",count);
        }
        else
        {
            printf("%c",string[i]);
            count++;
        }
        i++;
    }
    getch();
}

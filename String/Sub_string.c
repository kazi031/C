#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[20]="Bangladesh";
    char sub_string[10]="glad";
    int len1=strlen(string);
    int len2=strlen(sub_string);
    int i,j;
    int temp=0;
    int count=0;
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(sub_string[j]==string[count])
            {
                temp++;
            }
            count++;
        }

    }
    getch();
}

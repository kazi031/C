#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char string[30]/*,new_string[20]*/;
    gets(string);
    int len=strlen(string);
    //printf("%d",len);
    int count=0;
    int i=0;
    int temp=0;
    while(i<len)
    {

        if(string[i]==' ')
        {
            int k;
            for(k=count-1;k>=temp;k--)
            {
                printf("%c",string[k]);
            }
            //printf(" ");
            temp=i+1;
            count++;
            printf(" ");
        }
        else if(i==len-1)
        {
            int var;
            count++;
            //printf("%c",string[i]);
            for(var=count-1;var>=temp;var--)
            {
                printf("%c",string[var]);
            }
        }
        else
        {
            count++;
        }
        i++;
    }
    getch();
}

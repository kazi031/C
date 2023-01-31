#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={1,2,3,4,5};
    int i;
    i=4;
    while(i>=0)
    {
        printf("%d ",array[i]);
        i--;
    }
    printf("\n");
    char string[20]="I am a boy";
    int x=strlen(string);
    for(i=x-1;i>=0;i--)
    {
        printf("%c", string[i]);
    }
    getch();
}

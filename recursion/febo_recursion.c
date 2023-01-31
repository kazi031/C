#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int a,x,i;
    printf("Input Any Number>>");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        x=febo_recursion(i);
        printf(" %d ",x);
    }
    getch();
}
int febo_recursion(int x)
{
    int first_elem=0,second_elem=1,z,temp;
    if(x==1)
    {
        //printf("%d ",second_elem);
        return 1;
    }
    else if(x==2)
    {
        //printf("%d ",second_elem);
        return 1;
    }
    else
    {
        return febo_recursion(x-1)+febo_recursion(x-2);
        //printf("%d",temp);

    }
}

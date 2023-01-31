#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int a;
    printf("Input Any Number>>");
    scanf("%d", &a);
    num_print(a);
    getch();
}

int num_print(int x)
{
    if(x==0)
    {
       return;
    }
    else
    {
        //printf(" %d ",x);
        num_print(x-1);
        printf(" %d ",x);
    }


}

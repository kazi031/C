#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    Even_Odd_print(x,y);
    return 0;
}
int Even_Odd_print(int a,int b)
{
    if(a>=b)
    {
        return;
    }
    else
    {
        if(a%2!=0)
        {
            printf(" %d ",a);
            Even_Odd_print(a+2,b);
        }
        else
        {
            a++;
            printf(" %d ",a);
            Even_Odd_print(a+2,b);
        }
    }
}

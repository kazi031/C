#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    Even_num_print(x,y);
    return 0;
}
int Even_num_print(int a,int b)
{
    if(a==b)
    {
        return;
    }
    else
    {
        if(a%2==0)
        {
            printf("%d ",a);
            Even_num_print(a+2,b);
        }
        else
        {
            a++;
            printf("%d ",a);
            Even_num_print(a+2,b);
        }
    }
}

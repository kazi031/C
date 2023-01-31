#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    Hailstone_seq(x);
    return 0;
}
int Hailstone_seq(int n)
{
    if(n==1)
    {
        return;
    }
    else
    {
        if(n%2==0)
        {
            n=n/2;
            printf("%d ",n);
            Hailstone_seq(n);
        }
        else
        {
            n=(n*3)+1;
            printf("%d ",n);
            Hailstone_seq(n);
        }
    }
}

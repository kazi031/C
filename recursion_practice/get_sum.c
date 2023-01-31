#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d",&n);
    y=get_sum(n);
    printf("%d",y);
    return 0;
}
int get_sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return x+get_sum(x-1);
    }
}

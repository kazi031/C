#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=recursive_factorial(x);
    printf("%d",y);
    return 0;
}
recursive_factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*(recursive_factorial(n-1));
    }
}

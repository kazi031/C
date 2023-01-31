#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d", &x);
    y=square_series(x);
    printf("%d",y);
    return 0;
}
int square_series(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n*n+square_series(n-1);
    }
}

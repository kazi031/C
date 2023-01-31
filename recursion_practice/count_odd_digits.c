#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=count_odd_digit(x);
    printf("%d",y);
    return 0;
}
int count_odd_digit(int n)
{
    int rem;
    rem=n%10;
    if(n==0)
    {
        return;
    }
    else
    {
        if(rem%2!=0)
        {
            return 1+count_odd_digit(n/10);
        }
        else
        {
            return 0+count_odd_digit(n/10);
        }
    }
}

#include<stdio.h>
int main()
{
    int n=22;
    int k=odd(n);
    if(k==1)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}
int odd(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return even(n-1);
    }
}
int even(int n)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return odd(n-1);
    }
}




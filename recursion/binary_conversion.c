#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    binary_convertion(x);

    return 0;
}
int binary_convertion(int n)
{
    int rem;
    if(n==0)
    {
        return;
    }
    else
    {
        rem=n%2;
        binary_convertion(n/2);
        printf("%d",rem);
    }
}

#include<stdio.h>

int main()
{
    long long int n,m,a,x1,x2,x;
    scanf("%lld%lld%lld", &n,&m,&a);
    x1=n/a;
    x2=m/a;
    if (n%a==0)
    {
        x1=n/a;
    }
    else
    {
        x1=x1+1;
    }
    if (m%a==0)
    {
        x2=m/a;
    }
    else
    {
        x2=x2+1;
    }
    x=x1*x2;
    printf("%lld", x);
    return 0;
}


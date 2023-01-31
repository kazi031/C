#include<stdio.h>
int gcd(int a, int b)
{
    int rem;
    rem=b%a;
    if(rem==0)
    {
        return a;
    }
    else
    {

        a=rem;
        b=a;
        gcd(a,b);
    }
}
int main()
{
    int z,x,y;
    scanf("%d %d",&x,&y);
    z=gcd(x,y);
    printf("%d",y);
    return 0;
}

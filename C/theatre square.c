#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a,B,c,d,e;
    scanf("%d%d%d", &n,&m,&a);
    c==n*m;
    d==a*a;
    if (c%d==0)
    {
        e=c/d;
        printf("%d",e);
    }
    else
    {
        B=(n*m)/(a*a);
    }
    if (B%2==0)
    {
        printf("%d",B+2);
    }
    else
    {
        printf("%d",B+1);
    }
        return 0;
}

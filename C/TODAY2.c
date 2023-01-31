#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z;
    char p,q,r;
    scanf("%d%c%d%c%c",&x,&p,&y,&q,&r);
    if(q=='a')
    {
        printf("%d:%d", x,y);
    }
    else if(q=='p')
    {
        z=x+12;
        printf("%d:%d",z,y);
    }
    return 0;
}

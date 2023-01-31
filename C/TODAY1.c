#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,p;
    char r,q;
    scanf("%d%c%d%c%d", &x,&r,&y,&q,&z);
    if (x>12)
    {
        p=x-12;
        printf("%d:%d:%d", p,y,z);
    }
    else if (x<12 && x>0)
    {
        printf("%d:%d:%d", x,y,z);
    }
    else if (x==0)
    {
        p=12-x;
        printf("%d:%d:%d", p,y,z);
    }
    else
    {
        printf("%d:%d:%d", x,y,z);
    }
    return 0;
}

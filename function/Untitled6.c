#include<stdio.h>
//int max(int x,int y);
int main()
{
    int a,b,p,c;
    printf("A >>");
    scanf("%d", &a);
    printf("B >>");
    scanf("%d", &b);
    printf("C >>");
    scanf("%d", &c);
    p=max(a,b,c);
    printf("The max is %d",p);
    return 0;
}
int max(int x,int y,int z)
{
    if((x>y)&&(x>z))
    {
        return x;
    }
    else if((y>x)&&(y>z))
    {
        return y;
    }
    else
    {
        return z;
    }
}

#include<stdio.h>
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("After swap>> %d %d\n", x,y);
}
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    swap(a,b);
    printf("Before swap>>%d %d",a,b);
    return 0;
}

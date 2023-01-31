#include<stdio.h>
int main()
{
    int a,i,c;
    scanf("%d", &a);
    c=1;
    for(i=1;i<=a;i++)
    {
        c=i*c;
    }
    printf("%d", c);
    return 0;
}

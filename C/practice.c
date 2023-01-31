#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int y,c=0;
    for(i=0;i<n;i++)
    {
        y=febo(i);
        printf("%d ",y);
        c=c+y;
    }
    printf("\nThe sum is %d",c);
    return 0;
}
int febo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return febo(n-1)+febo(n-2);
    }
}

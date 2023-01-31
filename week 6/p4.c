#include<stdio.h>
int main()
{
    int n,i,c=0;
    int sum=0;
    int total=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        c=c+sum;
        sum=sum+i;
        total=sum+c;
    }
    //total=total+sum;
    printf("%d", total);
    return 0;
}

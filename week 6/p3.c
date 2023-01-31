#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int total=0;
    for(j=1;j<=n;j++)
    {
        int sum=1;
        for(i=1;i<=j;i++)
        {
            sum=sum*i;
        }
        //printf("%d",sum);
        total=total+sum;

    }
    printf("%d", total);
    return 0;
}


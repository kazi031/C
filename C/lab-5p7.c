#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d", &n);
    sum=0;
    i=1;
    while(i<n)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum;
        }
        i++;
    }
    if (sum==n)
    {
        printf("Perfect");
    }
    else
    {
        printf("not Perfect");
    }
    return 0;
}

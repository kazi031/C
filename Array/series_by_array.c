#include<stdio.h>
int main()
{
    int num[5];
    int i,j,sum;
    for(i=0;i<=4;i++)
    {
        scanf("%d", &num[i]);
    }
    sum=1;
    for(j=0;j<=4;j++)
    {
        sum=num[j]*num[j];
        if (j<4)
        {
            printf("%d+", sum);
        }
        else
        {
            printf("%d", sum);
        }
    }
    return 0;
}

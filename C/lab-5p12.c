#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sum;
    scanf("%d", &n);
    sum=(float)(0);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
        printf("1/%d+", i);
        }
        else
        {
            printf("1/%d", i);
        }
        sum=sum+pow(i,-1);

        //printf("%f", sum);
    }
    printf("\n%f", sum);
    return 0;
}

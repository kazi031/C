#include<stdio.h>
int main()
{
    int i,n,x1,x2,x3;
    printf("input number of terms:");
    scanf("%d", &n);
    x1=1;
    x2=3;
    i=1;
    while(i<=n)
    {
        if (i==1)
        {
            printf("%d ",x1);
        }
        else if (i==2)
        {
            printf("%d ",x2);
        }
        else if (i>2)
        {
            x3=x1+x2;
            printf("%d ",x3+4);
            x1=x2;
            x2=x3+4;
        }
        i++;
    }
    return 0;
}

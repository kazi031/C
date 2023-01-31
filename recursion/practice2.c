#include<stdio.h>
void febo(int x)
{
    int x1=0,x2=1,sum,i;
    for(i=0;i<=x;i++)
    {
        if(i==0)
        {
            printf("%d ",x1);
        }
        else if(i==1)
        {
            printf("%d ",x2);
        }
        else
        {
            sum=x1+x2;
            x1=x2;
            x2=sum;
            printf("%d ",sum);
        }
    }
}
int main()
{
    int n;
    printf("Number of Terms >>");
    scanf("%d", &n);
    febo(n);
}

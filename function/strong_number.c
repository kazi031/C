#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Input Lower Limit >>");
    scanf("%d",&x);
    printf("Input Upper Limit >>");
    scanf("%d",&y);
    strong_num(x,y);
    return 0;
}
int strong_num(int a,int b)
{
    int i,j,c,total,sum,rem;
    for(i=a;i<=b;i++)
    {
        c=i;
        total=0;
        while(c!=0)
        {
            rem=c%10;
            c=c/10;
            j=factorial(rem);
            total=total+j;
        }
        if(total==i)
        {
            printf("%d ",i);
        }

    }
}
int factorial(int d)
{
    int sum=1,i;
    for(i=1;i<=d;i++)
    {
        sum=sum*i;
    }
    return sum;
}

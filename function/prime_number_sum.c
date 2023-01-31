#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    system("cls");
    printf("Lower Limit >>");
    scanf("%d", &x);
    printf("Upper Limit >>");
    scanf("%d", &y);
    prime_number_sum(x,y);
    getch();
    //return 0;
}
int prime_number_sum(int a,int b)
{
    int i,sum,y;
    sum=0;
    for(i=a;i<=b;i++)
    {
        y=prime_number_check(i);
        sum=sum+y;
    }
    printf("%d",sum-1);
}
int prime_number_check(int k)
{
    int num,j,count;
    count=0;
    for(j=2;j<=k/2;j++)
    {

        if(k%j==0)
        {
            count=count+1;
        }
    }
    if(count==0)
    {
        return k;
    }
    else
    {
        return 0;
    }

}

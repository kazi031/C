#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        if(check_number(n,i)==1)
            count++;
        else
            count=count+0;
    }
    if(count%2==0)
        printf("even parity(1)");
    else
        printf("odd parity(0)");
    return 0;
}
int check_number(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    n=n&x;
    n=n>>position;
    return n;
}

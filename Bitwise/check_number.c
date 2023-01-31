#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    dec_to_bin(n);
    count=check_number(n,1);
    if(count==1)
    {
        printf("\nThe number is set(1)");
    }
    else
    {
        printf("\nThe number is reset(0)");
    }
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
void dec_to_bin(unsigned int n)
{
    int bin[8];
    int i;
    for(i=0;i<8;i++)
    {
        bin[i]=n%2;
        n=n/2;
    }
    for(i=7;i>=4;i--)
    {
        printf("%d",bin[i]);
    }
    printf(" ");
    for(i=3;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n>>2;
    dec_to_bin(n);
    return 0;
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

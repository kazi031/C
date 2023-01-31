//makes 0-1 and 1-0//
#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned int n=7;
    printf("Before Toggle: ");
    dec_to_bin(n);
    printf("\nAfter Toggle: ");
    toggle(n,1);
}
void toggle(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    n=n^x;
    dec_to_bin(n);
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

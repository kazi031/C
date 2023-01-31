#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    printf("Before set:");
    dec_to_bin(n);
    //n=set(n,4);
    printf("\nAfter set:");
    //dec_to_bin(n);
    set(n,1);
    printf("\nAfter reset:");
    reset(n,0);
    return 0;
}
void set(unsigned int n,int position)
{9
    int x=1;
    x=x<<position;
    n=n|x;
    dec_to_bin(n);
}
void reset(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    x=~x;
    n=n&x;
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

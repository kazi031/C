#include<stdio.h>
#include<conio.h>
int main()
{
    int n,g;
    //scanf("%d",&n);
    n=5;
    n=n<<2;
    dec_to_bin(n);
    g=extract(n,4,6);
    printf("\n");
    dec_to_bin(g);
    return 0;
}
int extract(unsigned int n,int from,int to)
{
    int x=0;
    int i;
    for(i=to;i>=from;i--)
    {
        x=x<<1;
        if(check_number(n,i)==1)
        {
            x=set(x,0);
        }
        else
        {
            x=reset(x,0);
        }
    }
    return x;
}
int check_number(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    n=n&x;
    n=n>>position;
    return n;
}
int set(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    n=n|x;
    //dec_to_bin(n);
    return n;
}
int reset(unsigned int n,int position)
{
    int x=1;
    x=x<<position;
    x=~x;
    n=n&x;
    return n;
    //dec_to_bin(n);
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

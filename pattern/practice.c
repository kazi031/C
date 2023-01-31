#include<stdio.h>
int main()
{
    int row,col,n=5,k;
    for(row=1;row<=n;row++)
    {
        for(k=2;k<=row;k++)
        {
            printf(" ");
        }
        for(col=5;col>=1;col--)
        {
            printf("* ");
        }
        printf("\n");
    }





















    //number 2
    //n=10;
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }*/
    return 0;
}

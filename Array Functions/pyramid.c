#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    int space=n-1;
    for(row=1;row<=n;row++)
    {
        for(col=space;col>=0;col--)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        space--;
        printf("\n");

    }

}

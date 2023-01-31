#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    int space=0;
    for(row=n;row>=0;row--)
    {
        for(col=space;col>=0;col--)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        space++;
        printf("\n");
    }
}

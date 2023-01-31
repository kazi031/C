#include<stdio.h>
int main()
{
    int row,col;
    int n;
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int row,col,k,n;
    printf("Enter N >>");
    scanf("%d", &n);
    for(row=0;row<=n;row++)
    {
        for(col=0;col<=n-row+1;col++)
        {
            if(col==0)
            {
                goto A;
            }
            printf("*");
        A:;
        }
        for(k=1;k<=2*row-1;k++)
        {
            printf(" ");
        }
        for(col=0;col<=n-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }




    return 0;
}

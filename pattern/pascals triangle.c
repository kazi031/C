#include<stdio.h>
int main()
{
    int n,row,col,k;
    int sum=1;
    int space;
    printf("Input Number of Terms >>");
    scanf("%d", &n);
    space=n;
    for(row=0;row<=n;row++)
    {
        for(k=1;k<=space;k++)
        {
            printf("  ");
        }
        for(col=0;col<=row;col++)
        {
            if((row==0)||(col==0))
            {
                sum=1;
            }
            else
            {
                sum=sum*(row-col+1)/col;
            }
            if(sum>9)
            {
                printf(" %d ",sum);
            }
            else if(sum>99)
            {
                printf("%d",sum);
            }
            else
            {
                printf(" %d  ",sum);
            }

        }
        space--;
        printf("\n");
    }


    return 0;
}

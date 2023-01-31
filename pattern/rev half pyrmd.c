#include<stdio.h>
int main()
{
    int row,col,k,space=0;
    for(row=5;row>=1;row--)
    {
        for(k=1;k<=space;k++)
                {printf("  ");}


        for(col=row;col>=1;col--)
        {
            printf("* ");
        }
        printf("\n");
        space++;
    }
    space=4;
    for(row=1;row<=5;row++)
    {
        for(k=1;k<=space;k++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        space--;
        printf("\n");
    }




    return 0;
}

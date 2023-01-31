#include<stdio.h>
int main()
{
    int n=5,i,j;
    //scanf("%d", &n);
    int space=4;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
    //scanf("%d", &n);
    space=0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        space++;
    }
    return 0;
}

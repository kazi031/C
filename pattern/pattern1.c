#include<stdio.h>
int main()
{
    int n=5,i,j;
    //char a='A';
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
    return 0;
}

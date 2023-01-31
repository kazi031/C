#include<stdio.h>
int main()
{
    int n;
    int i,j;
    int a=1;
    printf("N >>");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        if(a<=9)
        {
            printf(" %d ",a++);
        }
        else
        {
            printf(" %d",a++);
        }
        printf("\n");
    }
    return 0;
}

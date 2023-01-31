#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, n;
    printf("Enter value of N >> ");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {

        for(k=0; k<=n-i+1; k++)
        {
            if(k==0)
            {
                goto A;
            }
            printf("*");
        A:;
        }


        for(j=1; j<=2*i-1; j++)
        {

            printf(" ");
        }

        for(k=0; k<=n-i+1; k++)
        {
            if(k==0)
            {
                goto B;
            }
            printf("*");
            B:;
        }

        printf("\n");
    }

    for (i=n-1; i>=0; i--)
    {
        if(i==0)
        {
            for(j=1; j<=2*i-2; j++)
            {
                printf("*");
            }


        }
        for(k=0; k<=n-i+1; k++)
        {
            if(k==0)
            {
                goto C;
            }
            printf("*");
        C:;
        }


        for(j=1; j<=2*i-1; j++)
        {

            printf(" ");
        }

        for(k=0; k<=n-i+1; k++)
        {
            if(k==0)
            {
                goto D;
            }
            printf("*");
            D:;
        }

        printf("\n");
    }


    return 0;
}

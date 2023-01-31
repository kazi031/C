#include<stdio.h>
int main()
{
    int i,n,count;
    scanf("%d", &n);
    count=0;
    i=2;
    while(i<n)
    {
        if (n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==0)
    {
        printf("Prime");
    }
    else
    {
        printf("not Prime");
    }

    return 0;
}


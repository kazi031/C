
#include<stdio.h>
int main()
{
    int n,r1,sum=0;
    scanf("%d", &n);
    int c=n;
    while (n!=0)
    {
        r1=n%10;
        n=n/10;
        sum=sum*10+r1;
    }
    //printf("%d", sum);
    if (c==sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }






    /*r1=n%10;
    d1=n/10;
    d2=d1/10;
    r2=d1%10;
    r3=r2%10;
    sum=r1*100+r2*10+r1;
    printf("%d", sum);*/

    return 0;
}

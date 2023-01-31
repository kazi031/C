#include<stdio.h>
int main()
{
    long int x;
    int sum;
    scanf("%ld",&x);
    sum=sum_of_digits(x);
    printf("\nThe sum of digits are %d",sum);


    return 0;
}
int sum_of_digits(int n)
{
    int rem;
    if(n==0)
    {
        return;
    }
    else
    {
        rem=n%10;
        return rem+sum_of_digits(n/10);
    }
}

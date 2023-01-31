#include<stdio.h>
int main()
{
    int n,y;
    printf("Enter Any Number");
    scanf("%d", &n);
    y=sum_of_digits(n);
    printf("%d",y);
    return 0;
}
int sum_of_digits(int x)
{
    int rem;
    if(x==0)
    {
        return x;
    }
    else
    {
        rem=x%10;
        x=x/10;
        return rem+sum_of_digits(x/10);
    }

}

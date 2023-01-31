#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your Decimal Degit >>");
    scanf("%d", &x);
    printf("Your Binary Degit is >>");
    binary_convertion(x);

    return 0;
}
int return_count(int n)
{
    int rem1,count=0;
    while(n!=0)
    {
        rem1=n%2;
        n=n/2;
        count=count+1;
    }
    return count-1;
}
int binary_convertion(int y)
{
    int rem,i;
    int k=y;
    int z=return_count(k);
    int j[z];
    while(y!=0)
    {
        rem=y%2;
        y=y/2;
        j[z]=rem;
        z--;
    }
    for(i=0;i<=return_count(k);i++)
    {
        printf("%d", j[i]);
    }
}


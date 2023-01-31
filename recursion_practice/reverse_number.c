#include<stdio.h>
int main()
{
    int n,ret;
    printf("Input Any Number");
    scanf("%d",&n);
    ret=rev_num(n);
    /*if(n==ret)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    //printf("%d",ret);
    //return 0;*/
}
int rev_num(int x)
{
    int rem;
    if(x==0)
    {
        return;
    }
    else
    {
        rem=x%10;
        //rev=(rev*10)+rem;
        printf("%d",rem);
        rev_num(x/10);
        //return rev;
    }
}


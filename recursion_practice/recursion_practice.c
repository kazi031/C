#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Lower Limit>>");
    scanf("%d", &x);
    printf("Enter Upper Limit>>");
    scanf("%d", &y);
    print_num(x,y);



    return 0;
}
int print_num(int a,int b)
{
    if(a>b)
    {
        return;
    }
    else
    {
        printf("%d ",b);
        print_num(a,b-1);
    }
}

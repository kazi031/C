#include<stdio.h>
int main()
{
    int a,b;
    printf("Input Any Number>>");
    scanf("%d", &a);
    printf("Input Any Number>>");
    scanf("%d", &b);
    num_print(a,b);
    return 0;
}
int num_print(int x,int y)
{
    if(x==y)
    {
       return;
    }
    else
    {
        printf(" %d ",x);
        num_print(x+1,y);
    }


}


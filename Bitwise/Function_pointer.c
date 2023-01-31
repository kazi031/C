#include <stdio.h>
int func(int a)
{
    printf("The value of a is %d",a);
}
int add(int a,int b)
{
    printf("The addition is %d",a+b);
}
int substraction(int a,int b)
{
    printf("The substraction is %d",a-b);
}
int multiplication(int a,int b)
{
    printf("The multiplication is %d",a*b);
}
int division(int a,int b)
{
    printf("The division is %f",(float)(a/b));
}
int main()
{
    //int x=10;
    int ch;
    scanf("%d",&ch);
    void (*func_ptr[4])(int,int)={add,substraction,multiplication,division};
    if((ch>3)||(ch<0))
    {
        return 0;
    }
    else
    {
        func_ptr[ch](6,2);
        return 0;
    }
    //dude that was savage
}

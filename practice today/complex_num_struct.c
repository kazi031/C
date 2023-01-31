#include<stdio.h>
#include<conio.h>
struct Complex_number
{
    int real_part;
    int imaginary_part;
};
typedef struct Complex_number COMPLEX;
int main()
{
    COMPLEX x1;
    COMPLEX x2;
    short int x;
    printf("Enter real part of the 1st imaginary number      >>");
    scanf("%d",&x1.real_part);
    printf("Enter imaginary part of the 1st imaginary number >>");
    scanf("%d",&x1.imaginary_part);
    printf("Enter real part of the 2nd imaginary number      >>");
    scanf("%d",&x2.real_part);
    printf("Enter imaginary part of the 2nd imaginary number >>");
    scanf("%d",&x2.imaginary_part);
    while(scanf("%d",&x),x!=-1)
    {
        if(x==1)
        {
            printf("//Substraction//\n");
            substract(x1,x2);
        }
        else if(x==2)
        {
            printf("//Multiplication//\n");
            multiply(x1,x2);
        }
    }
    return 0;
}
void substract(COMPLEX t1,COMPLEX t2)
{
    COMPLEX t3;
    t3.real_part=t1.real_part-t2.real_part;
    t3.imaginary_part=t1.imaginary_part-t2.imaginary_part;
    if(t3.imaginary_part>0)
    {
        printf("%d+%di\n",t3.real_part,t3.imaginary_part);
    }
    else
    {
        printf("%d%di\n",t3.real_part,t3.imaginary_part);
    }
}
void multiply(COMPLEX y1,COMPLEX y2)
{
    COMPLEX y3;
    y3.real_part=(y1.real_part*y2.real_part)-(y1.imaginary_part*y2.imaginary_part);
    y3.imaginary_part=(y1.real_part*y2.imaginary_part)+(y1.imaginary_part*y2.real_part);
    if(y3.imaginary_part>0)
    {
        printf("%d+%di\n",y3.real_part,y3.imaginary_part);
    }
    else
    {
        printf("%d%di\n",y3.real_part,y3.imaginary_part);
    }
}

#include<stdio.h>
#include<conio.h>
struct complex_num
{
    int real_part;
    int imaginary_part;
};
typedef struct complex_num CMPLX;
void add1_complex_number(CMPLX a,CMPLX b);
//void multiply_complex_number(CMPLX a,CMPLX b);
int main()
{
    CMPLX complex_number1;
    CMPLX complex_number2;
    complex_number1.real_part=10;
    complex_number1.imaginary_part=4;
    complex_number2.real_part=5;
    complex_number2.imaginary_part=2;
    add_complex_number(complex_number1,complex_number2);
    printf("\n");
    multiply_complex_number(complex_number1,complex_number2);
    /*CMPLX new_number;
    new_number.real_part=complex_number1.real_part+complex_number2.real_part;
    new_number.imaginary_part=complex_number1.imaginary_part+complex_number2.imaginary_part;
    printf("%d+%di", new_number.real_part,new_number.imaginary_part);*/
    getch();
    return 0;
}
void add_complex_number(CMPLX a,CMPLX b)
{
    CMPLX c;
    c.real_part=a.real_part+b.real_part;
    c.imaginary_part=a.imaginary_part+b.imaginary_part;
    printf("%d + %di",c.real_part,c.imaginary_part);
    //return c;
    //return c;
}
void multiply_complex_number(CMPLX a,CMPLX b)
{
    CMPLX d;
    d.real_part=(a.real_part*b.real_part)-(a.imaginary_part*b.imaginary_part);
    d.imaginary_part=(a.real_part*b.imaginary_part)+(a.imaginary_part*b.real_part);
    printf("%d + %di", d.real_part,d.imaginary_part);
}

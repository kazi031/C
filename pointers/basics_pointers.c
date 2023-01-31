#include<stdio.h>
#include<conio.h>
void main()
{
    /*int num1;
    int *numptr;
    int num2;
    num1=100;
    numptr=&num1;
    num2=*numptr;
    printf("num=%d  numptr=%d   address of num=%d       num2=%d", num1,numptr,num1,num2);
    printf("\nnum=%d  numptr=%d   address of num=%d   num2=%d", num1,numptr,&num1,num2);*/
    //relation between pointers and arrays//
    char string_1[]="Hello";
    char *string_2="Goodbye";
    string_2= &string_1; /*if we take this we will see that the string_2 will have the same address
    as string_1(as its known that array is an adress) we can use it with or without ampersent*/
    printf("%d %d %s\n", &string_1, string_1, string_1);
    printf("%d %d %s\n", &string_2, string_2, string_2);
    //&string_2 is the address where the pointer variable is stored//
    getchar();
}

#include<stdio.h>
#include<conio.h>
#define LENGTH 3
int data[length];
void main()
{
    int *pi;// a sample pointer to the integer//
    int *ppi;// a pointer to a pointer to the integer//

    printf("Multiple Inderection Example");
    for(i=0;i<=LENGTH;i++)
    {
        data[i]=i;
    }
    for(i=0;i<=LENGTH;i++)
    {
        printf("%d \n", data[i]);
    }
    /*a sample pointer to the pointer to the integer*/
    pi=data;
    ppi= &pi;
    for(i=0;i<LENGTH;i++)

}

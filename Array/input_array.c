#include<stdio.h>
#include<conio.h>
void main()
{
    int e[5]={10,15,20,25,30},i;
    system("cls");
    printf("Enter salary for five Employees!\n");
    /*for(i=0;i<5;i++)
    {
        scanf("%d", &e[i]);
    }*/
    printf("Memory maps for the array elements!");
    for(i=0;i<5;i++)
    {
        printf("\nThe variable e[%d] The value %d At memory adress %u", i,e[i],&e[i]);
    }
    getch();
}

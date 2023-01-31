#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5]={1,2,3,4,5},i;
    system("cls");
    for(i=0;i<5;i++)
    {
        arr[i]=arr[i]*arr[i];
        printf("%d ",arr[i]);
    }
    getch();
}

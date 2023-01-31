#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        arr[i]=arr[i]+i+1;
        printf("%d ", arr[i]);
    }
    getch();
}

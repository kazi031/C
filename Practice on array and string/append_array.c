#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[20]={1,2,3,4,5};
    int arr2[20]={6,7,8,9,10};
    int count=0,i;
    for(i=5;i<10;i++)
    {
        arr1[i]=arr2[count];
        count++;
    }
    int j;
    for(j=0;j<10;j++)
    {
        printf("%d ",arr1[j]);
    }
    getch();
}

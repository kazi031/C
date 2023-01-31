#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int array1[5]={1,2,3,4,5};
    int array2[5]={11,12,13,14,15};
    int array3[5]={1,2,3,4,5};
    printf("\nBefore Swapping The first array is >>");
    for(i=0;i<5;i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nBefore Swapping The second array is >>");
    for(i=0;i<5;i++)
    {
        printf("%d ", array2[i]);
    }
    swap_array(array1,array2,array3,5);
    getch();
}
void swap_array(int arr1[],int arr2[],int arr3[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        arr1[i]=arr2[i];
    }
    for(i=0;i<size;i++)
    {
        arr2[i]=arr3[i];
    }
    printf("\nAfter Swapping The first array is >>");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nAfter Swapping The second array is >>");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr2[i]);
    }
}


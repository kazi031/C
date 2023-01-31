//program to run a selection sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={13,12,15,35,11};
    selection_Sort(array,5);
    print_array(array,5);
}
//selection sort algo//
void selection_Sort(int *arr,int n)
{
    int i,j,min_element;
    for(i=0;i<n-1;i++)
    {
        //min_element=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap_num( &arr[i] , &arr[j] );
            }
        }
    }
}
//For swapping the elements//
void swap_num(int *a,int *b)
{
    int num;
    num= *a;
    *a = *b;
    *b = num;
}
//Funtion for printing the sorted array//
void print_array(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *array=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", array[i]);
    }
    selection_Sort(array,n);
    printf("\nThe Largest Number is:%d",array[n-1]);
    free(array);
    return 0;
}
void selection_Sort(int arr[],int n)
{
    int i,j,min_element;
    for(i=0;i<n-1;i++)
    {
        min_element=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap_num( &arr[i] , &arr[j] );
            }
        }
    }
}
void swap_num(int *a,int *b)
{
    int num;
    num= *a;
    *a = *b;
    *b = num;
}


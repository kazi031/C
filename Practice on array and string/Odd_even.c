#include<stdio.h>
#include<conio.h>
void main()
{
    int array[6]={1,2,3,4,5,6};
    check_even(array,6);
    printf("\n");
    check_odd(array,6);
    getch();
}
void check_even(int arr[],int size)
{
    int i;
    int arr_even[5];
    int count=0;
    for(i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            arr_even[count]=arr[i];
            count++;
        }
        else
        {
            count=count+0;
        }
    }
    printf("The even elements are >>");
    for(i=0;i<count;i++)
    {
        printf("%d ",arr_even[i]);
    }
    //getch();
}
void check_odd(int arr[],int size)
{
    int i;
    int arr_odd[5];
    int count=0;
    for(i=0;i<size;i++)
    {
        if (arr[i]%2!=0)
        {
            arr_odd[count]=arr[i];
            count++;
        }
        else
        {
            count=count+0;
        }
    }
    printf("The odd elements are >>");
    for(i=0;i<count;i++)
    {
        printf("%d ",arr_odd[i]);
    }
    //getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5]={1,2,9,4,5};
    int i,largest;
    i=0;
    largest=arr[2];
    while(i<5)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        else
        {
            largest=largest;
        }
        i++;
    }
    printf("The Largest Element of The Array is %d",largest);
    getch();
}

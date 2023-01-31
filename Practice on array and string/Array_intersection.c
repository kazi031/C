#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,3,4,6,8};
    int arr3[5];
    int count=0,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[count]=arr1[i];
                count++;
            }
            else
            {
                count=count+0;
            }

        }
    }
    int k;
    for(k=0;k<count;k++)
    {
        printf("%d ", arr3[k]);
    }
    getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
    int j,z;
    int array[5]={6,14,22,3,15};
    int k=array[1];
    int count=1,i;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        if(array[i]>array[j])
        {
           array[i]=array[i];
        }
        else
        {
            z=array[i];
            array[i]=array[j];
            array[j]=z;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

    getch();
}

#include<stdio.h>
int main()
{
    int arr[5]={10,25,5,15,7};
    int i,j,n=5;
    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                interchange(&arr[j],&arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int interchange(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

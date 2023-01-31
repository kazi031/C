#include<stdio.h>
int main()
{
    int **ptr=malloc(5*sizeof(int *));
    int i;
    for(i=0;i<5;i++)
    {
        ptr[i]=malloc(6*sizeof(int));
    }
    ptr[0][0]=10;
    ptr[0][1]=15;
    ptr[0][2]=20;
    ptr[0][3]=25;
    ptr[0][4]=30;
    ptr[0][5]=35;
    for(i=0;i<6;i++)
    {
        printf("%d ",ptr[0][i]);
    }
    for(i=0;i<6;i++)
    {
        free(ptr[i]);
    }
    free(ptr);
}

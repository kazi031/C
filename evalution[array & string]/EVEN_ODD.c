#include<stdio.h>
#include<conio.h>
void main()
{
    //int n;
    //printf("Enter The Size of Your Array>>");
    //scanf("%d", &n);
    int even_array[10],odd_array[10];
    //int array[n];
    int i;
    int array[5]={1,2,3,4,5};
    /*for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }*/
    //even_array(array, 6);
    int count=0;
    int temp=0;
    for(i=0;i<5;i++)
    {
        if(array[i]%2==0)
        {
            even_array[count]=array[i];
            count++;
        }
        else
        {
            odd_array[temp]=array[i];
            temp++;
        }
    }
    int j;
    printf("The odd elements are");
    printf("\n");
    for(j=0;j<temp;j++)
    {
        printf("%d ", odd_array[j]);
    }
    printf("\n");
    printf("The even elements are");
    printf("\n");
    /*even array print*/
    for(j=0;j<count;j++)
    {
        printf("%d ", even_array[j]);
    }
    getch();
}

#include<stdio.h>
#include<conio.h>
void indexing_of_array();
void main()
{
    int x[3][3],row,col;
    printf("Input 2-D array!\n");
    /*Outer for loop for row*/
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d", &x[row][col]);
        }
    }
    /*for loop to read the array and print the output*/
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("\nthe value %d is in location %u",x[row][col], &x[row][col]);
        }
    }
    printf("\n");
    indexing_of_array();
    getch();

}
void indexing_of_array()
{
    int col,row;
    int array[4][2]={{100,25},{25,45},{35,40},{125,50}};
/*OUTER LOOP TO PRINT 2-D ARRAY!*/
    for(row=0;row<4;row++)
    {
        for(col=0;col<2;col++)
        {
            printf("\t%d and the location is %u",array[row][col],&array[row][col]);
        }
        printf("\n");
    }
    getch();
}

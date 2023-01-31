/*Design a resizeable array with the following functionalities*/
//a.add a number.
//b.display all the number.
//c.delete a number.
//d.reverse the array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n=0,x;
    int *pt=NULL;
    while(scanf("%d",&x),x!=-1)
    {
        /*Adding a number*/
        if(x==1)
        {
            printf("Please Enter A Number>>");
            n++;
            pt=realloc(pt,n*sizeof(int));
            scanf("%d",&pt[n-1]);
        }
        /*Displaying the numbers*/
        else if(x==2)
        {
            int i;
            printf("The Contents Are:");
            for(i=0;i<n;i++)
            {
                printf("%d ",pt[i]);
            }
        }
        /*Deleting a number*/
        else if(x==3)
        {
            int index,j;
            printf("Enter the index number you want to delete>>");
            scanf("%d",&index);
            if(index<0||index>=n)
            {
                printf("Invalid Index");
            }
            else
            {
                for(j=index;j<n;j++)
                {
                    pt[j]=pt[j+1];
                }
                n--;
                pt=realloc(pt,n*sizeof(int));
            }

        }
        /*Reverse printing*/
        else if(x==4)
        {
            int k;
            printf("The reverse array is:");
            for(k=n-1;k>=0;k--)
            {
                printf("%d ",pt[k]);
            }
        }
    }
    free(pt);
}

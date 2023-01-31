#include<stdio.h>
int main()
{
   int row,col,k,n;
   printf("Enter N >>");
   scanf("%d", &n);
   for(row=n;row>=0;row--)
   {
       if(row==n)
       {
           goto A;
       }
       for(col=0;col<=n-row;col++)
       {
           printf("*");
       }
       for(k=1;k<=2*row-1;k++)
       {
           printf(" ");
       }
       for(col=0;col<=n-row;col++)
       {
           printf("*");
       }

       printf("\n");
       A:;
   }

   return 0;
}

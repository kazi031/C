#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int x,sum;
    scanf("%d", &x);
    sum=square_series(x);
    printf("\n The Sum Of The Series Is >> `%d",sum);
    getch();

}
int square_series(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n%2==0)
    {
        return (-n*n)+square_series(n-1);
    }
    else
    {
        return (n*n)+square_series(n-1);
    }
}

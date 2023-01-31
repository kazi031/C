#include<stdio.h>
int main()
{
    int x,y,rem;
    scanf("%d%d", &x,&y);
    while(y%x!=0)
    {
        rem=x%y;
        y=x;
        x=rem;
    }
    printf("%d",rem);

    return 0;
}

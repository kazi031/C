#include<stdio.h>

int main()
{
    int w,p;
    scanf("%d", &w);
    if(w>=1 && w<=100)
    {
        p=w;
    }
    else
    {
        printf("NO");
    }
    if (p==2)
    {
        printf("NO");
    }
    else if (p%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


}

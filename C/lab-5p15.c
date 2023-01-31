#include<stdio.h>
int main()
{
    int a,c,i;
    scanf("%d", &a);
    c=1;
    for(i=1;i<=a;i++)
    {
        if (i<4)
        {
            printf(c);
            c++;
        }
        else if (i<6)
        {
            c+=3;
            printf(c);
        }
        else if (i<8);
        {
            c+=9;
            printf(c);
        }
        return 0;
    }



}

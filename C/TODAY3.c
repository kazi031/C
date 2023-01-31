#include<stdio.h>
#include<stdlib.h>
int main()
{
    char i;
    int x,y;
    scanf("%c", &i);
    if (i>='A' && i<='Z')
    {
        x=i+32;
        printf("%c",x);
    }
    else if (i>='a' && i<='z')
    {
        x=i-32;
        printf("%c",x);
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char i;
    scanf("%c", &i);
    if((i>='A' && i<='Z') || (i>='a' && i<='z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    scanf("%c", &x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("Vowel");
    }
    else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}

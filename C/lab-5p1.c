#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 80 ... 100:
        printf("Grade A");
        break;
    case 70 ... 79:
        printf("Grade B");
        break;
    case 60 ... 69:
        printf("Grade C");
        break;
    case 50 ... 59:
        printf("Grade D");
        break;
    case 40 ... 49:
        printf("Grade E");
        break;
    default:
        printf("Grade F");
    break;
    }
    return 0;
}

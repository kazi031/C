#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int x,i,j,count;
    printf("Please enter a word>>");
    scanf("%s", str1);
    x=strlen(str1);
    for(i = 0; str1[i]; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    //printf("%d\n",x);
    count=0;
    for(j=0;j<=x-1;j++)
    {
        if(str1[j]==str1[x-j-1])
        {
            count++;
        }
        else
        {
            count=count+0;
        }

    }
    if(count==x)
    {
        printf("Pilamdrome");
    }
    else
    {
        printf("Not a Pilandrome");
    }
    //printf("\n%d",count);
    return 0;
}

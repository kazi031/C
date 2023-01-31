/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    system("cls");
    string_lenth();
    getch();
}
void string_lenth()
{
    int c;
    char name[20];
    system("cls");
    printf("Enter Your name >>");
    gets(name);
    c=strlen(name);
    printf("The Length of [%s] is %d", name,c);
    getch();
}*/
#include<stdio.h>
#include<string.h>
int main()
{

    char stringwords[1000];
    char c,count=0;
    int len,i;
    printf("input string: ");
    //scanf ("%[^\n]s", stringwords); //works same as gets() kintu beshi effective
    gets(stringwords);
    len=strlen(stringwords);
    for(i=0;i<len;i++)
    {
        c=stringwords[i];
        if(c==' ' )
        {

            printf(" = %d",count);
            printf("\n");
            count=0;
        }
        else if(i==len-1)
        {
            count++;
            printf("%c",c);
            printf(" = %d",count);
        }

        else
        {

            printf("%c",c);
            count++;
        }
    }

}


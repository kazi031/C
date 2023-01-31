#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    mainhome:
    system("cls");
    char c,x,x1;
    printf("\t\t\t\t\tIF you Want to Input an String Enter 's' >>");
    printf("\n\t\t\t\t\tIF you want to Input an Number Enter 'n' >>\n\t\t\t\t\t");
    //char c;
    //scanf("%c", &c);
    //c=toupper(getch());
    c=toupper(getch());
    if(c=='S')
    {
        string_pilandrome();
        system("cls");
        printf("\t\t\t\t\tPlay Again?");
        printf("\nY/N?");
        //char x1;
        x1=toupper(getch());
        if(x1=='Y')
        {
            goto mainhome;
        }
    }
    else if(c=='N')
    {
        number_palindrome();
        system("cls");
        printf("\t\t\t\t\tPlay Again?");
        printf("\nY/N?");
        //char x1;
        x1=toupper(getch());
        if(x1=='Y')
        {
            goto mainhome;
        }
    }
    //Exit:;
    getch();
}
void string_pilandrome()
{
    system("cls");
    char str1[20],str2[20];
    int x,i,j,count;
    printf("Please enter a word>>");
    //scanf("%s", str1);
    getch();
    gets(x);
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
        printf("Palimdrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    //printf("\n%d",count);
    getch();
}
//
void number_palindrome()
{
    system("cls");
    int n,ret;
    printf("Input Any Number>>");
    scanf("%d",&n);
    ret=rev_num(n,0);
    if(n==ret)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    getch();
}
int rev_num(int x,int rev)
{
    int rem;
    if(x==0)
    {
        return rev;
    }
    else
    {
        rem=x%10;
        rev=(rev*10)+rem;
        //printf("%d",rem);
        rev_num(x/10,rev);
        //return rev;
    }
}


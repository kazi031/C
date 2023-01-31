#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
int main()
{
    mainhome:;
    int n;
    int count_marks,count_question;
    count_marks=count_question=0;
    scanf("%d", &n);
    switch(n)
        {
        //QUESTION 1//
        case 22:
        {
            FILE *fpointer22;
            fpointer22=fopen("new1.txt","r");

            char singleline22[150];
            while(fgets(singleline22,150,fpointer22)!=NULL)
            {
                printf("%s",singleline22);
            }
            count_question++;
            if (toupper(getch())=='A')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is A.Integer pointer");
                break;
            }

        }
        //Question 2//
        case 10:
        {
            FILE *fpointer10;
            fpointer10=fopen("new.txt","r");

            char singleline10[150];
            while(fgets(singleline10,150,fpointer10)!=NULL)
            {
                puts(singleline10);
            }
            count_question++;
            if (toupper(getch())=='B')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else if(toupper(getch())!='B')
            {
                printf("\nWrong!!! The correct answer is B.Compiler Error");
                break;
            }
            else
            {
                Sleep(5);
                break;
            }
        }

        }
    return 0;
}

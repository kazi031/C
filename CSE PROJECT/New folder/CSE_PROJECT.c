#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
void main()
{
    int count_question,count_marks;
    char choice;
    char player_name[20];
    time_t initial_time,final_time;
    int num_of_ques[6];
    int i,w;
    system("cls");
    Mainhome:
    system("cls");
    gotoxy(40,0);
    system("color 20");
    printf("__________________________________");
    gotoxy(40,3);
    printf("  WELCOME TO ONLINE TEST PROGRAM");
    gotoxy(40,6);
    printf("__________________________________");
    system("color 30");
    gotoxy(40,8);
    printf("----------------------------------");
    gotoxy(40,9);
    printf("      Enter 'S' to start game      ");
    gotoxy(40,10);
    printf("   Enter 'V' to view High score    ");
    gotoxy(40,11);
    printf("       Enter 'H' for Help          ");
    gotoxy(40,12);
    printf("        Enter 'Q' to quit          ");
    gotoxy(40,13);
    printf("----------------------------------");
    choice=toupper(getch());
    if(choice=='V')
    {

    }
    else if(choice=='Q')
    {

    }
    else if(choice=='H')
    {

    }
    else if(choice=='S')
    {
        system(cls);
        gotoxy(40,8);
        printf("Enter Your Name:");
        gotoxy(40,10);
        printf("Only one word");
        gets(player_name);
        Home:
        system("cls");
        initial_time=time(NULL);
        count_question=count_marks=0;
        i=1;
        Start:
        /*TO RANDOMIZE DIFFERENT NUMBERS*/
        r=rand()%23+1;
        num_of_ques[i]=r;
        /*FOR AVOIDING REPEATATION*/
        for(w=0;w<i;w++)
        {
            if(num_of_ques[w]==r)
            {
                goto Start;
            }
        }
        /*PASSING THE RANDOM NUMBER WE GOT THROUGH SWITCH-CASE*/
        switch(r)
        {
        /*QUESTION 1*/
        case 1:
            {
                FILE *fpointer1;
                fpointer1=fopen("Question1.txt","r");

                char singleline1[150];
                while(fgets(singleline1,150,fpointer1)!=NULL)
                {
                    puts(singleline1);
                }
                count_question++;
                if (toupper(getch())=='D')
                {
                    printf("\nCorrect!!!");
                    count_marks++;
                    break;
                }
                else
                {
                    printf("\nWrong!!! The correct answer is D.Infinity loop");
                    break;
                }

            }
        /*QUESTION 2*/
        case 2:
        {
            FILE *fpointer2;
            fpointer2=fopen("Question2.txt","r");

            char singleline2[150];
            while(fgets(singleline2,150,fpointer2)!=NULL)
            {
                puts(singleline2);
            }
            count_question++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.CSE-18");
                break;
            }
        }
        /*QUESTION 3*/
        case 3:
        {
            FILE *fpointer3;
            fpointer3=fopen("Question3.txt","r");

            char singleline3[150];
            while(fgets(singleline3,150,fpointer3)!=NULL)
            {
                puts(singleline3);
            }
            count_question++;
            if (toupper(getch())=='B')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is B.Optical disk");
                break;
            }
        }
        /*QUESTION 4*/
        case 4:
        {
            FILE *fpointer4;
            fpointer4=fopen("Question4.txt","r");

            char singleline4[150];
            while(fgets(singleline4,150,fpointer4)!=NULL)
            {
                puts(singleline4);
            }
            count_question++;
            if (toupper(getch())=='D')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is D.1");
                break;
            }
        }
        /*QUESTION 5*/
        case 5:
        {
            FILE *fpointer5;
            fpointer5=fopen("Question5.txt","r");

            char singleline5[150];
            while(fgets(singleline5,150,fpointer5)!=NULL)
            {
                puts(singleline5);
            }
            count_question++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.ii,iii");
                break;
            }
        }
        /*QUESTION 6*/
        case 6:
        {
            FILE *fpointer6;
            fpointer6=fopen("Question6.txt","r");

            char singleline6[150];
            while(fgets(singleline6,150,fpointer6)!=NULL)
            {
                puts(singleline6);
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
                printf("\nWrong!!! The correct answer is A.2");
                break;
            }
        }
        /*QUESTION 7*/
        case 7:
        {
            FILE *fpointer7;
            fpointer7=fopen("Question7.txt","r");

            char singleline7[150];
            while(fgets(singleline7,150,fpointer7)!=NULL)
            {
                puts(singleline7);
            }
            count_question++;
            if (toupper(getch())=='D')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is D.Both A & B.");
                break;
            }
        }
        /*QUESTION 8*/
        case 8:
        {
            FILE *fpointer8;
            fpointer8=fopen("Question8.txt","r");

            char singleline8[150];
            while(fgets(singleline8,150,fpointer8)!=NULL)
            {
                puts(singleline8);
            }
            count_question++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.1 3 6 10 15");
                break;
            }
        }
        /*QUESTION 9*/
        case 9:
        {
            FILE *fpointer9;
            fpointer9=fopen("Question9.txt","r");

            char singleline9[150];
            while(fgets(singleline9,150,fpointer9)!=NULL)
            {
                puts(singleline9);
            }
            count_question++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");
                count_marks++;
                break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.string has occupied 100 bytes.");
                break;
            }
        }
        /*QUESTION 10*/
        case 10:
        {
            FILE *fpointer10;
            fpointer10=fopen("Question10.txt","r");

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
            else
            {
                printf("\nWrong!!! The correct answer is B.Compiler Error");
                break;
            }
        }
        /*QUESTION 11*/
        //end bracket of switch
        }
        i++;
        if(i<=5)
        {
            goto Start;
        }
        final_time=time(NULL);
        float score;
        score=(float)count_marks/count_question*100-difftime(final_time,initial_time)/3;
        if(score<0)
        {
            score=0;
        }
        printf("\n\nYour Score: %.2f",score);
        /*MARKS WIZE RESULT SHOW*/










        //end bracket of else if(=='S')
        }











    getch();
    //End bracket of void main
}
void gotoxy(int x,int y)
{
    //system("cls");
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    //getch();
}

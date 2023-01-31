#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
int globe;
struct Student_info
{
    char student_name[20];
    unsigned int student_roll;
    double student_score;
};
typedef struct Student_info INFO;
void main()
{
    int n=0;
    INFO *info=NULL;
    int count_question,count_marks;
    char choice;
    char player_name[20];
    unsigned int player_roll;
    time_t initial_time,final_time;
    int num_of_ques[6];
    int i,w,k;
    double score;
    char head[100]="  WELCOME TO ONLINE TEST PROGRAM  ";
    system("cls");
    /*MAINHOME*/
    Mainhome:
    system("cls");
    gotoxy(40,0);
    system("color 20");
    printf("__________________________________");
    gotoxy(40,3);
    for(k=0;k<strlen(head);k++)
    {
        system("color 20");
        system("color B");
        printf("%c",head[k]);
        Sleep(80);
    }
    gotoxy(40,6);
    printf("__________________________________");
    system("color B");
    gotoxy(40,8);
    printf("----------------------------------");
    gotoxy(40,9);
    printf("      Enter 'S' to start Quiz      ");
    gotoxy(40,10);
    printf("   Enter 'V' to view High score    ");
    gotoxy(40,11);
    printf("       Enter 'H' for Help          ");
    gotoxy(40,12);
    printf("        Enter 'O' to search          ");
    gotoxy(40,13);
    printf("        Enter 'Q' to quit          ");
    gotoxy(40,14);
    printf("----------------------------------");
    choice=toupper(getch());
    if(choice=='V')
    {
        display_score();
        goto Mainhome;
    }
    else if(choice=='O')
    {
        //printf("\n%d  %d\n",n,globe);
        //Sleep(2000);
        int temp=0;
        system("cls");
        unsigned int new_roll;
        printf("Input The Roll You Want To Search >>");
        scanf("%d",&new_roll);
        char new_temp[15]="Searching...";
        puts(new_temp);
        for(k=0;k<10;k++)
        {
            printf("%c",220);
            Sleep(100);
        }
        int j;
        char temp2;
        FILE *fp;
        fp=fopen("Search file.txt","r");
        for(j=0;j<globe;j++)
        {
            if(j==0)
            {
                fgets(info[j].student_name,20,fp);
                fscanf(fp,"%d",&info[j].student_roll);
                fscanf(fp,"lf",&info[j].student_score);
            }
            else
            {
                fscanf(fp,"%c",&temp2);
                fgets(info[j].student_name,20,fp);
                //fscanf(fp,"%s",&info[j].student_name);
                fscanf(fp,"%d",&info[j].student_roll);
                fscanf(fp,"lf",&info[j].student_score);
            }
            if(new_roll==info[j].student_roll)
            {
                temp++;
                printf("\nMatch Found!\n");
                print_info2(info[j]);
            }
            else
            {
                temp=temp+0;
            }
        }
        fclose(fp);
        if(temp==0)
        {
            printf("Invalid ID!\n");
        }
        Sleep(3000);
        goto Mainhome;
    }
    else if(choice=='Q')
    {
        exit(1);
    }
    else if(choice=='H')
    {
        help();
        goto Mainhome;
    }
    else if(choice=='S')
    {
        Home:
        system("cls");
        n++;
        globe=n;
        //printf("%d",n);
        info=realloc(info,n*sizeof(INFO));
        system("cls");
        gotoxy(40,8);
        printf("Enter Your Name >>");
        if(n==1)
        {
            //getchar();
            gets(player_name);
        }//getchar();
        else
        {
            getchar();
            gets(player_name);
        }
        strcpy(info[n-1].student_name,player_name);
        gotoxy(40,12);
        printf("Enter Your Roll number >>");
        scanf("%d", &player_roll);
        info[n-1].student_roll=player_roll;
        /*HOME*/
        //Home:
        system("cls");
        initial_time=time(NULL);
        count_question=count_marks=0;
        i=1;
        /*START*/
        Start:;
        /*TO RANDOMIZE DIFFERENT NUMBERS*/
        int r;
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
        printf("\n%d.",i);
        /*PASSING THE RANDOM NUMBER WE GOT THROUGH SWITCH-CASE*/
        switch(r)
        {
        /*QUESTION 1*/
        case 1:
            {
               // printf("\n");
                FILE *fpointer1;
                fpointer1=fopen("Question1.txt","r");

                char singleline1[150];
                while(fgets(singleline1,150,fpointer1)!=NULL)
                {
                    //puts(singleline1);
                    printf("%s",singleline1);
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
            //printf("\n");
            FILE *fpointer2;
            fpointer2=fopen("Question2.txt","r");

            char singleline2[150];
            while(fgets(singleline2,150,fpointer2)!=NULL)
            {
                //puts(singleline2);
                printf("%s",singleline2);
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
            //printf("\n");
            FILE *fpointer3;
            fpointer3=fopen("Question3.txt","r");

            char singleline3[150];
            while(fgets(singleline3,150,fpointer3)!=NULL)
            {
                //puts(singleline3);
                printf("%s",singleline3);
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
            //printf("\n");
            FILE *fpointer4;
            fpointer4=fopen("Question4.txt","r");

            char singleline4[150];
            while(fgets(singleline4,150,fpointer4)!=NULL)
            {
                //puts(singleline4);
                printf("%s",singleline4);
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
            //printf("\n");
            FILE *fpointer5;
            fpointer5=fopen("Question5.txt","r");

            char singleline5[150];
            while(fgets(singleline5,150,fpointer5)!=NULL)
            {
                //puts(singleline5);
                printf("%s",singleline5);
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
            //printf("\n");
            FILE *fpointer6;
            fpointer6=fopen("Question6.txt","r");

            char singleline6[150];
            while(fgets(singleline6,150,fpointer6)!=NULL)
            {
                //puts(singleline6);
                printf("%s",singleline6);
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
            //printf("\n");
            FILE *fpointer7;
            fpointer7=fopen("Question7.txt","r");

            char singleline7[150];
            while(fgets(singleline7,150,fpointer7)!=NULL)
            {
                //puts(singleline7);
                printf("%s",singleline7);
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
            //printf("\n");
            FILE *fpointer8;
            fpointer8=fopen("Question8.txt","r");

            char singleline8[150];
            while(fgets(singleline8,150,fpointer8)!=NULL)
            {
                //puts(singleline8);
                printf("%s",singleline8);
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
            //printf("\n");
            FILE *fpointer9;
            fpointer9=fopen("Question9.txt","r");

            char singleline9[150];
            while(fgets(singleline9,150,fpointer9)!=NULL)
            {
                //puts(singleline9);
                printf("%s",singleline9);
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
            //printf("\n");
            FILE *fpointer10;
            fpointer10=fopen("Question10.txt","r");

            char singleline10[150];
            while(fgets(singleline10,150,fpointer10)!=NULL)
            {
                //puts(singleline10);
                printf("%s",singleline10);
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
        case 11:
        {
            //printf("\n");
            FILE *fpointer11;
            fpointer11=fopen("Question11.txt","r");

            char singleline11[150];
            while(fgets(singleline11,150,fpointer11)!=NULL)
            {
                //puts(singleline11);
                printf("%s",singleline11);
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
                printf("\nWrong!!! The correct answer is A. 5 5 5 5 5");
                break;
            }
        }
        /*QUESTION 12*/
        case 12:
        {
            //printf("\n");
            FILE *fpointer12;
            fpointer12=fopen("Question12.txt","r");

            char singleline12[150];
            while(fgets(singleline12,150,fpointer12)!=NULL)
            {
                //puts(singleline12);
                printf("%s",singleline12);
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
                printf("\nWrong!!! The correct answer is A.\na\nb c\nd e f");
                break;
            }
        }
        /*QUESTION 13*/
        case 13:
        {
            //printf("\n");
            FILE *fpointer13;
            fpointer13=fopen("Question13.txt","r");

            char singleline13[150];
            while(fgets(singleline13,150,fpointer13)!=NULL)
            {
                //puts(singleline13);
                printf("%s",singleline13);
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
                printf("\nWrong!!! The correct answer is B. 6\n");
                break;
            }
        }
        /*QUESTION 14*/
        case 14:
        {
            //printf("\n");
            FILE *fpointer14;
            fpointer14=fopen("Question14.txt","r");

            char singleline14[150];
            while(fgets(singleline14,150,fpointer14)!=NULL)
            {
                //puts(singleline14);
                printf("%s",singleline14);
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
                printf("\nWrong!!! The correct answer is B. 2\n");
                break;
            }
        }
        /*QUESTION 15*/
        case 15:
        {
            //printf("\n");
            FILE *fpointer15;
            fpointer15=fopen("Question15.txt","r");

            char singleline15[150];
            while(fgets(singleline15,150,fpointer15)!=NULL)
            {
                //puts(singleline15);
                printf("%s",singleline15);
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
                printf("\nWrong!!! The correct answer is B.\n");
                break;
            }
        }
        /*QUESTION 16*/
        case 16:
        {
            //printf("\n");
            FILE *fpointer16;
            fpointer16=fopen("Question16.txt","r");

            char singleline16[150];
            while(fgets(singleline16,150,fpointer16)!=NULL)
            {
                //puts(singleline16);
                printf("%s",singleline16);
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
                printf("\nWrong!!! The correct answer is C.  *\n **\n***\n");
                break;
            }
        }
        /*QUESTION 17*/
        case 17:
        {
            //printf("\n");
            FILE *fpointer17;
            fpointer17=fopen("Question17.txt","r");

            char singleline17[150];
            while(fgets(singleline17,150,fpointer17)!=NULL)
            {
                //puts(singleline17);
                printf("%s",singleline17);
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
                printf("\nWrong!!! The correct answer is A.\n");
                break;
            }
        }
        /*QUESTION 18*/
        case 18:
        {
            //printf("\n");
            FILE *fpointer18;
            fpointer18=fopen("Question18.txt","r");

            char singleline18[150];
            while(fgets(singleline18,150,fpointer18)!=NULL)
            {
                //puts(singleline18);
                printf("%s",singleline18);
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
                printf("\nWrong!!! The correct answer is A.");
                break;
            }
        }
        /*QUESTION 19*/
        case 19:
        {
            //printf("\n");
            FILE *fpointer19;
            fpointer19=fopen("Question19.txt","r");

            char singleline19[150];
            while(fgets(singleline19,150,fpointer19)!=NULL)
            {
                //puts(singleline19);
                printf("%s",singleline19);
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
                printf("\nWrong!!! The correct answer is D. 1010\n");
                break;
            }
        }
        /*QUESTION 20*/
        case 20:
        {
            //printf("\n");
            FILE *fpointer20;
            fpointer20=fopen("Question20.txt","r");

            char singleline20[150];
            while(fgets(singleline20,150,fpointer20)!=NULL)
            {
                //puts(singleline20);
                printf("%s",singleline20);
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
                printf("\nWrong!!! The correct answer is C.hEllO dANknEs$ My 0ld FRIENd.\n");
                break;
            }
        }
        /*QUESTION 21*/
        case 21:
        {
            FILE *fpointer21;
            fpointer21=fopen("new1.txt","r");

            char singleline21[150];
            while(fgets(singleline21,150,fpointer21)!=NULL)
            {
                printf("%s",singleline21);
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
                printf("\nWrong!!! The correct answer is B.Hexadecimal System");
                break;
            }

        }
        /*QUESTION 22*/
        case 22:
        {
            FILE *fpointer22;
            fpointer22=fopen("Question22.txt","r");
            char singleline22[150];
            while(fgets(singleline22,150,fpointer22)!=NULL)
            {
                printf("%s",singleline22);
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
                printf("\nWrong!!! The correct answer is B.& operator");
                break;
            }

        }
        /*QUESTION 23*/
        case 23:
        {
            FILE *fpointer23;
            fpointer23=fopen("Question23.txt","r");

            char singleline23[150];
            while(fgets(singleline23,150,fpointer23)!=NULL)
            {
                printf("%s",singleline23);
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
        //end bracket of switch
    }
        i++;
        if(i<=5)
        {
            Sleep(2000);
            system("cls");
            goto Start;
        }
        final_time=time(NULL);
        score=(double)count_marks/count_question*100-difftime(final_time,initial_time)/10;
        if(score<0)
        {
            score=0;
        }
        info[n-1].student_score=score;
        printf("\n\nYour Score: %g",score);
        /*MARKS WIZE RESULT SHOW*/
        //system("cls");
        puts("\n\nNEXT PLAY?(Y/N)");
        if (toupper(getch())=='Y')
        {
            file_print(info[n-1]);
            write_score(player_roll,player_name,score);
            High_score(player_roll,player_name,score);
            goto Home;
        }
        else
        {
            print_info(info[n-1]);
            file_print(info[n-1]);
            write_score(player_roll,player_name,score);
            High_score(player_roll,player_name,score);
            goto Mainhome;
        }

    }//end bracket of else if(=='S')//
    free(info);
    //getch();
}//end bracket of void main//
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void write_score(unsigned int roll,char name[20],double score)
{
    FILE *fp;
    fp=fopen("Score.txt", "a");
    fprintf(fp,"Name:%s\n", name);
    fprintf(fp,"Roll:%d\n", roll);
    fprintf(fp,"Marks:%g", score);
    fprintf(fp,"\n");
    fclose(fp);
}
void High_score(unsigned int roll,char name[20],double score)
{
    char file_name[20];
    double file_score;
    unsigned int file_roll;
    FILE *fp;
    fp=fopen("High_score.txt","r");
    fgets(file_name,20,fp);
    fscanf(fp,"%d",&file_roll);
    fscanf(fp,"%lf",&file_score);
    if(score>file_score)
    {
        fclose(fp);
        fp=fopen("High_score.txt","w");
        fprintf(fp,"%s\n",name);
        fprintf(fp,"%d\n",roll);
        fprintf(fp,"%g",score);
        fclose(fp);
    }
    else
    {
        fclose(fp);
    }
}
void display_score()
{
    system("cls");
    char name[20];
    unsigned int roll;
    double score;
    FILE *fp;
    fp=fopen("High_score.txt","r");
    fgets(name,20,fp);
    fscanf(fp,"%d",&roll);
    fscanf(fp,"%lf",&score);
    gotoxy(40,2);
    printf("Name:%s",name);
    gotoxy(40,4);
    printf("Roll:%d\n",roll);
    gotoxy(40,6);
    printf("Marks:%g",score);
    fclose(fp);
    getch();
}
void help()
{
    system("cls");
    system("color 71");
    FILE *fp;
    char single_line[100];
    fp=fopen("Help.txt","r");
    while(fgets(single_line,100,fp)!=NULL)
    {
        puts(single_line);
    }
    getch();
}
void print_info(INFO t)
{
    printf("Student Name:%s\n",t.student_name);
    printf("ID no.      :%d\n",t.student_roll);
    printf("Score       :%.2lf",t.student_score);
    getchar();
}
void file_print(INFO t)
{
    FILE *fp;
    fp=fopen("Search file.txt","a");
    fprintf(fp,"%s\n",t.student_name);
    fprintf(fp,"%d\n",t.student_roll);
    fprintf(fp,"%.2lf\n",t.student_score);
    fclose(fp);
}
void print_info2(INFO t)
{
    printf("ID no.      :%d\n",t.student_roll);
    printf("Score       :%.2lf",t.student_score);
    getchar();
}



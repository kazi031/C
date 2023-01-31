#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student_info
{
    unsigned int roll;
    char name[20];
    int age;
    int marks;
};
typedef struct student_info INFO;
void print_info(INFO t)
{
    FILE *fp;
    fp=fopen("database.txt","w");
    //fprintf(fp,%d\n,t.roll);
    //fprintf(fp,%s,t.name);
    fprintf(fp,"Roll no:%d", t.roll);
    fprintf(fp,"\nSTD name:%s",t.name);
    //fputs(t.name,fp);
    fprintf(fp,"Age:%d\n",t.age);
    fprintf(fp,"Obtained marks:%d\n", t.marks);
    fclose(fp);
}
void main()
{
    INFO info[3]/*,info2,info3,info4,info5,info6*/;
    int i,roll,age,marks;
    char name1[20];
    for(i=0;i<=2;i++)
    {
        printf("Input Your Roll Number:");
        scanf("%d", &roll);
        getchar();
        printf("Input Your Name:");
        gets(name1);
        printf("Input Your Age:");
        scanf("%d", &age);
        printf("Input Your Marks:");
        scanf("%d", &marks);
        info[i].roll=roll;
        strcpy(info[i].name,name1);
        info[i].age=age;
        info[i].marks=marks;
        print_info(info[i]);
    }
    /*info1.roll=201814022;
    strcpy(info1.name,"Kazi Rafid Raiyan");
    info1.age=20;
    info1.marks=12;
    print_info(info1);
    info2.roll=201814021;
    strcpy(info2.name,"Rokonuzzaman Reza");
    info2.age=20;
    info1.marks=16;
    print_info(info2);*/
    //SEARCH INFO//
    /*int new_roll;
    printf("Please enter a roll number>>");
    scanf("%d", &new_roll);
    int k;
    for(k=0;k<3;k++)
    {

        if(info[k].roll==new_roll)
        {
            print_info(info[k]);
        }
    }*/
    getch();
}

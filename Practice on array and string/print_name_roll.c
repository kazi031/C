#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student_info
{
    unsigned int roll;
    char name[20];
    int marks;
};
typedef struct student_info INFO;
void print_info(INFO t)
{
    printf("Roll no:%d", t.roll);
    printf("\nSTD name:");
    puts(t.name);
    printf("Obtained marks:%d", t.marks);
}
void main()
{
    INFO info1;
    info1.roll=201814022;
    //info1.name[]="Kazi Rafid Raiyan";
    strcpy(info1.name,"Kazi Rafid Raiyan");
    info1.marks=12;
    print_info(info1);
    getch();
}

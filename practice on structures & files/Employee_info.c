#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Address
{
    int house_number;
    int street_number;
    char city[50];
};
typedef struct Address ADDRESS;

struct Employee_info
{
    char name[20];
    int age;
    ADDRESS present_address;
};
typedef struct Employee_info INFO;

void main()
{
    int i;
    INFO emp1[3];
    for(i=0;i<3;i++)
    {
        printf("%d.",i+1);
        char employee_name[20];
        printf("Name>>");
        gets(employee_name);
        strcpy(emp1[i].name,employee_name);
        printf("Age>>");
        scanf("%d",&emp1[i].age);
        printf("Address no.>>");
        scanf("%d",&emp1[i].present_address.house_number);
        printf("Street no.>>");
        scanf("%d",&emp1[i].present_address.street_number);
        char employee_city[20];
        getchar();
        gets(employee_city);
        strcpy(emp1[i].present_address.city,employee_city);
        printf("%s", emp1[i].name);
        printf("\n%d", emp1[i].age);
        printf("\n%d", emp1[i].present_address.house_number);
        printf(",%d", emp1[i].present_address.street_number);
        printf(",%s",emp1[i].present_address.city);
        file_info(emp1[i]);
        getch();
    }
}
void file_info(INFO t)
{
    FILE *fpointer;
    fpointer=fopen("Info.txt", "a");
    fprintf(fpointer,"Age:%d\n",t.age);
    fprintf(fpointer,"Name:%s\n",t.name);
    fprintf(fpointer,"Present Address:House %d,Street %d",t.present_address.house_number,t.present_address.house_number);
    fprintf(fpointer,",%s",t.present_address.city);
    fprintf(fpointer,"\n");
    fclose(fpointer);
}

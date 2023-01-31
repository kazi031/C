#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include <windows.h>
struct Std_info
{
    char name[20];
    char roll[10];
    char age[6];
    char marks[6];
    char present_address[50];
};
typedef struct Std_info INFO;
int main()
{
    int n=0;
    int x;
    INFO *fp=NULL;
    while(scanf("%d",&x),x!=-1)
    {
        if(x==1)
        {
            n=n+1;
            fp=realloc(fp,n*sizeof(INFO));
            getchar();
            printf("Enter Student Name  :");
            char name_cpy[20],roll_cpy[10],x[2][6],road_cpy[20],area_cpy[20],city_cpy[10],present_adress[50];
            gets(name_cpy);
            strcpy(fp[n-1].name,name_cpy);
            printf("Enter Student ID    :");
            gets(roll_cpy);
            strcpy(fp[n-1].roll,roll_cpy);
            printf("Enter Student age   :");
            gets(x[0]);
            strcpy(fp[n-1].age,x[0]);
            printf("Enter Student marks :");
            gets(x[1]);
            strcpy(fp[n-1].marks,x[1]);
            printf("Enter Student Address >> \n");
            gets(present_adress);
            strcpy(fp[n-1].present_address,present_adress);
        }
        else if(x==2)
        {
            int i;
            for(i=0;i<n;i++)
            {
                print_info(fp[i]);
            }
        }
        else if(x==3)
        {
           n=n-1;
           int i,index;
           printf("Enter The Index You Want To Erase >>");
           scanf("%d",&index);
           for(i=index;i<n;i++)
           {
               fp[i]=fp[i+1];
           }
           fp=realloc(fp,n*sizeof(INFO));
        }
        else if(x==4)
        {
            int i,index;
            printf("Enter The Index You Want To Edit  >>");
            scanf("%d",&index);
            if(index<n)
            {
                getchar();
                printf("Enter Student Name  :");
                char name_cpy[20],roll_cpy[10],x[6],road_cpy[20],area_cpy[20],city_cpy[10],present_address[50];
                gets(name_cpy);
                strcpy(fp[index].name,name_cpy);
                printf("Enter Student ID    :");
                gets(roll_cpy);
                strcpy(fp[index].roll,roll_cpy);
                printf("Enter Student age   :");
                gets(x);
                strcpy(fp[index].age,x);
                printf("Enter Student marks :");
                gets(x);
                strcpy(fp[index].marks,x);
                printf("Enter Student Address >> \n");
                gets(present_address);
                strcpy(fp[index].present_address,present_address);
            }
        }
        /*save data*/
        else if(x==5)
        {
            int i;
            FILE *fpointer=fopen("database.txt","w");
            fprintf(fpointer,"%d\n",n);
            for(i=0;i<n;i++)
            {
                fprintf(fpointer,"%s\n",fp[i].name);
                fprintf(fpointer,"%s\n",fp[i].roll);
                fprintf(fpointer,"%s\n",fp[i].age);
                fprintf(fpointer,"%s\n",fp[i].marks);
                fprintf(fpointer,"%s\n",fp[i].present_address);
            }
            fclose(fpointer);
        }
        /*Search option*/
        else if(x==6)
        {
            INFO *fp1=NULL;
            int i,k,num;
            char roll_no[10];
            printf("Enter Your Desired Roll No >>");
            scanf("%s",roll_no);
            for(k=0;k<40;k++)
            {
                system("color 2");
                printf("%c",220);
                Sleep(100);
            }
            system("cls");
            FILE *fpointer=fopen("database.txt","r");
            fscanf(fpointer,"%d",&num);
            fp1=realloc(fp1,num*sizeof(INFO));
            for(i=0;i<num;i++)
            {
                char temp;
                if(i==0)
                {
                    fscanf(fpointer,"%c",&temp);
                    fgets(fp1[i].name,20,fpointer);
                    fscanf(fpointer,"%s",fp1[i].roll);
                    fscanf(fpointer,"%s",fp1[i].age);
                    fscanf(fpointer,"%s",fp1[i].marks);
                    fscanf(fpointer,"%c",&temp);
                    fgets(fp1[i].present_address,50,fpointer);
                }
                else
                {
                    fgets(fp1[i].name,20,fpointer);
                    fscanf(fpointer,"%s",fp1[i].roll);
                    fscanf(fpointer,"%s",fp1[i].age);
                    fscanf(fpointer,"%s",fp1[i].marks);
                    fscanf(fpointer,"%c",&temp);
                    fgets(fp1[i].present_address,50,fpointer);
                }
                if(strcmp(fp1[i].roll,roll_no)==0)
                {
                    printf("\nMatch Found!\n");
                    search_print_info(fp1[i]);
                }
            }
            fclose(fpointer);
        }
    }
    free(fp);
}
void print_info(INFO t)
{
    printf("Student Name   :");
    printf("%s\n",t.name);
    printf("Student ID     :");
    printf("%s\n",t.roll);
    printf("Student Age    :");
    printf("%s\n",t.age);
    printf("Student Marks  :");
    printf("%s\n",t.marks);
    printf("STUDENT ADDRESS >>\n");
    printf("%s\n",t.present_address);
}
void search_print_info(INFO t)
{
    printf("\nStudent Name   :");
    printf("%s",t.name);
    printf("Student ID     :");
    printf("%s\n",t.roll);
    printf("Student Age    :");
    printf("%s\n",t.age);
    printf("Student Marks  :");
    printf("%s\n",t.marks);
    printf("STUDENT ADDRESS >>\n");
    printf("%s",t.present_address);
}

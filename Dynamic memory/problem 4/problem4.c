#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Note_book
{
    char name[20];
    unsigned int id;
    int marks;
};
typedef struct Note_book NOTEBOOK;

int main()
{
    int n=0,k;
    NOTEBOOK *info=NULL;
    while(scanf("%d",&k),k!=-1)
    {
        /*ADDING AN INFO*/
        if(k==1)
        {
            char temp;
            n++;
            info=realloc(info,n*sizeof(NOTEBOOK));
            char name[20];
            printf("Enter Student name  >>");
            getchar();
            gets(name);
            strcpy(info[n-1].name,name);
            printf("Enter Student id    >>");
            scanf("%d",&info[n-1].id);
            printf("Enter Student marks >>");
            scanf("%d", &info[n-1].marks);
        }
        /*DISPLAYING ALL INFOS*/
        else if(k==2)
        {
            int i;
            for(i=0;i<n;i++)
            {
                print_info(info[i]);
            }
        }
        /*EDIT AN EXISTING RECORD*/
        else if(k==3)
        {
            int index;
            printf("Enter the Index of the info you want to edit >>");
            scanf("%d", &index);
            getchar();
            if(index<0||index>=n)
            {
                printf("Invalid Index");
            }
            else
            {
                print_info(info[index]);
                printf("Press enter to edit this index >>");
                getchar();
                char name[20];
                printf("Enter Student name >>");
                gets(name);
                strcpy(info[index].name,name);
                printf("Enter Student id >>");
                scanf("%d",&info[index].id);
                printf("Enter Student marks >>");
                scanf("%d", &info[index].marks);
                printf("\nSAVED!\n");
            }

        }
        /*DELETE AN EXISTING RECORD*/
        else if(k==4)
        {
            int index,i;
            printf("Enter the Index of the info you want to erase >>");
            scanf("%d", &index);
            if(index<0||index>=n)
            {
                printf("Invalid Index");
            }
            else
            {
                for(i=index;i<=n;i++)
                {
                    info[index]=info[index+1];
                }
                n--;
                realloc(info,n*sizeof(NOTEBOOK));
            }

        }
        else if(k==5)
        {
            int i;
            FILE *fp;
            fp=fopen("Student_record.txt","w");
            for(i=0;i<n;i++)
            {
                fprintf(fp,"%s\n",info[i].name);
                fprintf(fp,"%d\n",info[i].id);
                fprintf(fp,"%d\n",info[i].marks);
            }
            fclose(fp);
            //SEARCH OPTION//
            int count=0;
            char temp;
            unsigned int new_roll;
            printf("Enter your desired id >>");
            scanf("%d",&new_roll);
            fp=fopen("Student_record.txt","r");
            for(i=0;i<n;i++)
            {
                if(i==0)
                {
                    fgets(info[i].name,20,fp);
                    fscanf(fp,"%d",&info[i].id);
                    fscanf(fp,"%d",&info[i].marks);
                    if(info[i].id==new_roll)
                    {
                        count++;
                        printf("\nMatch found!\n");
                        print_info_2(info[0]);

                    }
                    else
                    {
                        count=count+0;
                    }
                }
                else
                {
                    fscanf(fp,"%c",&temp);
                    fgets(info[i].name,20,fp);
                    fscanf(fp,"%d",&info[i].id);
                    fscanf(fp,"%d",&info[i].marks);
                    if(info[i].id==new_roll)
                    {
                        count++;
                        printf("\nMatch found!\n");
                        print_info_2(info[i]);

                    }
                    else
                    {
                        count=count+0;
                    }
                }
            }
            fclose(fp);
            if(count==0)
            {
                printf("Invalid ID!\n");
                printf("Enter 5 to Check again ");
            }
        }
    }
    free(info);
    return 0;
}
void print_info(NOTEBOOK x)
{
    printf("Student's Name:%s\n",x.name);
    printf("Student's Id  :%d\n",x.id);
    printf("Marks         :%d\n",x.marks);
}
void print_info_2(NOTEBOOK x)
{
    printf("Student's Name:%s",x.name);
    printf("Student's Id  :%d\n",x.id);
    printf("Marks         :%d\n",x.marks);
}

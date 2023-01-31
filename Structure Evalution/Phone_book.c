#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Info
{
    char name[20];
    char phone_number[20];
};
typedef struct Info INFO;
void main()
{
    INFO phone_book[3];
    int i;
    char user_name[20];
    char user_phone_number[20];
    for(i=0;i<3;i++)
    {
        printf("Enter User Name:");
        gets(user_name);
        strcpy(phone_book[i].name,user_name);
        //getchar();
        printf("Enter User Phone Number:");
        gets(user_phone_number);
        strcpy(phone_book[i].phone_number,user_phone_number);
        //print_info(phone_book[i]);
        print_file(phone_book[i]);
        printf("\n");
    }
    file_read();
    search_info();

}
/*void print_info(INFO t)
{
    printf("Name:%s\n",t.name);
    printf("Phone Number:%s",t.phone_number);
}*/
void print_file(INFO x)
{
    FILE *fp;
    fp=fopen("phonebook.txt","a");
    fprintf(fp,"%s\n",x.name);
    fprintf(fp,"%s\n",x.phone_number);
    fclose(fp);
}
void file_read()
{
    INFO z[3];
    int i;
    FILE *fp;
    fp=fopen("phonebook.txt","r");
    for(i=0;i<3;i++)
    {
        //fp=fopen("phonebook.txt","r");
        fgets(z[i].name,20,fp);
        fgets(z[i].phone_number,20,fp);
        //fclose(fp);
    }
    fclose(fp);
    printf("%s",z[0].name);
    printf("%s",z[0].phone_number);
    //puts(z[0].phone_number);
}
void search_info()
{
    INFO k[3];
    int i,count=0;
    FILE *fp;
    char new_number[20];
    printf("Enter your desired number:");
    gets(new_number);
    fp=fopen("phonebook.txt","r");
    for(i=0;i<3;i++)
    {
        fscanf(fp,"%s",k[i].name);
        fscanf(fp,"%s",k[i].phone_number);
        //fgets(k[i].name,20,fp);
        //fgets(k[i].phone_number,20,fp);
        if(strcmp(k[i].phone_number,new_number)==0)
        {
            count++;
            printf("%s\n",k[i].name);
            printf("%s",k[i].phone_number);
        }
        else
        {
            count=count+0;
        }
     }
     if(count==0)
     {
         printf("Contact doesn't exist");
     }
     fclose(fp);
}


#include<stdio.h>
int main()
{
    int i;
    char roll_no[10];
    printf("Enter Your Desired Roll No.");
    scanf("%s",roll_no);
    FILE *fpointer=fopen("database.txt","r");
    for(i=0;i<1;i++)
    {
        char temp1,temp2,temp3,temp4;
        fscanf(fpointer,"%s",fp[i].name);
        fscanf(fpointer,"%s",fp[i].roll);
        fscanf(fpointer,"%s",fp[i].age);
        fscanf(fpointer,"%s",fp[i].marks);
        fscanf(fpointer,"%s%c%s%c%s%c%s%c%s",fp[i].present_address.house_no,temp1,fp[i].present_address.road,temp2,fp[i].present_address.area,temp3,fp[i].present_address.city,temp4,fp[i].present_address.post_code);
        if(strcmp(fp[i].roll,roll_no)==1)
        {
            print_info(fp[i]);
        }
    }
    fclose(fpointer);
}

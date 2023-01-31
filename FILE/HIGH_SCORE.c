#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name1[20];
    unsigned int roll1;
    double score1;
    gets(name1);
    scanf("%d", &roll1);
    scanf("%lf", &score1);
    high_score(roll1,name1,score1);
    return 0;
}
void high_score(unsigned int roll,char name[20],double score)
{
    /*puts(name);
    printf("%d\n", roll);
    printf("%g",score);
    /*char name[20];
    float score;
    unsigned int roll;
    gets(name);
    scanf("%d", &roll);
    scanf("%f", &score);*/
    char file_name[20];
    float file_score;
    unsigned int file_roll;
    FILE *fp;
    fp=fopen("score2.txt","r");
    fgets(file_name,20,fp);
    fscanf(fp,"%d",&file_roll);
    fscanf(fp,"%f",&file_score);
    puts(file_name);
    printf("%g\n", file_score);
    printf("%d", file_roll);
    if(score>file_score)
    {
        fclose(fp);
        fp=fopen("score2.txt","w");
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

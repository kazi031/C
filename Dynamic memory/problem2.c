#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char first_name[10];
    gets(first_name);
    char middle_name[10];
    gets(middle_name);
    char last_name[10];
    gets(last_name);
    int len1=strlen(first_name);
    int len2=strlen(middle_name);
    int len3=strlen(last_name);
    int total_length=len1+len2+len3;
    char *string=malloc((total_length+2)*sizeof(char));
    strcpy(string,first_name);
    strcat(string," ");
    strcat(string,middle_name);
    strcat(string," ");
    strcat(string,last_name);
    puts(string);
    free(string);
}

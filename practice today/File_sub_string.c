#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","r");
    char string[100];
    char sub_string[10];
    printf("Enter a word you want to find >>");
    gets(sub_string);
    //scanf("%s",sub_string);
    int y;
    //char word[10];
    /*printf("Enter the word you want to search >>");
    scanf("%s",word);*/
    int total=0;
    while(fgets(string,100,fp))
    {
         y=check_string(string,sub_string);
         total=total+y;
    }
    printf("%s was found %d times in the file.",sub_string,total);
    //printf("%d ",y);
    fclose(fp);
    return 0;
}
int check_string(char string[],char sub_string[])
{
    //puts(string);
    strlwr(string);
    char new_string[10];

    unsigned short int count;
    //printf("Enter a word >>");
    //scanf("%s",string);

    unsigned short int length;
    length=strlen(string);
    unsigned short int i;
    count=0;
    unsigned short int sub_string_length;
    unsigned short int to;
    unsigned short int j;
    for(i=0;i<length;i++)
    {
        if(string[i]==sub_string[0])
        {
            sub_string_length=strlen(sub_string);
            to=i+sub_string_length;
            unsigned short int count2=0;
            for(j=i;j<=to;j++)
            {
                if(j!=to)
                {
                    new_string[count2]=string[j];
                    count2++;
                }
                else
                {
                    new_string[count2]='\0';
                }
            }
            if((strcmp(sub_string,new_string))==0)
            {
                count++;
            }
        }
    }
    return count;
    /*if(count>0)
    {
        printf("%d numbers of substring found",count);
    }
    else
    {
        printf("No substrings found");
    }*/
}





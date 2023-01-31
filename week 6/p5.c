#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    scanf("%d%d", &x,&y);
    int count=0;
    for(z=1;z<=(2*y);z++)
    {
        if((z%x==0)&&(z%y==0))
        {
            printf("%d", z);
            count++;
        }
    }
    if(count==0)
    {
        printf("%d", (x*y));
    }
    return 0;
}

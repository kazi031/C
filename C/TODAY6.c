#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,a,b;
float y;
scanf("%d%d%d", &n,&a,&b);
y=(a+b)*((a*cos(n*3.1416/180))+(b*sin(n*3.1416/180)));
printf("%f",y);
return 0;
}

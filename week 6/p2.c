#include<stdio.h>
int main()
{
  int n=153,rem,i;
  int total=0;
  //scanf("%d", &n);
  while(n!=0)
  {
      rem=n%10;
      n=n/10;
      int c=1;
      for(i=1;i<=3;i++)
      {
          c=c*rem;
      }
      total=total+c;
  }
  printf("%d", total);
  return 0;
}

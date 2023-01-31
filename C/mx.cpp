#include<stdio.h>
int main()
{
    int x;
    double z,y;
    scanf("%d",&x);
    scanf("%lf",&y);
    if(y>x&&y>0)
    { if(x%5==0)
      {
        if(x<=2000&&y<=2000)
        {
            z=y-x-.5;
            printf("%.2f\n",z);
        }
      }
        else{printf("%.2f\n",y);}
    }
    else{printf("%.2f\n",y);}
    return 0;
}

#include <stdio.h>

int main()
{
    double a,b;
    scanf("%lf",&a);
    getchar();
    scanf("%lf",&b);
    getchar();
    printf("sum of doubles=%lf\n",a + b);
    printf("difference of doubles=%lf\n",a - b);
    printf ("square=%lf\n",a*a);

    int x,y;
    scanf("%d",&x);
    getchar();
    scanf("%d",&y);
    getchar();
    printf("sum of integers=%d\n",x+y);
    printf("product of integers=%d\n",x*y);

    char w,e;
    scanf("%c",&w);
    getchar();
    scanf("%c",&e);
    getchar();
    printf ("sum of chars=%d\n",w+e );
    printf ("product of chars=%d\n",w*e);
    printf("sum of chars=%c\n",w+e);
    printf("product of chars=%c\n",w*e);


    return 0;
}

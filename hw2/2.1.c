#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,d,h;
    printf("Enter number of weeks");
    scanf("%d",&w);
    printf("Enter number of days");
    scanf("%d",&d);
    printf("Enter number of hours");
    scanf("%d",&h);
    float totalhours;
    totalhours=w*7*24+d*24+h;
    printf("Total number of hours is %f\n",totalhours);
    return 0;
}

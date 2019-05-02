/* JTSK-320111
Drishti Maharjan
d.maharjan@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, lower, upper, stepsize;


    const double pi= 3.14159265359;  //value of pi//
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &stepsize);


    for (x = lower; (x >= lower) && (x <= upper); x = x + stepsize) //setting the number of rows//
    {



        printf("%.6f ", x); //column 1: x

        printf("%.6f ", x * x *pi); //column 2: area

        printf("%.6f\n", 2 * pi * x); //column 3: perimeter
    }





    return 0;
}

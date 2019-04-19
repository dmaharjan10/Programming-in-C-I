/*JTSK-320111
4.3.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/*
@brief to_pounds This function converts the units of mass into pounds.
@param kg The parameter represents mass in unit kilograms
@param g The parameter represents mass in unit grams
@return pou It returns the value of mass converted in pounds.
*/
#include <stdio.h>
#include <stdlib.h>

float to_pounds(int kg, int g);

int main()
{
    char line[20];
    int a,b;
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d",&a);
    fgets(line, sizeof(line), stdin);
    sscanf (line, "%d", &b);

    printf("Result of conversion: %f\n",to_pounds(a,b));

    return 0;
}

float to_pounds(int kg, int g)
{
    float pou;
    pou = kg*2.200000 + g*0.002200;
    return pou;
}

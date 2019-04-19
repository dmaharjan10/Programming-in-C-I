/*JTSK-320111
4.6.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/* @brief sum25 This function computes sum of elements in v at position 2 and 5
@param v[] Parameter to represent number of elements in v
@param n parameter to represent number of elements to enter
*/

#include <stdio.h>
#include <stdlib.h>



double sum25(double v[], int n); //prototyping//

int main()
{

    double v[20];
    int n, i=0;

    scanf("%d", &n);



    for (i=0; i<n; i++)
    {

        scanf("%lf", &v[i]);
    }

    sum25(v,n);

    return 0;
}
double sum25(double v[], int n)
{
    if (n<=5)
    {
        printf("One or both positions are invalid\n");
        return -111;
    }
    else
    {
        printf("sum=%lf\n", v[2]+v[5]);

    }
    return 0;
}

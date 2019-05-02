/* JTSK-32011
5.10.c
Drishti Maharjan
d.maharjan@jacobs-university.de

@brief void proddivpowinv This function computes the product, division of two numbers, power of a to b, and inverse of b.
@param a, b The two floats entered from user
@param *prod, *div, *pwr, *invb Pointer pointing to product, division, power and inverse value resepectively
@return nothing.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void proddivpowinv (float a, float b, float *prod, float *div, float *pwr, float *invb); //prototyping

int main()
{
    printf("Enter 2 floats\n");
    float a, b, prod, div, pwr, invb;
    scanf("%f %f", &a, &b); //taking input of two floats//

    proddivpowinv(a, b, &prod, &div, &pwr, &invb); //calling function

    printf("Product of two numbers is %f\n", prod);
    printf("Division of two number is %f\n", div);
    printf("%f to the power %f is %f\n", a,b, pwr);
    printf("Inverse of %f is %f\n", b, invb);

    return 0;
}

void proddivpowinv (float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a,b);
    *invb = 1 / b;
}



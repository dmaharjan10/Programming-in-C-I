/* JTSK-320111
4.7.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/* @brief product The function computes product of a and b
@param a, b Float numbers whose product is required
@return float product of a and b

@brief productbyref This function returns product value by reference
@param *p pointer for the product of a and b
@return void

@brief modifybyref This function adds 3 and 11 respectively to a and b
@param *a, *b pointers to a and b respectively
@return void */

#include <stdio.h>
#include <stdlib.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main()
{
    float x,y,z;
    scanf("%f", &x);
    scanf("%f", &y);


    z = product(x,y);/* Calling product function */
    printf("%f\n", z); /*checking the effect of function product*/


    productbyref(x,y, &z);/* calling productbyref to print product of x and y */
    printf("%f\n", z); /*checking if function product and productbyref has the same effect */


    modifybyref(&x, &y);/*Function passing by reference to print a+3 and b+11 */
    printf("%f, %f\n",x, y);


    return 0;
}

float product(float a, float b)
{

    float p = a * b;
    return p;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;

    /* p is a pointer and has the same value as z in main function*/
    return;
}

void modifybyref(float *a, float *b)
{
    *a = *a + 3.0;
    *b = *b + 11.0;
    /* numbers are added by adding pointer values*/
    return;
}

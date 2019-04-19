/* JTSK-320111
4.5.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief: sum This function computes the sum of the given float numbers
@param sum1 The value of current sum of the numbers entered till date
@param x The float number entered by user
@return total_sum This returns the total sum of the numbers so far

@brief average This function computes the average of numbers entered
@param i The variable used for counting number of iterations
@return avg This returns the average of the numbers.
*/

#include <stdio.h>
#include <stdlib.h>
float sum(float sum1, float x);
float average(float sum1, int i);

int main()
{
    /* not required to read:
     int count;
    printf("Enter the number of floats you want to use (not more than 10)\n");
    scanf("%d", &count); */


    float x;
    int i=0;
    float sum1=0;

   /* not required by question:
   if (count>10)
    {
        printf("You can't enter more than 10 floats. Enter a valid number.\n");
        scanf("%d", &count);

    }

    printf ("Enter %d floats:\n", count); */


    do
    {
        scanf("%f", &x);
        if (x==-99.0)
        {
            break;

        }
        sum1=sum(sum1,x);
        i++;
    }
    while (i< 10);


    printf ("Sum is %f\n", sum1);
    printf ("Average is %f\n", average(sum1, i));


    return 0;
}

float sum(float sum, float x)
{
    float total_sum;
    if (x==-99.0)
    {
        total_sum = sum + x +99.0;
        return total_sum;
    }
    else
        total_sum= sum + x;
    return total_sum;
}

float average(float sum1, int i)
{
    float avg=0;
    avg= sum1/ i;
    return avg;
}



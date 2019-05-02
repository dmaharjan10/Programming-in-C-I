/* JTSK-320111
6.4.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief divby5 This function divides all elements of array by 5 and prints them
@param arr[] Array of numbers entered
@param n The number of integers entered
@return nothing */

#include <stdio.h>
#include <stdlib.h>

void divby5(float *arr, int n); //prototyping

int main()
{
    int i, n;
    float *arr;

    printf("Enter number of integers you want to enter:\n");
    scanf("%d", &n);

    //dynamically allocating memory
    arr = (float*) malloc (sizeof(float)*n);
    if (arr == NULL)
    {
        exit(1);
    }

    //entering array of integers

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }


    printf("Before:\n");

    for (i = 0; i < n; i++) // printing the elements
    {
        printf("%.3f ", arr[i]);

    }
    printf("\n"); // starting new line

    divby5(arr, n);  //calling function
    printf("After:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }

    free(arr); //freeing memory
    return 0;
}

void divby5(float *arr, int n)
{
    int i;
    float div_each;

    for (i = 0; i < n; i++) //printing elements after division
    {
        arr[i] = arr[i]/5;

    }
    printf("\n");
}


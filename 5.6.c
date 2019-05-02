/* JTSK-320111
5.6.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/*
@brief highest This function computes the greatest and second greatest number from the array
@param dyn_array[] array of elements entered
@return nothing
*/


#include <stdio.h>
#include <stdlib.h>
void highest(int *dyn_array, int n);

int main()
{
    int n, *dyn_array, arr_pos;

    //reading elements of numbers for array
    printf("Enter number of elements you want to put in array\n");
    scanf("%d", &n);

    //dynamically allocate memory for array
    dyn_array = (int*) malloc(sizeof(int) * n);
    if (dyn_array== NULL)
    {
        exit(1);
    }
    // entering number of integers we want
    printf("Enter %d integers\n", n);
    for (arr_pos = 0; arr_pos < n; arr_pos++)
    {
        scanf("%d", &dyn_array[arr_pos]);
    }

    //calling the function highest

    highest(dyn_array, n);

    // freeing the memory for dynamic array
    free(dyn_array);

    return 0;
}

void highest(int *dyn_array, int n)
{

    int highest_num = dyn_array[0];
    int second_highest = dyn_array[0];
    int i,j;

    //for getting largest number
    for (i = 0; i < (n-1); i++) // (n-1) comparisons for n numbers
    {
        if (dyn_array[i+1] > highest_num)
        {
            second_highest = dyn_array[i];
            highest_num = dyn_array[i+1];

        }

    }
    printf("Greatest number = %d\n", highest_num);


    // not allowed another loop by question: for getting second largest number
    /* for (j = 0; j < (n-1); j++)
    {
        if (dyn_array[j+1] > second_highest)
        {
            if (dyn_array[j+1] != highest_num) //ignoring the largest number
            {
                second_highest = dyn_array[j+1];
            }
        }
    } */

    printf("Second greatest number = %d\n", second_highest);

}


/*
JTSK-32011
5.9.c
Drishti Maharjan
d.maharjan@jacobs-university.de

@brief prodminmax This computes the product of largest and smallest number in the array
@param arr[] The elements entered
@param n The number of integers entered
@return product The product of the largest and smallest number
*/
#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n);

int main()
{
    int n, *arr, i;
    printf("Enter number of integers you want to enter\n");
    scanf("%d", &n);

    //dynamically allocating memory

    arr = (int*) malloc(sizeof(int)*n);
    //checking array is not empty
    if (arr == NULL)
    {
        exit(1);
    }

    printf("Enter %d integers\n", n);
    //taking input from user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    //calling function and printing returned value
    printf("The product of the largest and smallest element is: %d\n", prodminmax(arr, n));
    //freeing the allocation of memory
    free(arr);
    return 0;
}

int prodminmax(int arr[], int n)
{
    int min_num, max_num, i, product;
    min_num = arr[0];
    max_num = arr[0];
    //loop to check every element
    for (i=0; i < (n-1); i++)
    {
        if (arr[i+1] < min_num)
        {
            min_num = arr[i+1];
        }

        if (arr[i+1] > max_num)
        {
            max_num = arr[i+1];
        }
    }
    product = min_num * max_num;
    return product;

}

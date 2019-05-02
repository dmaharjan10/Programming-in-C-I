/* JT-SK 32011
5.3.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief geometric_mean This function computes the geometric mean of all elements of the array.
@param arr[] The elements in the array
@param num The number of valid elements in the array.
@return It returns the geometric mean of the elements

@brief highest This function finds out the highest element in the array.
@param arr[] The elements in the array
@param num The number of valid elements in the array.
@return It returns the highest element in the array.

@brief smallest This function finds out the smallest element in the array.
@param arr[] The elements in the array
@param num The number of valid elements in the array.
@return It returns the smallest element in the array.

@brief sum This function computes the sum of all elements in the array.
@param arr[] The elements in the array
@param num The number of valid elements in the array
@return It returns the sum of the elements in the array.
*/


#include <stdio.h>
#include <math.h>

 //*prototyping*
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float smallest(float arr[], int num);
float sum(float arr[], int num);

int main()
{
    int num = 0;
    char c;
    float arr[15]; //size as defined by question
    int count;
    float temp;

    printf("Enter 15 positive floats\n");

    for (count = 0; count < 15; count++) //loop to input 15 floats
    {
        scanf("%f", &temp);

        if (temp >= 0) //if the number is positive, moving to array in next position
        {
            arr[count] = temp;

            num++;
        }
        else      //removing negative number from the array and exiting loop
        {
            printf ("The last number won't be a part of the array as it is a negative number\n");
            break; //
        }


    }

    printf("Enter a character\n");
    scanf(" %c", &c);

    switch (c) //running cases for the entered character
    {
    case 'm':
    {
        printf("Geometric mean=%f\n", geometric_mean(arr, num));
        break;

    }
    case 'h' :
    {
        printf("The highest number in the array=%f\n", highest(arr, num));
        break;

    }
    case 'l' :
    {
        printf("The smallest number in the array=%f\n", smallest(arr, num));
        break;
    }
    case 's' :
    {
        printf("Sum of elements=%f\n", sum(arr, num));
        break;
    }
    }

    return 0;
}


float geometric_mean(float arr[], int num)
{
    int count;
    float gm_prod = 1, gm;

    for (count = 0; count < num; count++) //loop for all valid elements in the array
    {
        gm_prod = (gm_prod * arr[count]); //product of all elements
    }
    gm = pow(gm_prod,1.0/((double)num)); //computing the nth root of the product


    return gm;
}

float highest(float arr[], int num)
{
    int i = 0;
    float highestnum = arr[i];
    for (i = 0; i < (num-1); i++) //(num-1) comparisons for 'num' number of elements
    {
        if (arr[i+1] > highestnum) //if the element is greater than the element before it
        {
            highestnum = arr[i+1];
        }

    }
    return highestnum;
}

float smallest(float arr[], int num)
{
    int i = 0;
    float smallestnum = arr[i];


    for (i = 0; i < (num-1); i++)  //num-1 comparisons for num numbers
    {
        if (arr[i+1] < smallestnum)
        {
            smallestnum = arr[i+1];
        }

    }
    return smallestnum;
}

float sum (float arr[], int num)
{

    float total_sum = 0;
    int i;
    for (i = 0; i < num; i++)
    {
        total_sum = total_sum + arr[i];
    }
    return total_sum;

}

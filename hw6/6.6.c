/* JTSK-320111
6.6.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief countdown This function counts down numbers from n to 1.
@param n The positive integer entered
@return n The decreased number after each recursive call
*/
#include <stdio.h>
#include <stdlib.h>

void countdown(int n);

int main()
{
    int n;
    printf("Enter a positive integer number: \n");
    scanf("%d", &n);

    countdown(n); //calling recursive function


    return 0;
}

void countdown(int n)
{
    printf("The countdowwn:\n");
    if (n == 1) //Base case
    {

        printf("%d\n", n);
    }

    else
    {
        printf("%d\n", n);
        countdown(n-1); //recursive call
    }
    printf("\n");
    //return n;
}


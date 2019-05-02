/* JTSK -320111
6.7.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/*
@brief prime This function checks if the given number is prime or not
@param x The positive integer to check
@param i The numbers from 2 to x, to see if x is divisible by it
@returns 0 if prime and 1 if not
*/
#include <stdio.h>
#include <stdlib.h>

int prime (int x, int i); //prototyping

int main()
{
    int x, result;

    scanf("%d", &x); //storing the integer in x



    if (x == 1)
    {
        printf("%d is not prime\n", x); //extreme exception case as 1 is not prime number eve though it matches the divisor conditions
    }

    else //all the cases except 1
    {
        result = prime(x, 2); //calling function and skipping 1 because every number is divisible by 1

        if (result == 1) //if the value returned is 1, it is not prime
        {
            printf("%d is not prime\n", x);
        }
        else
        {
            printf("%d is prime\n", x);
        }
    }

    return 0;

}

int prime(int x, int i)
{
    if (i == x) //Base case, at i = x, the case should terminate.
    {
        return 0;
    }
    else
    {
        if (x % i == 0) //Checking if any number(s) between 2 and n is divisible by x
        {
            return 1;
        }
        else
        {
            return (prime(x, i+1)); //recursive call, increasing value of i to check the consecutive number
        }

    }
}

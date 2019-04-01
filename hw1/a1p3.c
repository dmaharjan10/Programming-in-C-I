/* JTSK-320111
a1p3.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <stdio.h>
int main() {
float result; /* The result of the division */
float a = 5;
float b = 13.5;
result = a / b;
printf("The result is %f\n", result);
return 0;
}
/*
The compiler error occurred because '#' was missing before 'include' in the first line to direct the program to extract from the library stdio.h
The fixes were: changing the data type of a and b and '%d' to '%f' in the printf statement. Since, %d denotes that result is an integer, and the given code defines b as an integer which didn't match with the given data so, it didn't print the correct result.
*/



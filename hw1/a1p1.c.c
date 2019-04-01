/* JTSK-320111
a1p1.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <stdio.h>

int main() {
   double result;
   result = (3.0 + 1.0) / 5.0;
   printf("The value of 4/5 is %lf\n", result);//The result of our calculation //
   return 0;
   //The value is 0.000 because 3, 1 and 5 are integers which calculates the result as an integer as well. So we can change it by changing the integers into double.//
}

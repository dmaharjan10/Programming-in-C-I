/* JTSK-320111
a1.p2.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <stdio.h>
  int main() {
    int result;
    result = (2 + 7) * 9 / 3;
    printf ("The result is %d\n", result); //The result of our calculation//
    return 0;
    }

// The program prints a different value because the printf syntax misses the argument, which should have been 'result itprints a random variable that was saved in the memory before.//

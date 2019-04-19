/* JTSK-320111
4.1.c
Drishti Maharjan
d.maharjan@jacobs-university.de*/

/* @brief position This function returns position of g in the given string
@param str[] This is a parameter for the string entered by the user
@param c This is a parameter which has a character of the string we need to find (here, 'g')
*/

#include <stdio.h>
#include <stdlib.h>

int position(char str[], char c);

int main() {
    char line[80];
    while (1) {
           printf("Enter string:\n");
           fgets(line, sizeof(line), stdin);
           printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
}

}

int position(char str[], char c){
   int idx;
    /* Loop until end of string */
      for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
      /* do nothing */
      }
       /*Use of braces is required to execute the 'for' statement correctly*/
    return idx;
}

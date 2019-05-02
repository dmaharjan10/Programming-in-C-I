/* JTSK-32011
5.11.C
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

/* @brief count_insensitive This function computes the number of times the character occurs in string.
@Param *str The pointer to string we need
@param c The character whose occurrence is to be checked
@return lettercount The number of times the character occurs in string
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//int count_insensitive(char *str, char c); //prototyping
int count_insensitive(char *str, char c)
{
    int lettercount = 0;
    for (int i = 0; i< strlen(str); i++) //checking all characters in string
    {

        if (tolower(str[i]) == tolower(c))
            lettercount++; //counting the number of occurrence of the character
    }
    return lettercount;
}

int main()
{
    char *temp_str; //pointer to point at array of characters
    int str_length;

    //dynamically allocating memory

    temp_str = (char*) malloc(sizeof(char)*50);

    //checking str is not empty

    if (temp_str == NULL)
    {
        exit(1);
    }

    fgets(temp_str, sizeof(char)*50, stdin); //taking input for string
    str_length = strlen(temp_str);

    char string[str_length];
    for (int i = 0; i < str_length; i++) //copying temp_str to string
    {
        string[i] = temp_str[i];
    }


    string[str_length - 1] = '\0'; //clearing
    printf("The character 'b' occurs %d times.\n", count_insensitive(string, 'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(string, 'H'));
    printf("The character '8' occurs %d times.\n", count_insensitive(string, '8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(string, 'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(string, '$'));



return 0;
}


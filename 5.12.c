/* JTSK-320111
5.12.c
Drishti Maharjan
d.maharjan@jacobs-university.de*/

/* @brief replaceAll This function replaces character c with character e in every string
@param *str Pointer to array of characters
@param c character to be replaced
@param e replacing character
@return nothing */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void replaceAll(char *str, char c, char e);

int main()
{
    char arr_char[80], c, e;

    printf("Enter string\n");
    fgets(arr_char, sizeof(arr_char), stdin);
    arr_char[strlen(arr_char)] = '\0';
    // if stop is entered, get out of loop




    if (tolower(arr_char[0]) != 's' && tolower(arr_char[1]) != 't' && tolower(arr_char[2]) != 'o' && tolower(arr_char[3]) != 'p' || tolower(arr_char[0]) != '\n')
    {
        printf("Enter character to be replaced\n");
        scanf (" %c", &c);
        printf("Character to be replaced: %c\n", c);

        printf("Enter replacing character\n");
        scanf (" %c", &e);
        printf("Replacing character: %c\n", e);

        printf("Before replacement: %s\n", arr_char); //string before replacement

        replaceAll(arr_char, c, e); //calling function

        printf("String after replacement: %s\n", arr_char);


    }
    return 0;
}


void replaceAll(char *str, char c, char e)
{

    int i = 0;
    for (i = 0; i <strlen(str); i++)  //checking every character
    {
        if (str[i] == c) //looking for the character in string
        {
            str[i] = e;  //replacing character by new character
        }
    }




}




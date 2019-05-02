/* JTSK-320111
6.3.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief count_lower This function computes the number of lower case characters in string
@*str Pointer to array of characters
@return count The number of lowercase characters in string
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_lower(char *str);

int main()
{
    char str[50];
    fgets(str, sizeof(char)*50, stdin);

    while (str[0] != '\n')
    {

        printf ("The number of lowercase characters in the string is %d\n", count_lower(str));

        str[0] = '\0';

        fgets(str, sizeof(char)* 50, stdin);
    }



    return 0;


}

int count_lower(char *str)
{

    int count = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {

        if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
        {
            if (tolower(str[i]) == str[i])
                count++;
        }

    }

    return (count);
}

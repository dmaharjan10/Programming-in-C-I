/* JTSK-32011
5.4.c
Drishti Maharjan
d.maharjan@jacobs-university.de */

/* @brief count_consonants This function counts the number of consonants in the string.
@ param str[] The string we entered
@returns num_cons the number of consonants
*/
#include <stdio.h>
#include <string.h>

int count_consonants(char str[]); //prototyping

int main()
{
    char line[100];

    while (1)
    {

        fgets(line, sizeof(line), stdin);

        if (line[0]=='\n') // checking blank space
        {
            break;
        }

        printf("Number of consonants=%d\n", count_consonants(line));
    }
return 0;

}

int count_consonants(char str[])
{
    int i, num_cons=0;
    for (i=0; i<strlen(str); i++) // loop for checking every character
    {
        if ((str[i] >= 'A' && str[i] <=  'Z') || (str[i] >= 'a' && str[i] <= 'z')) // to ensure only alphabets are checked
        {
            if (((str[i]) != 'a') && ((str[i]) != 'e') && ((str[i]) != 'i') && ((str[i]) != 'o') && ((str[i]) != 'u') && ((str[i]) != 'A') && ((str[i]) != 'E') && ((str[i]) != 'I') && ((str[i]) != 'O') && ((str[i]) != 'U')) // if they are not vowels (i.e. they are consonants
            {
                num_cons++;    //counting number of consonants
            }

        }
    }
    return num_cons;
}


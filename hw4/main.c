/* JTSK-320111
4.8.c
Drishti Maharjan
d.maharjan@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char line1[50];
    char line2[50];
    char one[50];
    char two [50] ; //declaring string as a list of characters//
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%[^\n]",one);
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%[^\n]",two);

    printf("length1=%lu\n", strlen(one)); // printing length of first string//
    printf("length2=%lu\n", strlen(two)); //printing length of second string//

    //comparing string one and two//
    int compare;
    compare=strcmp(one, two);



    printf("concatenation=%s\n", strcat(one,two)); //concatenating first and second string//

    char third[50];
    strcpy (third, two); //copying string two to third//
    printf("copy=%s\n", third); //printing third string//

    if (compare > 0) //if the first mismatched character in 'one' comes anywhere after the mismatched character in 'two' in the alphabet set//
    {
        printf("one is larger than two\n");
    }
    else if (compare < 0) //if the first mismatched character in 'one' appears anywhere before the mismatched character in 'two' in the alphabet set//
    {
        printf("one is smaller than two\n");

    }
    else //if the characters are equal//
    {
        printf("one is equal to two\n");
    }

    char c;
    scanf(" %c", &c);

    int i;
    int check=0;
    for (i=0; i< (strlen(one)-1); i++) //checking each character of the string//
    {
        if (c== two[i]) //if c equals the extracted character//
        {
            printf("position=%d\n", i); //prints the position of c in string two//
            check++; //counting to see if any character is found//
            break;
        }


    }
    if (check==0) //no characters found//
    {
        printf("The character is not in the string\n");
    }
    return 0;
}


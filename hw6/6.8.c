/* JTSK-320111
6.8.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[2];
    int asc_sum = 0;

    FILE *fp;
    fp = fopen("chars.txt", "r"); //opening existing file "chars.txt"

    if (fp == NULL) //if the file doesn't open
    {
        printf("Some error occured:\n");
        exit (1);
    }

    for (int i = 0; i < 2; i++) //for two characters
    {
        ch[i] = getc(fp);
        asc_sum = asc_sum + (int)ch[i]; //addition of ASCII value of characters
    }

    fclose(fp); //closing first file

    FILE *fp1;
    fp1 = fopen ("codesums.txt", "w"); //creating a new file 'codesums.txt'

    fprintf(fp1, "Sum of ASCII values= %d\n", asc_sum); //printing value in the file
    fclose(fp1);

    return 0;

}

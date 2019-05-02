/* JTSK-320111
6.10.c
Drishti Maharjan
d.maharjan@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char c[100]; //array of characters to store strings from files
    int i;


    FILE *fp; //first file to be read
    FILE *fp1; //second file to be read
    FILE *fp2; //new file to be written on


    fp = fopen("text1.txt", "r"); //opening first file in read mode

    if (fp == NULL) //checking if the file exists
    {
        printf("Some error occurred\n");
        exit(1);
    }
int length = sizeof(fp);
printf("%d\n", length);
    //opening new file
    fp1 = fopen("text2.txt", "r");

    if (fp1 == NULL) //checking if the file exists
    {
        printf("Some error occurred\n");
        exit(1);
    }
    int lenght2 = sizeof(fp1);
    printf("%d\n", sizeof(fp1));

    //opening new file to merge texts
    fp2 = fopen("merge12.txt", "w+");
    if (fp2 == NULL) //checking if the file exists
    {
        printf("Some error occurred\n");
        exit(1);
    }

    //extracting array of characters from first file to third file

    while(1)
    {
        c[i] = getc(fp);
        if (c[i] == EOF)
        {
            break;
        }
        else
        {
            putc(c[i], fp2);
        }
        i++;

    }
    c[i-1] = '\0'; //end of string and clearing the buffer
    putc('\n', fp2); //starting new line for the other text to merge


    i = 0;//re-initializing value of i

    //extracting array of characters from second file to third file
    while (1)
    {
        c[i] = getc(fp1);
        if (c[i] == EOF)
        {
            break;
        }
        else
        {
            putc(c[i], fp2);
        }

        i++;

    }
    c[i-1] = '\0'; //clearing buffer of string

    //closing all the files
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    return 0;


}

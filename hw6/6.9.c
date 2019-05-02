/* JTSK-320111
6.9.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstfile[100], secondfile[100];
    double num1, num2;
    double sum, diff, prod, div;
    int length1;

    //taking input for two file names
    printf("Enter name of 1st file, including extension\n");
    fgets(firstfile, sizeof(char)* 100, stdin);
    length1 = strlen(firstfile) - 1;
    firstfile[length1] = '\0';

    printf("Enter name of 2nd file, including extension\n");
    fgets(secondfile, sizeof(char)* 100, stdin);
    length1 = strlen(secondfile) - 1;
    secondfile[length1] = '\0'; //remov the trailing \n

    //opening firstfile

    FILE *fp;
    fp = fopen(firstfile, "r");

    if (fp == NULL)
    {
        printf("Some error occurred:\n");
        exit (1);
    }

    fscanf(fp, "%lf", &num1); //taking input from the file and storing it to num1

    fclose(fp);

    //opening second file

    FILE *fp2;
    fp2 = fopen(secondfile, "r");

    if (fp2 == NULL)
    {
        printf("Some error occurred:\n");
        exit(1);
    }
    //reading value from file and storing number to num2
    fscanf(fp2, "%lf", &num2);

    fclose(fp2);

    //main operations:

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    div = num1 / num2;

    //creating new file "results.txt"

    FILE *fp3;
    fp3 = fopen("results.txt", "w");

    //writing results of operations in the new file

    fprintf(fp3, "Sum is %f\n", sum);
    fprintf(fp3, "Difference is %f\n", diff);
    fprintf(fp3, "Product is %f\n", prod);
    fprintf(fp3, "Division is %f\n", div);

    fclose(fp3);

    return 0;


}


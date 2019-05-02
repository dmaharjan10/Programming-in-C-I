/* JTSK-320111
5.7.C
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/*
@brief matrix This function prints elements in the matrix
@brief diagonal This function prints elements under the main diagonal
@param table[][] The elements of the matrox
@param n the number of rows and columns
@return nothing
*/
#include <stdio.h>
#include <stdlib.h>

void matrix(int table[][30], int n);
void diagonal(int table[][30], int n);

int main()
{
    int n, i, j, table[30][30];
    scanf("%d", &n);
    i = n;
    j = n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &table[i][j]);
        }
    }
    matrix(table, n); //calling function for printing elements
    diagonal(table, n); //calling for printing elements udner diagonal
    return 0;
}

void matrix(int table[][30], int n)
{
    int i,j;
    printf("The entered matrix is:\n");
    for (i = 0; i < n; i++) // number of rows
    {
        for (j = 0; j < n; j++) //number of columns
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

void diagonal(int table[][30], int n)
{
    int i,j;
    printf("Under the main diagonal:\n");

    for (i = 0; i < n; i++) //number of rows
    {
        for (j = 0; j != i; j++) //running loop for columns until the position of the main diagonal only
        {


            printf("%d ", table[i][j]);

        }
    }
    printf("\n");
}

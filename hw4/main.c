/*JTSK 320111
4.4.c
Drishti Maharjan
d.maharjan@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

void print_form(int n, int m, char c); // prototyping //

int main()
{
    int n,m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c); //using scanf to eat the white space while reading character//

    print_form(n,m,c);

    return 0;
}

void print_form(int n, int m, char c)
{
    int i=0,k, j=0;

    for (i=0; i<n; i++) // loop to print n number of lines in the pattern//
    {

        for (k=1; k<= (m+j) ; k++) //loop to print the character m+j times in each line //
        {
            printf("%c", c);
        }
        printf ("\n");  //start a new line//
        j++;

    }
}



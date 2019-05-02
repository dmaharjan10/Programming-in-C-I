/* JTSK-32011
6.1.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int triangle (int n, char ch);

int main ()
{
    int n;
    char ch;

    scanf("%d", &n);
    scanf (" %c", &ch);

    triangle(n,ch); //calling function
    return 0;
}

int triangle(int n, char ch)
{

    int count, count1;
    int m=n;

    for (count=1; count<=n; count++) // running loop for n number of lines
    {
        for (count1=1; count1<=m; count1++) //running loop for printing characters in a row
        {
            printf("%c", ch);

        }

        m--; //decreasing the number of times a character is printed on every line

        printf ("\n");

    }
    return 0;
}

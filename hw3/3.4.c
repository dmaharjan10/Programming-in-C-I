/* JTSK-320111
3.4.c
Drishti Maharjan
d.maharjan@jacobs-university.de*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    do
    {
        scanf("%d",&n);
    }
    while (n<=0);

    while (i<=n)
    {
        if (i==1)
        {
            printf("%d day = %d hours\n", i, i*24);
        }
        else
        {
            printf("%d days = %d hours\n", i, i*24);
        }

        i++;
    }

    return 0;
}

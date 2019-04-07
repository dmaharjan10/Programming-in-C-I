/* JTSK-320111
3.3.c
Drishti Maharjan
d.maharjan@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c", &a);

    if ((a>='0') && (a<='9')){
        printf("%c is a digit\n",a);
    }
    else if (((int)a>=65 && (int)a<=90)|| ((int)a>=97 && (int)a<=122)){
        printf("%c is a letter\n", a);
    }
    else{
        printf("%c is some other symbol\n", a);
    }

    return 0;
}

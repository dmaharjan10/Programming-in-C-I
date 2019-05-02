/* JTSK-32011
Drishti Maharjan
d.maharjan@jacobs-university.de */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char line[150];
    char str[50];
    int i;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%[^\n]", str); // this ensures the string accepts input with spaces

    for (i = 0; i < strlen(str); i++) //loop works until the end of the string
    {
        if (i % 2 == 0) //if the position of string is at odd positions, it prints without space
        {
            printf("%c\n", str[i]);
        }
        else  //if position of string is at even positions, it prints with space
        {
            printf(" %c\n", str[i]);
        }

    }
    return 0;
}

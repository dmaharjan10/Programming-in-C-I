/* JTSK-320111
4.2.c
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/* @brief convert This is a function that converts cm into km
@param cm the value in cm
@return the value that has been converted into km
*/
float convert (int cm);

int main(){
    int x;
    char line[40];
       fgets(line,sizeof(line),stdin);
       sscanf(line,"%d",&x);
       printf("Result of conversion: %f\n", convert(x));
       return 0;

}

float convert(int cm){
    float km;
    km=cm*  0.00001;
    return km;
}


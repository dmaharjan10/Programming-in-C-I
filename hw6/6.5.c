/* JTSK- 320111
6.5.c.
Drishti Maharjan
d.maharjan@jacobs-university.de
*/
/* @brief scalar_prod This function computes the scalar product of the vector
@param double v[] and double w[] are components of two vectors respectively
@param n The number of components each vector holds
@return scalar_prod The scalar product of the vectors

@brief smallest_v & smallest_w The functions computes and prints the smallest component in vector v and w respectively
@return pos_smallest_v & pos_smallest_w The position of the smallest component in vector v and w respectively

@brief largest_v & largest_w The functions computes and prints the largest component in vector v and w respectively
@return pos_largest_v & pos_largest_w The position of the largest component in vector v & w respectively
*/



#include <stdio.h>
#include <stdlib.h>
double scalar_prod(double v[], double w[], int n);
int smallest_v(double v[],int n);
int largest_v(double v[], int n);
int smallest_w(double w[], int n);
int largest_w(double w[], int n);
int main()
{
    int n;
    scanf("%d", &n);

    double v[n], w[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }

    printf("Scalar product=%lf\n",scalar_prod(v, w, n));
    printf("Position of smallest = %d\n", smallest_v(v,n));
    printf("Position of largest = %d\n", largest_v(v, n));
    printf("Position of smallest = %d\n", smallest_w(w,n));
    printf("Position of largest = %d\n", largest_w(w, n));


    return 0;
}

double scalar_prod(double v[], double w[], int n)
{
    double crossmult, final_scal_prod = 0.000;
    for (int i = 0; i < n; i++)
    {
        crossmult = v[i] * w[i];
        final_scal_prod = final_scal_prod + crossmult;
    }
    return final_scal_prod;
}

int smallest_v(double v[], int n)
{
    int i = 0;
    double smallest = v[i];
    int pos_smallest_v = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] < smallest)
        {
            smallest = v[i];
            pos_smallest_v = i;

        }
    }
    printf("The smallest = %lf\n", smallest);
    return pos_smallest_v;
}

int largest_v(double v[], int n)
{
    int i = 0;
    double largest = v[i];
    int pos_largest_v = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
            pos_largest_v = i;
        }
    }
    printf("The largest = %lf\n", largest);
    return pos_largest_v;

}

int smallest_w(double w[], int n)
{
    int i = 0;
    double smallest = w[i];
    int pos_smallest_w = 0;

    for (i = 0; i < n; i++)
    {
        if (w[i] < smallest)
        {
            smallest = w[i];
            pos_smallest_w = i;

        }
    }
    printf("The smallest = %lf\n", smallest);
    return pos_smallest_w;
}

int largest_w(double w[], int n)
{
    int i = 0;
    double largest = w[i];
    int pos_largest_w = 0;

    for (i = 0; i < n; i++)
    {
        if (w[i] > largest)
        {
            largest = w[i];
            pos_largest_w = i;
        }
    }
    printf("The largest = %lf\n", largest);
    return pos_largest_w;

}


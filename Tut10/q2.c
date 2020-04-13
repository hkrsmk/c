/*
2. Implement the function below;

void split(double d, int* int_part, double* frac_part)


This function accepts 3 inputs.
d is a real number while int_part is its integer component
and frac_part is the fractional part. (for example if d is 3.14,
                                       int_part will be 3 and frac_part will be 0.14)


*/


#include <stdio.h>
#include <math.h>

void split(double, int *, double *);

int main(void)
{
    printf("Input a number.");
    double d, frac_part;
int int_part;
    scanf("%lf",&d);
    split(d,&int_part,&frac_part);
    return 0;
}

void split(double d, int *int_part, double *frac_part)
{
    *int_part = (int) d;
    *frac_part = d - *int_part;
    printf("The number is %f, with integer %d and fraction part %f.",d,*int_part,*frac_part);
}

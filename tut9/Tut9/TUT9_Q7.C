/*   This program estimates the real roots of a    */
/*   polynomial function using incremental search. */

#include <stdio.h>
#include <math.h>
int main()
{
    /* Declare variables and function prototypes. */
    int n, k;
    double a0, a1, a2, a3, a, b, step, left, right;
    void check_roots(double left, double right,
                     double a0, double a1, double a2, double a3);
    /* Get user input. */
    printf("Enter coefficients a0, a1, a2, a3: \n");
    scanf("%lf %lf %lf %lf",&a0,&a1,&a2,&a3);
    printf("Polynomial is %lf x^3 + %lf x^2 + %lf x + %lf\n",
           a0, a1, a2, a3);
    printf("Enter interval limits a, b (a<b): \n");
    scanf("%lf %lf",&a,&b);
    printf("Enter step size: \n");
    scanf("%lf",&step);
    /* Check subintervals for roots. */
    n = (int) ceil((b - a)/step);
    /* k = no. of subintervals, run through
    from interval 0 to interval n-1
    */
    for (k=0; k<=n-1; k++)
    {
        left = a + k*step;
        if (k == n-1)
            right = b; //instead of + step, because step depends on the user. The last step to b
            //can be a different size than the previous steps.
            //so the last step would be too big if it's an integer.
        else
            right = left + step;
        check_roots(left,right,a0,a1,a2,a3);
    }
    check_roots(b,b,a0,a1,a2,a3);
    /* Exit program. */
    return 0;
}
/*---------------------------------------------------*/
/* This function checks a subinterval for a root. */
void check_roots (double left, double right,
                  double a0, double a1, double a2, double a3)
{
    /* Declare variables and function prototypes. */
    double f_left, f_right;
    double poly(double x, double a0, double a1, double a2, double a3);
    /* Evaluate subinterval endpoints and */
    /* test for roots. */
    f_left = poly(left,a0,a1,a2,a3);
    f_right = poly(right,a0,a1,a2,a3);
    if (fabs(f_left) < 0.00001)
        printf("Root detected at the left of the interval, at %.3f \n",left);
    else if (fabs(f_right) < 0.00001)
        ;
    else if (f_left*f_right < 0)
        printf("Root detected in the middle of the interval, at %.3f \n", (left+right)/2);
    /* Exit function. */
    return;
}
/*------------------------------------------------------*/
/* This function evaluates a cubic polynomial. */
double poly(double x, double a0, double a1, double a2, double a3)
{
    return a0*x*x*x + a1*x*x + a2*x + a3;
}
/*-------------------------------------------------------*/

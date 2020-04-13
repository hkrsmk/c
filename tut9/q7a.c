#include <stdio.h>
#include <math.h>
#define N 10000

//try with linear equation to see if it gets 2 roots (it works)
//is it the ending condition? (works with range q = p)
//maybe the interval size is too small for the degree of error. (linear eqn doesn't really have this problem
//surprisingly)
//degree of error should be bigger than interval
//missing code: set difference = (q-p)/(step size) = N
//if I'm doing that, must also set the last step to be q since step size will influence N and overshoot
//on the end.

double a,b,c,d,p,q,x,difference;
int counter;
double poly(double);
void check_roots(double, double);

int main (void)
{
    printf("Enter values for a,b,c,d in ax^3 + bx^2 + cx +d,");
    printf("\n AND ALSO the range you want me to check, between p and q, with q > p.");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&p,&q);

    for (difference=((q-p)/N),x=p; x<q; x+=difference)
    {
        double y = x;
        check_roots(y,y+=difference);
    }
    check_roots(q,q);

    return 0;
}

double poly(double x)
{
    return (a)*x*x*x + (b)*x*x + (c)*x + (d);
}

void check_roots(double left, double right)
{
    double f_left = poly(left),f_right = poly(right);
    if (fabs(f_left) < 0.001)
        printf("Root x = %lf at left endpoint.",left);
    else if (f_left*f_right < 0)
        printf("Root is in the middle of the subinterval.");
    return;
}

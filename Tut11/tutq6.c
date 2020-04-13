#include <stdio.h>
#include <math.h>

void get_poly(double coeff[]);
double poly(double x, double coeff[]);
double coeff[4]= {0};

int main(void)
{
    double x,p,q,i;
    get_poly(coeff);
    printf("Enter a range (p & q) to check roots for x.\n");
    scanf("%lf %lf",&p,&q);
    printf("p=%f and q=%f obtained.",p,q);
    if (p>q)
        i=p,p=q,q=i;
    for (x=p; x<q; x+=0.001)
        poly(x, coeff);
    return 0;
}

void get_poly(double coeff[4])
{
    printf("Enter 4 numbers for ax^3 + bx^2 + cx + d.\n");
    int i;
    for(i = 0; i<4; i++)
        scanf("%lf",&coeff[i]);
    printf("I got %fx^3 + %fx^2 + %fx + %f\n",coeff[0],coeff[1],coeff[2],coeff[3]);
}

double poly(double x, double coeff[])
{
    double y = coeff[0]*(x)*(x)*(x) + coeff[1]*(x)*(x) + coeff[2]*(x) + coeff[3];
    if (fabs(y)<0.01)
        printf("There's a root at x=%f.",x);
}

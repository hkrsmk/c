#include <stdio.h>
#include <math.h>

double sinc(double);

int main(void)
{
    double a,b,x;
    printf("Enter endpoints a and b (a < b)");
    scanf("%lf %lf", &a, &b);
    double c = (b - a)/20;
    printf("x        sinc(x)\n");
    for (x=a;x<=b;x+=c)
    printf("%.6f        %.6f\n",x,sinc(x));
    return 0;
}

double sinc(double x){
if (fabs(x)==0) // or, if (fabs(x) < 0.0001) to give it some wiggle room (may not always equal 0, esp if |a| =/= |b|
    return 1;
    else
        return sin(x)/x;
}

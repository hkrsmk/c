#include <math.h>
#include <stdio.h>

double scale(double, double), x, y;

int main(void)
{
    printf("The number is %e. x= %f and y= %f\n",scale(2.5,2.0),x,y);
    printf("x = %f and y= %f", x,y);

    return 0;
}

double scale(double a, double b)

{
    x=a;
    y=b;
    printf("inside scale, x= %f, y= %f \n",x,y);
    return ((a)* pow(10.0,b));
}

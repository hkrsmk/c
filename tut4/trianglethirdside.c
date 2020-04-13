#include <stdio.h>
#include <math.h>
#define findCside(a,b,c) sqrt((a)*(a) + pow((b),2) - 2*(a)*(b)*cos(c))
#define PI 3.14159
#define round(d) (floor((d)*100000+0.5))/100000

int main(void)
{
    double a, b, c;
    printf("Input a, b and c, where a and b are the sides and c is the included angle in degrees.");
    scanf("%lf %lf %lf",&a,&b,&c);
    c *= (2*PI/360);
    printf("The third side is %.1f",round(findCside(a,b,c)));
    return 0;
}

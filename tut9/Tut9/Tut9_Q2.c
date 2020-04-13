#include <stdio.h>
double ad1(double x);
double trpl(double x);
double hlf(double x);
int main(void)
{
printf("%.3f\n", hlf(trpl(ad1(8.2))));
return 0;
}
double ad1(double x)
{
return (x + 1);
}
double trpl(double x)
{
return (3 * x);
}
double hlf(double x)
{
return (0.5 * x);
}
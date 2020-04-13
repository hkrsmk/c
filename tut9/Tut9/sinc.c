#include <stdio.h>
#include <math.h>

double sinc(double angle);

int main()
{
	int k;
	double a, b, x_step, x_new;
	
	printf("Enter endpoints a and b (a < b); eg -5 5: \n");
	scanf("%lf %lf", &a, &b);
	x_step = (b-a)/20;

	printf("  x          sinc(x) \n\n");
	for (k=0;k<=20; k++)
	{
		x_new = a + k * x_step;

		printf("%10f %10f \n", x_new, sinc(x_new));
	}

	return 0;
}

double sinc(double x)
{
	if (fabs(x)<0.0001)
		return 1.0;
	else
		return sin(x)/x;
}

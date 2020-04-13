#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double x;
    printf("Enter a real number.");
    scanf("%lf",&x);

    printf("Its absolute value from fabs is %f.\n",fabs(x));
    printf("Its absolute value from stdlib is %f.\n",abs(x));
    printf("Sine = %f.\nCosine = %f.\nTangent = %f\nexponential = %f\n",sin(x),cos(x),tan(x),exp(x));
    if(x>0)
        printf("ln(x) = %f. \nSqrt = %f.\n",log(x),sqrt(x));
    else
        printf("ln(x) can't be computed. Root is %fi.\n",sqrt(fabs(x)));

    printf("Ceiling is %f and floor is %f.",ceil(x),floor(x));
    return 0;
}

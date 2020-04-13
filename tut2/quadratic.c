/* Solution of a*x*x + b*x + c = 0 */
#include <stdio.h>
#include <math.h>
#define disc(a,b,c) (b)*(b) - 4*(a)*(c)

int main(void)
{
    double a, b, c, root1, root2;
    printf("Input the coefficient a => ");
    scanf("%lf", &a);
    printf("Input the coefficient b => ");
    scanf("%lf", &b);
    printf("Input the coefficient c => ");
    scanf("%lf", &c);

    if (a == 0) /* If coefficient a is
zero, do the below. Note the double
equal or == sign */
{
printf("You have entered a = 0.\n");
printf("Only one root: %8.3f", -c/b);
}
else  //otherwise do the below
{
if (disc(a,b,c) < 0)
    {
        printf("Imaginary roots. Sorry! Try again.\n\n");
        main();
    }
    else
    {
    root1 = (- b + sqrt(b*b-4*a*c))/(2*a);
    root2 = (- b - sqrt(b*b-4*a*c))/(2*a);
    printf("The first root is %8.3f\n", root1);
    printf("The second root is %8.3f\n", root2);
    }
}
    return 0;

}

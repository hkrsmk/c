#include <stdio.h>
#include <math.h>

int main(void)
{
    double value;
    printf("Enter a value.");
    scanf("%lf",&value);
    if(value > 0)
    printf("The lowest integer is %f.",floor(value));
    else
    {
        printf("Input a positive value.\n");
        main();
}
    return 0;
}

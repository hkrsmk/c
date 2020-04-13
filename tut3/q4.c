#include <stdio.h>
#define fahrenheit(x) ((1.8)*(x)+ 32)
//I don't get why (9/5)*x + 32 doesn't work... but 9*x/5 works, 1.8*x works...
// 5/9 will result in integer division, which will = 0
//Try 5.0/9.0 instead. For me it'd be try 9.0/5.0 instead.


main(void)
{
    double temperatureC, fahrenheit;
    printf("Enter temperature in degrees Celsius. ");
    scanf("%lf",&temperatureC);
    fahrenheit = fahrenheit(temperatureC);

    printf("The temperature in degrees celsius was %lf. The temperature in fahrenheit was %lf.",temperatureC,fahrenheit);

    return 0;
}

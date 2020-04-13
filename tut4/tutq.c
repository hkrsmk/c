#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main (void)
{
    int ch, b, x;
    double y1, y2, y3, a;
    printf("%d",isalnum(5));
    printf("%d",isalnum('5'));
    printf("%d",isalpha('A'));
    printf("%d",isalpha(65));
    printf("%d",isupper(ch));
    printf("%d\n\n",isdigit(ch));

    y1 = sqrt(1-(pow(x,2))/(1+pow(x,2))*pow(sin(x),2));
    y2 = (1/sqrt(x))*exp(-(x-5)/(2*x));

    printf("frexp(a,&b) changes stuff to base 2.\n");
    printf("So, it answers the question, how can I express the number a as a number x2 ^ something?\n");
    printf("The something will be stored in b.\n");
    //my code doesn't work though :((( and I don't want to debug lol

    a = 1024;
    y3 = frexp(a,&b);

    printf("frexp(a,b) = %.2f and b = %.2f and a = %.2f",y3,b,a);

    return 0;
}

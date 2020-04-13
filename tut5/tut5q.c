#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, i, a, b;
    double sales, salary, basic;
    if((1 < x) && (x <=10)) //or, x > 1
        printf("1 < x <= 10");

    if(sales > 10000.0)
        salary = basic + sales*0.02;
    else
        salary = basic + sales*0.01;

    printf("%d",abs(4.9));

    printf("Input i.");
    scanf("%d",&i);
    a = (i>1 && i <3);
    b = (i==4 || i==5);

    switch (i)
    {
    case 0:
        printf("bad");
        break;
    case 1:
        printf("good");
        break;
    case 2:
        printf("good");
        break;

        //alternatively:
        /*
        case 1:
        case 2:
        printf("good");
        break;
        */

    case 4:
        printf("excellent");
        break;
    case 5:
        printf("excellent");
        break;
    default:
        printf("Sorry!");
    }


    return 0;
}

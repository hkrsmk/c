#include <stdio.h>
#include <math.h>

int main(void)
{
    double number1,number2,result;
    char b,d,e;
    printf("Enter two numbers and an operator in the form number1 operator number2  (e.g. 4.5 - 2.9)");
    scanf("%lf%c%c%c%lf",&number1,&d,&b,&e,&number2);

    if(b!='+'&&b!='-'&&b!='*'&&b!='/')
        printf("Invalid operator. Insert +, -, * or /.");
    else
    {
        if(b=='+')
            result = number1+number2;
        else if (b=='-')
            result = number1-number2;
        else if (b=='*')
            result = number1*number2;
        else if (b=='/')
            result = number1/number2;

        printf("%.1f %c %.1f result is %.1f.",number1,b,number2,floor(result*10 + 0.5)/10);

    }
    return 0;

    /*
    you can also split up the result and the assignment. So
    else invalid_op=1;

    if(invalid_op!=1)
    printf('THE RESULT BLAH)

    else printf(invalid operator);

    */
}

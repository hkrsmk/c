#include <stdio.h>
#include<math.h>

int main(void)
{
    double number1,number2,result;
    int y;
    char b,d,e;
    printf("Enter two numbers and an operator in the form number1 operator number2  (e.g. 4.5 - 2.9)");
    scanf("%lf%c%c%c%lf",&number1,&d,&b,&e,&number2);

/*

    switch(b)
    {
    case '+':
        result = number1+number2;
        break;
    case'-':
        result = number1-number2;
        break;
    case '*':
        result = number1*number2;
        break;
    case '/':
        result = number1/number2;
        break;
    default:
        printf("Invalid operator. Insert +, -, * or /.");
    }

*/
    //can I do this instead? How to not repeat the printf statement? yas this is probably better. lol.
    y = (b!='+'&&b!='-'&&b!='*'&&b!='/');

        if (y==1)
        printf("Invalid operator. Insert +, -, * or /.");

    else
    {
        switch(b)
        {
        case '+':
            result = number1+number2;
            break;
        case'-':
            result = number1-number2;
            break;
        case '*':
            result = number1*number2;
            break;
        case '/':
            result = number1/number2;
            break;
        }
        printf("%.1f %c %.1f result is %.1f.",number1,b,number2,floor(result*10 + 0.5)/10);
    }


    return 0;
}

#include <stdio.h>

/*1.	Write a prototype for a function fun
that has two type double input parameters (pass by value) and
two type double output parameters (pass by reference).
Write the function call statement that uses the following declared variables. */


double one = 1.0, two = 2.0;            /* input variables */
double out1, out2, *ptr1 = &out1, *ptr2 = &out2;                            /* output variables */

void fun(double, double);

int main(void)
{
    fun(one,two);
    printf("The value of out1 = %f and the value of out2 = %f",out1,out2);
    return 0;
}
void fun(double one, double two)
{
    *ptr1 = one;
    *ptr2 = two;
}
//much nope many wow. See the answer. Mine is still doing pass by value.
//but because my variables are global, it doesn't affect
//'visibility' of the variables.

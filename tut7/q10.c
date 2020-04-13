#include <stdio.h>
double repay(int n);

int main(void)
{
    printf("If n = 12, interest = %f. If n = 365, interest = %f.",repay(12),repay(365));
    // or, set n =12, then printf("%f",repay(n));
    return 0;
}

double repay(int n)
{
    double sum = 1.0;
    int i;
    for (i= 1; i <= n; i++)
        sum = sum * (1 + 1.0/(n));
    return sum;
}

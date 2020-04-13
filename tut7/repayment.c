/* Repayment for a principal of $1 with different compounding intervals */
#include <stdio.h>

double repay(int n);

int main(void)
{





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

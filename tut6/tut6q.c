#include <stdio.h>

int main(void)
{
    int num, sum;
    num = 100;
    sum = 0;
          while (num > 0)
    {
        sum += num;
        num --;
        printf("sum = %d\n",sum);
    }

    return 0;
}

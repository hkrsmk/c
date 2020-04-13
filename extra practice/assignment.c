#include <stdio.h>
#include <stdlib.h>

void PerfectNumbers(int,int),checkPerfect(int,int);

int main(void)
{
    int lowlimit, upperlimit;
    printf("Program: perfect numbers in a given range :\n");
    printf("--------------------------------------------");
    printf("\nInput lowest search limit of perfect numbers :");
    scanf("%d",&lowlimit);
    printf("\nInput highest search limit of perfect numbers :");
    scanf("%d",&upperlimit);
    PerfectNumbers(lowlimit,upperlimit);
    return 0;
}

void PerfectNumbers(int lowlimit, int upperlimit)
{
    if (lowlimit <= upperlimit)
    {
        printf("The perfect numbers between %d and %d are:\n",lowlimit,upperlimit);
        checkPerfect(lowlimit,upperlimit);
    }
}

void checkPerfect (int lowlimit, int upperlimit)
{

    for (int check_each_value = lowlimit, sum_of_positive_divisors=0; check_each_value<=upperlimit; lowlimit++, check_each_value++)
    {
        for(int divisor=1; divisor<lowlimit; divisor++)
        {
            if (lowlimit%divisor==0)
                sum_of_positive_divisors += divisor;
                printf("sum=%d",sum_of_positive_divisors);
        }

        if (sum_of_positive_divisors == lowlimit)
            printf("%3d",lowlimit);
    }
}

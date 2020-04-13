#include <stdio.h>

int main(void)
{
    int sum=0, numbers_to_process, input, positive_integers=0;
    double average;

    printf("How many numbers to process? ");
    scanf("%d",&numbers_to_process);

    if (numbers_to_process>0)
    {
        do
        {
            printf("Enter number => ");
            scanf("%d",&input);
            if(input>0)
            {
                sum+=input;
                ++positive_integers;
            }
        }
        while (--numbers_to_process>0);

        if (positive_integers>0)
        {
            printf("There are %d positive integers.\n",positive_integers);
            printf("Sum of integers = %d\n",sum);
            printf("Average of integers = %.2lf",average=(double) sum/positive_integers);
        }
        else printf("No positive numbers to sum or average");

    }
    else
        printf("Nothing to process!");

    return 0;
}

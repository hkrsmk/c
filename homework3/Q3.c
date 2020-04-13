#include <stdio.h>

int main(void)
{
    int n,i;
    double largest=0;
    printf("This programme finds the largest value in inputted elements. How many elements to store?");
    scanf("%d",&n);
    double array[n];
    for(i=0;i<n;i++)
    {
            printf("Input item number %d.",i+1);
        scanf("%lf",&array[i]);
    }

    printf("\nInput:");
    for(i=0;i<n;i++)
        printf("\t%f",array[i]);

    for(i=0;i<n;i++)
        if(array[i]>largest)
        largest = array[i];
    printf("\n\nThe largest number is %lf.",largest);

    return 0;
}

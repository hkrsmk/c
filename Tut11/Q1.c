#include <stdio.h>

int main(void)
{
    int n[10] = { 18, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i,j,histogram;
    printf("Element\t\tValue\t\tHistogram\n");
    //printf("%s%13s%17s\n","Element","Value","Histogram"); works too!!!

    for (i=0;i<10;i++)
    {
        printf("%d\t\t",i);
        printf("%d\t\t",n[i]);

        for(histogram=0;histogram<n[i];histogram++)
            printf("*");
        printf("\n");
    }
    return 0;
}

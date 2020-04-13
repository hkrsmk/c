#include <stdio.h>

int main(void)
{
    double marks[10]= {0},weights[10]= {0},weights_sum,weighted_ave;
    int n,k=0;
    FILE *fweight;
    if ((fweight = fopen("F:/school/Y1S1/Computing/Tut12/weights.txt","r"))==NULL)
    {
        printf("Can't open file.");
        return 1;
    }


    for(n=0; fscanf(fweight,"%lf",&weights[n])!=EOF; n++,k++)
        printf("The current k value is %d.\n",k);

    for(n=0; n<k; n++)
    {
        printf("Weight[%d]\t%.2f\tEnter mark[%d]\t",n+1,weights[n],n+1);
        scanf("%lf",&marks[n]);
        printf("\t\t\tmark[%d]\t\t%.2f\n",n+1,marks[n]);
        weights_sum+=weights[n];
    }

    if (weights_sum!=1)
        printf("Error; weights don't add to 1.0");
    else
        for(n=0; n<k; n++)
        {
            weighted_ave+=weights[n]*marks[n];
            printf("Weighted average is %.2f.",weighted_ave);
        }

    fclose(fweight);
    return 0;
}

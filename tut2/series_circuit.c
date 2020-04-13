#include <stdio.h>
#define seriesCurrent(v,r1,r2,r3) (v)/((r1) + (r2) + (r3))

int main()
{
    double v, r1, r2, r3;
    printf("Input voltage, r1, r2 and r3 in order. \n");
    scanf("%lf %lf %lf %lf",&v,&r1,&r2,&r3);
    printf("The current is %lf.\n",seriesCurrent(v,r1,r2,r3));

    return 0;

    /*broken code:
    double v, r1, r2, r3,current;
    printf("Input voltage, r1, r2 and r3 in order. \n");
    scanf("%lf %lf %lf %lf",&v,&r1,&r2,&r3);
    printf("The current is %lf.\n",seriesCurrent());
    return 0;

    alternate solution:
    double v, r1, r2, r3,current;
    current = seriesCurrent(v,r1,r2,r3);
    printf("Input voltage, r1, r2 and r3 in order. \n");
    scanf("%lf %lf %lf %lf",&v,&r1,&r2,&r3);
    printf("The current is %lf.\n",current);
    return 0;
    */

}

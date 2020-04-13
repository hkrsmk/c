
#include<stdio.h>
#include<math.h>
int findRoots(void)
{
    double a,b,c,root1,root2;
    printf("\n\nInput a,b,c of the equation ax^2 + bx + c.");
    scanf("%lf %lf %lf", &a,&b,&c);
    if (a==0)
    {
        printf("Invalid. Input another a value:");
        scanf("%lf", &a);
    }
    else
    {
        root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b - sqrt(b*b-4*a*c))/(2*a);
        printf("The roots are %8.3f and %8.3f.",root1,root2);
    }
    return 0;
}

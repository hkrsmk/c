#include <stdio.h>
#include <math.h>
#define N 1000

/*find the y value of the function
if y value = 0 ish, store the value of x as root1, root2, or root3
print the result, depending on how many real roots found
*/

double root1,root2,root3,a,b,c,d,p,q,x,y,difference;
int counter;

int main (void)
{
    printf("Enter values for a,b,c,d in ax^3 + bx^2 + cx +d,");
    printf("\n AND ALSO the range you want me to check, between p and q, with q > p.");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&p,&q);

    for (difference=((q-p)/N),x=p; x<=q; x+=((q-p)/N))
    {
        y=(a)*x*x*x + (b)*x*x + (c)*x + (d);
        if (fabs(y)<0.01)
        {
            switch (counter)
            {
            case 0:
                root1 = x;
                counter++;
                break;
            case 1:
                if(fabs(x-root1)>0.01)
                {
                root2 = x;
                counter++;
                }
                break;
            case 2:
                if(fabs(x-root2)>0.01)
                {
                root3 = x;
                counter++;
                }
                break;
            }

        }
    }

    switch (counter)
    {
    case 0:
        printf("No real roots in the region. Oops!");
        break;
    case 1:
        printf("1 real root at x = %lf.",root1);
        break;
    case 2:
        printf("2 real roots, at x = %lf and %lf.",root1,root2);
        break;
    case 3:
        printf("3 real roots, at x = %lf, %lf and %lf.",root1,root2,root3);
        break;
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
#define disc(a,b,c) (b)*(b) - 4*(a)*(c)
#include <ctype.h>

int main(void)
{
    double a, b, c, root1, root2, imaginary;
    char do_again;
    int wew=0;

    for(do_again = 'Y'; do_again=='Y'; wew=0)
        //actually you can just leave it like so:
//for (do_again = 'Y'; do_again=='Y';)
    {
        printf("Input the coefficient a => ");
        scanf("%lf", &a);
        printf("Input the coefficient b => ");
        scanf("%lf", &b);
        printf("Input the coefficient c => ");
        scanf("%lf", &c);

        if (a == 0) /* If coefficient a is
zero, do the below. Note the double
equal or == sign */
        {
            printf("You have entered a = 0.\n");
            printf("Only one root: %8.3f", -c/b);
        }
        else  //otherwise do the below
        {
            if (disc(a,b,c) < 0)
            {
                root1 = (- b)/(2*a);
                root2 = root1;
                imaginary = sqrt(fabs(b*b-4*a*c))/(2*a);
                printf("The first root is %.3f + %.3fi\n", root1,imaginary);
                printf("The second root is %.3f - %.3fi\n", root2,imaginary);
            }
            else
            {
                root1 = (- b + sqrt(b*b-4*a*c))/(2*a);
                root2 = (- b - sqrt(b*b-4*a*c))/(2*a);
                printf("The first root is %8.3f\n", root1);
                printf("The second root is %8.3f\n", root2);
            }
        }

        printf("Solve again (y/n)?");
        fflush(stdin); //flushes the enter after getting the input for c
        do_again = toupper(getchar());

        while(do_again != 'Y' && do_again != 'N')
        {
            printf("Invalid input. Try again.\n");
            printf("Wanna solve again (y/n)?");
            fflush(stdin);
            do_again = toupper(getchar());

        }

    }


    return 0;

}

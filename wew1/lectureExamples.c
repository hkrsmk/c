#include <stdio.h>
#include <math.h>
int lectureExamples(void)
{

    double time = 0, max_time = 4, interval = 0.5, acceleration = 9.8, distance, vi, answer;

    printf("Input initial velocity =>");
    scanf("%lf",&vi);

    printf("Time Elapsed Distance Travelled\n" );
    printf("--------------------------------\n" );

    while (time <= max_time)
    {
        distance = 0.5*acceleration*time*time + vi*time;
        printf("%8.2f %8.2f\n", time, distance);
        time = time + interval;
    }

    /*Print out sum of 2 numbers*/
    printf("Continue? Y/N = 1/0 ");
    scanf("%lf",&answer);

    if (answer==1)
    {

        printf("Name: Li Jia Yang. \nHell yeah");

        int num1,num2,sum;
        num1=20;
        num2=39;
        sum = num1+num2;
        printf("\nThe numbers are %d, %d and %d.\n", num1,num2,sum);

        /* Calculate volume of a cylinder */

        float radius, height, volume;
        printf("\nThis program computes the volume of a cylinder.\n\n");
        printf("Input the radius => ");
        scanf("%f", &radius);

        printf("Input the height => ");
        scanf("%f", &height);
        /* Compute the volume. */
        volume = 3.14159*radius*radius*height;
        printf("The volume is %f.", volume);

        double a, b, c, root1, root2;
        printf("Input the coefficient a => ");
        scanf("%lf", &a);
        printf("Input the coefficient b => ");
        scanf("%lf", &b);
        printf("Input the coefficient c => ");
        scanf("%lf", &c);
        /* Compute the roots. */
        root1 = (- b + sqrt(b*b-4*a*c))/(2*a);
        root2 = (- b - sqrt(b*b-4*a*c))/(2*a);
        printf("The first root is %8.3f\n", root1);
        printf("The second root is %8.3f\n", root2);
    }
    return 0;
}


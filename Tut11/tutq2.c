#include <stdio.h>

int main(void)
{
    double x[]={0.0,1.0,2.0,8.0,12.0,5.0,14.0,7.0};
    int i=3;

printf ("%d %.1f\n", 4, &x);
printf ("%d %.1f\n",  i, x[i] );
printf ("%.1f\n", x[i] + 1);
printf ("%.1f\n", x[i] + i);
printf ("%.1f\n", x[i + 1]);
printf ("%.1f\n", x[i + i]);
printf ("%.1f\n", x[2 * i] );
printf ("%.1f\n", x[2*i - 3]);
printf ("%.1f\n", x[ (int)x[4] ]);
printf ("%.1f\n", x[i ++]);
printf ("%.1f", x[--i]);
x[i - 1] = x[i];
x[i] = x[i +1];
//x[i]-1 = x[1];

    return 0;
}

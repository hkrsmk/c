#include <stdio.h>
#define N 10000

double a,b,c,d,p,q,x;
double funct(double);
double sum(void);

int main(void)
{
    printf("I'm gonna integrate ax^3 + bx^2 + cx + d, between p and q. Input a, b, c, d, p and q plox. In that order.");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&p,&q);

    printf("\nThe integration of %.1lfx^3 + %.1lfx^2 + %.1lfx + %.1lf between %.1lf and %.1lf is %lf.",a,b,c,d,p,q,sum());
    printf("Global x = %lf",x);

    return 0;
}

double funct(double x)
{
    //printf("Entering funct. x in funct is %lf",x);
    return (a)*x*x*x + (b)*x*x + (c)*x + (d);
}

double sum(void)
{
    double difference = (q - p)/N,counter;
    if(q<p) {counter=p;p=q;q=counter;
    }
    //counter=p -> put the value of p into counter.
    //p=q -> put the value of q into p.
    //q = counter -> put the value of p into q.
    //counter is like a 'bridge' to store the value of p first.

    //for (counter=p; counter<=q; counter+=difference)
    /* ***note that this code no longer works, because
    "difference" was defined before we swopped the value of
    p and q. So actually, 'difference' is NOT a variable
    but a constant. and difference is a negative number
    so that means that counter will become more
    and more negative,
    means that it will never reach q, which implies an infinite loop*/

    for (counter=p; counter<=q; counter+=(q-p)/N)
    x+=(funct(counter)*(q-p)/N); //if I do this, I'll get a positive number
        //x+=(funct(counter)*difference); if I do this instead, I'll get a negative number.
    return x;
}

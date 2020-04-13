#include <stdio.h>
int sum_n21 (int* n) ;
int main (void)
{
    int n = 3, sum ;
    printf ("%d \n",n) ;     //n = 3
    sum = sum_n21 (&n) ;
    printf ("%d \n", n) ;   //0
    printf ("%d \n", sum) ; //10
    return 0 ;
}

int sum_n21 (int* n)
{
    int total = 0 ;
    for ( ; *n > 0 ; (*n)--)
    {
        total += *n ;
        printf ("%d %d \n", *n, total ) ; //3  6
                                            //2  9
                                            //1  10
    }
    return total ;
}

/*predicted result:
3
3 6
2 9
1 10
0
10

answer:
3
3 3
2 5
1 6
0
6
*/

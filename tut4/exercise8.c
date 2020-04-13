#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i = 0;

    srand((unsigned) time(NULL));
    while (i<100)
    {
        printf("Result of die roll: %d\n",(rand()%6 + 1));
        i++;
    }

    return 0;
}

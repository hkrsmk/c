#include <stdio.h>

int main(void)
{
    char c = -129; /* greater than max of 127. Min is -128*/
    printf("c = %d\n", c); /* print integer value of c */
    return 0;
}

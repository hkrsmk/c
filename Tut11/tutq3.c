#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, z [30] = {0};
    int *ptr;
    ptr = &x;
    y = *ptr;
    *ptr = 40 ;
    ptr = &z[0] ;
    printf("x=%d,y=%d,z[0]=%d",x,y,z[0]);
    return 0;
}




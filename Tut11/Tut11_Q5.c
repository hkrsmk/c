#include <stdio.h>

int x = 100;
int do_stuff(int *, int *);

int main(void)
{
   int z = 200;
   int *p1 = &x;
   int *p2 = &z;

   x = do_stuff(p1, p2);
   printf("x=%d, z=%d, *p1=%d, *p2=%d\n", x, z, *p1, *p2);

   return 0;
}

int do_stuff(int *p1, int *p2)
{
   int z = 300;
   *p1 = 400;
   p2 = &z;
   *p2 = x + z;
   printf("x=%d, z=%d, *p1=%d, *p2=%d\n", x, z, *p1, *p2);
   return (*p1 + *p2);
}

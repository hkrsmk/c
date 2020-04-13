/* Program int_char.c for fe1008 hands-on       */
/* Name:                                      */
/* Group:                                     */
/* Date:                                      */

#include <stdio.h>

int main(void)
{
  /* declaration */
  char c1, c2, c3;

  /* define values */
  c1 = 'A';
  c2 = 'a';
  c3 = c2 - c1;

  printf("The ASCII code of %c is %d\n", c1, c1);
  printf("The ASCII code of %c is %d\n", c2, c2);
  printf("The ASCII code of %c is %d\n", c3, c3);

  return 0;
}


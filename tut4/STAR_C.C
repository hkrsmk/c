#include <stdio.h>

int main(void)
{
  char ch = '#';
  int n = 5, i =1;

  //printf from i = 1 to 5
  //i.e. print from 0 till 4 leading spaces
  while (i <= n)
  {
    printf("%*c\n",i, ch);
    i = i + 1;

  }
  //the * is replaced by whatever the i was. So, * is 1 variable (* = i), c is another variable (c = ch).
  // i = 7 at this point
  /*

  prints this:
  #
   #
    #
     #
      #

      */

  while (i >= 1)
  {
      printf("%*c\n",i, ch);
      i -= 1;
  }

  return 0;
}

#include <stdio.h>

void staticfunc (void);

int main(void)
{
int count = 100;
printf("count in main is %d:\n", count);
staticfunc();
printf("count in main is %d:\n", count);
staticfunc();
printf("count in main is %d:\n", count);
staticfunc();

return 0;
}

void staticfunc (void)
{
static int count;
count ++;
printf("count in staticfunc is %d\n", count);
return;
}

#include <stdio.h>

void func (void);

int main(void)
{
int count = 100;
printf("count in main is %d:\n", count);
func();
printf("count in main is %d:\n", count);
func();
printf("count in main is %d:\n", count);
func();

return 0;
}

void func (void)
{
int count = 0;
count ++;
printf("count in func is %d\n", count);
return;
}

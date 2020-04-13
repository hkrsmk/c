#include <stdio.h>
void func1(int,int, int);
void func2(int, int, int*);
int main (void)
{
int x=1, y=2, z=0;
int *ptr=&z;
printf("z is %d\n",z);
func1(x,y,*ptr);
printf("z is %d\n",z);
func2(x,y,&ptr);
printf("z is %d",z);
return 0;
}
void func1(int x, int y, int z)
{
z=x+y;
}
void func2(int x, int y, int *ptr)
{
*ptr=x+y;
}

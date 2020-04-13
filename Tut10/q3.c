#include <stdio.h>
int x = 100;
int do_stuff(int*, int*);
int main(void)
{
    int z = 200;
    int* p1 = &x;
    int* p2 = &z;
    x = do_stuff(p1, p2); //x = do_stuff(&x,&z)
    printf("x=%d, z=%d, *p1=%d, *p2=%d\n", x, z, *p1, *p2);
    return 0;
}
int do_stuff (int *point1, int *point2)
{
    int z = 300;
    *point1 = 400;   //&x = 400;
    //point2 = &z;    //the LOCAL p2 now stores the address of the LOCAL z. which is 300.
    *point2 = x + z; //&z = x + z; z=300, x=400
    printf("x=%d, z=%d, *p1=%d, *p2=%d\n", x, z, *point1, *point2);
    return (*point1 + *point2);
}


/* predicted output:
x=400,z=300,*p1=400,*p2=700
x=1100,z=700,*p1=1100,*p2=700


actual output:
x=400,z=700,*p1=400,*p2=700
x=1100,z=200,*p1=1100,*p2=200

if you black out line 17, the output:
x=400,z=300,*p1=400,*p2=700
x=1100,z=700,*p1=1100,*p2=700

line 17 makes the local copy of p2 point towards &z.
*/

#include<stdio.h>
int main(void)
{
    int n1, n2, n3, n4, smallest;

    printf("Enter 4 integers.");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
    smallest = n1;
if(n2 < smallest)
smallest = n2;

if (n3 < smallest)
smallest = n3;

if (n4 < smallest)
smallest = n4;

    printf("%d is the smallest integer.", smallest);
    return 0;
}

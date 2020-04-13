#include <stdio.h>

int main(void)
{
    int num[100]={0};
    int *p1, *p2;

p1=&num[0];
p2=&num[99];
printf("p1=%u,p2=%u,p2-p1=%u",p1,p2,p2-p1);
    return 0;
}


#include <stdio.h>
int main(void)
{
    int num1=1, num2=2;
    int *ptr1=&num1, *ptr2=&num2, *ptr3;
    int num3;
    num3=num1+num2;
    printf("num3 = %d\n",num3);
    ptr3=ptr1;
    printf("num3 = %d\n",num3);
    num3=*ptr1+*ptr3;
    printf("num3 = %d\n",num3);
    ptr1=ptr2;
    printf("num3 = %d\n",num3);
    num3=*ptr1+ *ptr2 + *ptr3;
    printf("num3 = %d\n",num3);
    *ptr1 = 0;
    *ptr2 = 0;
    *ptr3 = 0;
    /* %u ptr (prints the address held inside ptr)
%u *ptr (prints the value of whatever ptr is pointer to)
%u &ptr (prints the address of ptr) */

    printf("%d %u %u %d %u %u",*ptr1,ptr2,&num2,*ptr3,&ptr2,*ptr2);
    return 0;
}

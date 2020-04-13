//tests output of different % functions for pointer.
//why does %p fptr NOT show the same value as %p (void*)&num1 ?
//how come %p &fptr = %p &num1
//but %u &fptr =/= %u &num1?

#include <stdio.h>

int main(void)
{
    float *fptr,num1=7.3;
    fptr = &num1;
    printf("%p\n",fptr);
    printf("%%p fptr=%p\n %%p &fptr=%p\n",fptr,&fptr);
    printf("%%p &num1=%p\n",&num1);

printf("%%u fptr=%u\n %%u &fptr=%u\n%%u &num1 = %u\n",fptr,&fptr,&num1);
printf("%%d &num1 =%d\n",&num1);
    printf("%%p (void*)&num1=%p\n",(void*)&num1);

    printf("%u",num1);
    //printf("%f %f\n",*fptr,num1);
    //printf("%u",num1);
    return 0;
}

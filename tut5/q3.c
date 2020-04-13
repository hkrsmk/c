#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter the year to be tested => ");
    scanf("%d",&year);
    //fflush(stdin);
    if (year%4 == 0 && year%100 != 0 || year%400 == 0)
printf("The year %d is a \"leap year\".",year);
        else
        printf("No, the year %d is not a \"leap year\".\n",year);
        /* if I include main(); without fflush(stdin)
        the loop will become infinite when i enter a character like k. Because I guess
        it'll just read the "enter" key I pressed next forever? So enter the year to be tested
        is always \n which is always not a leap year, then run again and again...
        */
        //main();
        /* problem 2: if I enter a character, %d ends up being the same no matter what character I enter
        for both the calling main again and also without calling main again*/
    return 0;
}

#include <stdio.h>

int main(void)
{
    char input;
    printf("Enter a letter.");
    scanf("%c",&input);
    if(input>= 97 && input<=122) //or, if input >= 'a' && input <= 'z'. Don't have to
                                //do the conversion manually
        printf("\'%c\' is a lowercase letter.",input);
    else
        printf("\'%c\' is not a lowercase letter.",input);
    return 0;
}

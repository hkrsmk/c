#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;
    printf("Input a character");
    scanf("%c",&input);

    if(isalpha(input))
    {
        if(islower(input))
            input=toupper(input);
        printf("The character is %c",input);
    }
    else
    {
        if(isdigit(input))
            printf("%c is a digit",input);
        else printf("Not a digit, not an alphabet.");
    }
    return 0;
}

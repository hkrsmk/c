#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char userInput;
    printf("Enter a character.");
    scanf("%c",&userInput);

    if(islower(userInput))
    {
        printf("It's a lowercase character.");
    }
    else
        printf("Not a lowercase character.");

    return 0;
}

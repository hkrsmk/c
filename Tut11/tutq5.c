#include <stdio.h>

int main(void)
{
    char s[20]="\0",t[20]="\0";
    //must define the size of the string. If not,
    //there will be bugs when scanf gets the next string. (will overwrite the first string)
    printf("Enter 2 strings. I'll calculate the integer difference when it first deviates.");
    printf("Enter the first string.");
    //fflush(stdin);
    scanf("%[^\n]s",s); //get input while it is NOT a '\n'
    printf("You entered %s.",s);
    getchar();
    printf("Enter the second string.");
    scanf("%[^ ]s",t); //get until a space is entered
    printf("You entered %s and %s.",s,t);
    printf("the result is %d",mystrcmp(s,t));
    return 0;
}
int mystrcmp(char *s, char *t)
{
    printf("Entering mystrcmp.");
    int i;
    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

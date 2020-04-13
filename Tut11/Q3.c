/*

Explain the operation of the following function. void mystrcpy(char s[], char t[])
{
int i = 0;
while ((s[i] = t[i]) != ‘\0’)
i++;
}

Write a main program to test the function.


*/

#include <stdio.h>
void mystrcpy(char s[], char t[]);

int main (void)
{
    char s[80]="",t[80]="";
    printf("Enter a string of characters. This is stored in array t.");
    scanf("%[^\n]s",&t); //or, scanf("%[^\n]s",t); will do. since t=&t[0].
    printf("t contains %s.",t);
    mystrcpy(s,t);
    printf("\"%s\" is stored in s. \"%s\" is stored in t.",s,t);
    return 0;
}

void mystrcpy(char s[], char t[])
{
int i = 0;
printf("inside mystrcpy, t is %s.",t);
while ((s[i] = t[i]) != '\0')
i++;
}

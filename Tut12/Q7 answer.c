#include <stdio.h>
#define MAX_WORD 81

/*
This code stores an array of integers.
words[1] == no. of words with length 1.
words [2]== no. of words with length 2.
and so on.
*/
int main(void)
{
    FILE *fp;
    int words[MAX_WORD]= {0}, len=0, i, c;
    char ch=' ';
    fp=fopen("input.txt", "a");
    fputc(ch, fp);
    fclose(fp);
    fp=fopen("input.txt", "r");
    if(fp==NULL)
    {
        printf("Could not open input.txt!\n");
        return 1;
    }
    while ((c=getc(fp))!=EOF)
        switch (c)

        {
        case '\n':
        case ' ':
        case '\t':
            words[len]++;
            len=0;
            break;
        default:
            len++;
        }
    printf("Word's length:\n");
    for (i=1; i<MAX_WORD; i++)
    {
        if(words[i]>0)

        {
            printf("%d :",i);
            for (; words[i]>0; words[i]--)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
#define WORD_LENGTH 81

  int length=0,no_of_words=0,n;

int main(void)
{
    FILE *input;
    int word_Count[WORD_LENGTH]= {0};
    char c,fileName[80]="\0";

printf("Input file name to open, including the extension\n");
    scanf("%s",&fileName);

    input = fopen(fileName,"r");
    if (input==NULL)
    {
        printf("CAN'T OPEN");
        return 1;
    }

    /*
    what the programme needs to do:
        1. for each word, count the length of the word
        2. if length = 1, ++ to word_Count[1]; if length = 2, ++ to word count 2, etc

                               3. display * according to the value stored in word_Count.

                               */

                            /*
                            why can't:
                            c=fgetc(input);
                            while (c!=EOF)
                            {code}
                           ?
                            Because in this case, c is only obtained once. Then the c value is fixed already.
                            */

while((c=fgetc(input))!=EOF)
    //^in this case, c is always redefined and each time, the computer will get another c
{
    /*
    explanation of the code:
    before the file ends,
    if you meet a non-whitespace character,
        you +1 to the length.
        once you meet a whitespace character,
        you'll have the length of that 1 word.
        So, just ++ to the relevant position in the array.
        Then, set length to 0 again so that
        the next word can be counted.
    */
        switch (c)
    {
    case ' ':
    case '\t':
    case '\n':
        word_Count[length]++;
        length=0;
        break;
         default:
        {
            length++;
        }
    }
}

//to deal with the case if the file ends like "lorem ipsum" instead of "lorem ipsum ".
if(c=EOF)
word_Count[length]++;

    //display * according to the value stored in word_Count.
    for (length=1; length<WORD_LENGTH; length++)
        if (word_Count[length]!=0)
        {
            printf("%d: ",length);
            for (n=0; n<word_Count[length]; n++)
                printf("*");
                printf("\n");
        }

    fclose(input);
    return 0;
}



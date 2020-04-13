#include <stdio.h>
#include <ctype.h>
//^ for the isspace(FILE *) function.

int main(void)
{
    char words[80]="\0";
    FILE *input;
    int n;
    if((input = fopen("G:/school/Y1S1/Computing/Tut12/input.txt","r"))==NULL)
    {
        printf("Can't read file");
        return 1;
    }
    /*I thought the question was asking,
    print the length of the current word in histogram form.
    So yeah.
    */
    for(n=0; fscanf(input,"%c",&words[n])!=EOF; n++)
    {
        if(isspace(words[n])==0)
        {
            printf("*");
        }
        else if (isspace(words[n-1])==0&&isspace(words[n])!=0) //restrict to print just 1 \n for all \n after the last 'word' character
        {
                        printf("\n");
                        words[0]='\0'; //clear the array
        }
    }

    fclose(input);
    return 0;
}

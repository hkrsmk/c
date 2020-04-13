#include <stdio.h>
#include <ctype.h>

int num_lines(FILE*);
FILE *open_file;

int main(void)
{
    char filename[80]="\0";

    printf("Enter file name.");
    scanf("%s",&filename);

    if((open_file=fopen(filename,"r"))==NULL)
    {
        printf("Can't open");
        return 1;
    }

    printf("Lines of text in the file %s is %d",filename,num_lines(open_file));
    fclose(open_file);
    return 0;
}

int num_lines (FILE *open_file)
{
    int lines_of_text=0;
    char c,line_length=0;
//check, for a line, as long as there's ONE non-whitespace character, ++.

    while((c=fgetc(open_file))!=EOF)
    {
        switch(c)
        {
        case '\t':
        case ' ':
            break;
        case'\n':
        {
            if (line_length!=0)
                lines_of_text++;
            line_length=0;
        }
        break;
        default:
            line_length++;
            break;
        }
    }
//no need this code if the last character is \n
    if (line_length!=0&&c==EOF)
        lines_of_text++;
    return lines_of_text;
}

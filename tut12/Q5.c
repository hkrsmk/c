#include <stdio.h>

int main(void)
{
    FILE *in,*out;
    char c=0;
    if((in=fopen("G:/school/Y1S1/Computing/Tut12/in.txt","r"))==NULL)
    {
        printf("Can't open file.");
        return 1;
    }
    out = fopen("out.txt","w");

    //^I should check if this file can be created, or not.
    //So, I should do a if(out==NULL)
    //printf can't create file
    //return 1
/*
TWO ANSWERS. THIS IS MY ANSWER 1.

    do {
        printf("entered while loop");
        fscanf(in,"%c",&c);
        fprintf(out,"%c",c);
    }
    while (feof(in)==0);
*/

/*
If fscanf reads 'EOF' instead of any character, it'll set feof as != 0.
Thus when feof checks the status of the file 'in', it'll get !=0
for my second answer below,
    I suppose the check is done right after fscanf scans %c.
    fscanf returns the no. of arguments it has scanned. (aka, no of %'s captured
                                                         successfully.)
                                                         In this case, it's 1.
So if it meets EOF, it'll return EOF.

on the return value of fscanf (from cplusplus):
On success, the function returns the number of items of the argument list successfully filled.
This count can match the expected number of items or be less (even zero) due to a matching failure, a reading error, or the reach of the end-of-file.

If a reading error happens or the end-of-file is reached while reading, the proper indicator is set (feof or ferror).
And, if either happens before any data could be successfully read, EOF is returned.

***it seems that when EOF is reached while doing fscanf, fscanf will return BOTH EOF and ALSO set feof to 'EOF'.
If not, ver 1 of my answer won't work because fscanf will never set feof to anything (if it ONLY returns EOF)

*/
//MY SECOND ANSWER. I prefer it because less lines of code hehe.
//*
  while ((fscanf(in,"%c",&c))!=EOF)
    {
        printf("entered while loop");
        fprintf(out,"%c",c);
        //just to test if I don't need a variable for fprintf
        //fprintf(out,"yesss");
    }

//*/
    fclose(in);
    fclose(out);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int findRoots();
int lectureExamples();
int tutorial2();
int main()
{
    int rootans;
    tutorial2();

    printf("Run findRoots? Y/N \n\n");
    scanf("%i",&rootans);
    if (rootans == 1)
    {
        findRoots();
    }
    else
    {
        printf("Running lectureExamples. \n\n");
        lectureExamples();
    }
    printf("\n\nAll done!");
    return 0;
}

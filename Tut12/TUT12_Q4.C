#include <stdio.h>
int main(void)
{
FILE *fptr;

fptr = fopen("output.txt", "w");
if (fptr == NULL)
{
printf("Could not create output.txt!\n");
return 1;
}
char c = getchar();
while (c != EOF)
{
fputc(c, fptr);
c = getchar();
}
fclose(fptr);
return 0;
}

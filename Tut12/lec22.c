#include <stdio.h>
int main(void)
{
int day,mth,yr;
char name[10];
double gpa;
FILE *fp_read;
if((fp_read=fopen("D:/school/Y1S1/Computing/Tut12/Class.txt","r"))==NULL)
{
printf("Cannot open the file");
return 1;
}
fscanf (fp_read, "%s %d / %d / %d %lf" ,name, &day,&mth,&yr,&gpa);
printf ("%10s %3d/%2d/%2d %.2f \n",name,day,mth,yr,gpa);
fscanf (fp_read, "%s %d / %d / %d %lf" ,name, &day,&mth,&yr,&gpa);
printf ("%10s %3d/%2d/%2d %.2f \n",name,day,mth,yr,gpa);
fscanf (fp_read, "%s %d / %d / %d %lf" ,name, &day,&mth,&yr,&gpa);
printf ("%10s %3d/%2d/%2d %.2f \n",name,day,mth,yr,gpa);
fclose(fp_read);
return 0;
}

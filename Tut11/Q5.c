#include <stdio.h>

void print_Matrix(int [][3], int, int, char [30]);
void add_Matrix(int [][3], int[][3], int[][3], int,int,char [30],char [30],char [30]);
char p_name[30]="\0",q_name[30]="\0",r_name[30]="\0";
int i,j;

int main(void)
{
    int p[3][3] = { {1, 3, -4 }, { 1, 1, -2}, { -1, -2, 5} };
    int q[3][3] = { { 8, 3, 0 }, { 3, 10, 2 }, { 0, 2, 6 } };
    int r[3][3]= {0};
    printf("Matrix addition p+q=r. Enter names for p, q and r, separated by a newline key/enter key.");
    scanf("%[^\n]s",p_name);
    fflush(stdin); //so that the 'tab' is flushed away and won't affect the next few.
    scanf("%[^\n]s",q_name);
    fflush(stdin);
    scanf("%[^\n]s",r_name);

    print_Matrix(p,3,3,p_name);
    print_Matrix(q,3,3,q_name);
    print_Matrix(r,3,3,r_name);
    add_Matrix(p,q,r,3,3,p_name,q_name,r_name);

    return 0;
}

void print_Matrix(int p[][3],int row, int column, char p_name[])
{
    printf("====Matrix %s====\n",p_name);
    for (i=0; i<row; printf("\n"),i++)
        for(j=0; j<column; j++)
            printf("%d\t",p[i][j]);
    printf("\n");
}

void add_Matrix (int p[][3],int q[][3],int r[][3],int row, int column, char p_name[],char q_name[],char r_name[])
{
//assume that matrices are the same size.
//if I can't assume, will get user input of array sizes
//then write if(array1row==array2row&&array1column==array2column)
//then proceed

    printf("Adding %s and %s to %s...\n\n",p_name,q_name,r_name);
    for (i=0; i<row; i++)
        for(j=0; j<column; j++)
            r[i][j]=p[i][j]+q[i][j];
    print_Matrix(r,3,3,r_name);
}

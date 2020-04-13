#include <stdio.h>

void print_Matrix(int [][3], int, int, char [30]);
int multiply_p_row_and_q_column(int,int);
void multiply_Matrix(int [][3], int[][3], int[][3], int,int,char [30],char [30],char [30]);
char p_name[30]="\0",q_name[30]="\0",r_name[30]="\0";
int i,j;
int p[3][3] = { {1, 3, -4 }, { 1, 1, -2}, { -1, -2, 5} };
int q[3][3] = { { 8, 3, 0 }, { 3, 10, 2 }, { 0, 2, 6 } };

int main(void)
{
    int r[3][3]= {0};
    printf("Matrix multiplication p+q=r. Enter names for p, q and r, separated by a newline key/enter key.");
    scanf("%[^\n]s",p_name);
    fflush(stdin); //so that the 'enter' is flushed away and won't affect the next few.
    scanf("%[^\n]s",q_name);
    fflush(stdin);
    scanf("%[^\n]s",r_name);

    print_Matrix(p,3,3,p_name);
    print_Matrix(q,3,3,q_name);
    print_Matrix(r,3,3,r_name);
    multiply_Matrix(p,q,r,3,3,p_name,q_name,r_name);

    return 0;
}

void print_Matrix(int p[][3],int row, int column, char p_name[])
{
    printf("\n====Matrix %s====\n",p_name);
    for (i=0; i<row; printf("\n"),i++)
        for(j=0; j<column; j++)
            printf("%d\t",p[i][j]);
    printf("\n");
}

int multiply_p_row_and_q_column(int p_row,int q_column)
{
    int counter,total=0;
    for (counter=0; counter<3; counter++)
        total += p[p_row][counter]*q[counter][q_column];
    return total;
}

void multiply_Matrix (int p[][3],int q[][3],int r[][3],int row, int column, char p_name[],char q_name[],char r_name[])
{
//assume that matrices are the same size.
//if I can't assume, will get user input of array sizes
//then write if(array1column==array2row)
//then proceed
    printf("Multiplying %s and %s, storing to %s...\n\n",p_name,q_name,r_name);
    for(i=0; i<3; i++) //for each row
        for(j=0; j<3; j++) //for each column
        {
                        r[i][j] = multiply_p_row_and_q_column(i,j);
            //keep row fixed at 0, while columns get filled first.
            //once column is filled, fill in the next row.
            printf("Value in %s at (%d,%d) position is %d.\n",r_name,i,j,r[i][j]);
        }

    print_Matrix(r,3,3,r_name);
}

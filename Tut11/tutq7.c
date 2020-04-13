#include <stdio.h>

void print_matrix(int[][3],int,int);
int main(void)
{
    int array [][3] = {{7,8,9},{10,11,12},{13,14,15}};
    print_matrix(array,3,3);
    return 0;
}

void print_matrix(int array[][3],int row_size, int column_size)
{
    int i,j;
    for (i=0; i<row_size; i++)
    {
        for(j=0; j<column_size; j++)
        {
            if (j==0)
                printf("%d",array[i][j]);
            else
                printf("\t %d", array[i][j]);
        }

        printf("\n");
    }

}

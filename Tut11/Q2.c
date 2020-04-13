#include <stdio.h>
/*

Write a program to find the maximum of all the elements of an int array a[10] =
{1, 2, 0, 0, 4, 5, 6, 9, 9, 17}. The main program uses the following two function prototypes to print the array and find the maximum value respectively.

void print_array(int a[ ], int arraysize);
int max_array(const int a[ ], int arraysize);



*/


void print_array(int a[], int arraysize);
int max_array(const int a[], int arraysize);
int i,max;

int main(void)
{
    int a[10]= {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
    print_array(a,10);
    max_array(a,10);
    printf("The max number in the array is %d.",max);
    return 0;
}

void print_array(int a[], int arraysize)
{
    for(i=0; i<arraysize; i++)
        printf("%d\t",a[i]);
}

int max_array(const int a[], int arraysize)
{
    for(i=0; i<arraysize; i++)
        if(a[i]>max)
            max=a[i];
            printf("wew");  //< this line can potentially screw with code,
            //esp if I assign a variable to the output of the function:
            //eg a = max_array(a,10);
            //to fix, I put max into a global variable
            //so you don't have to have
            //variable = max_array at all.
    return max;
}

/* Write  a  function  called  second  which  takes,  as  parameters,  an  array  of positive integers and also an integer representing the size of the array.
The function returns the value of the second largest integer in the array.
If the largest integer in the array repeats, then the second largest integer is also the largest. For example, if we have {1, 2, 3, 4, 5, 5 }, the second largest integer is
5. The function should not change the contents of the array in any way. You
can assume that the size of the array is at least two.

HINT:  Keep  track  of  the  largest  number  as  well  as  the  second  largest number seen so far at all times.
*/

#include <stdio.h>

int second(int [], int arraySize);
int array[6]= {1,2,3,4,5,5};

int main(void)
{
    printf("The 2nd largest number is %d",second(array,6));
    return 0;
}

int second(int a[], int arraySize)
{
    int second_largest=0,largest=0,count;
    for(count=0; count<arraySize; count++)
        if(a[count]>=largest)
        {
            second_largest=largest;   //store the current largest in second_largest
            largest=a[count];//replace largest with the new largest
        }
    return second_largest;
}

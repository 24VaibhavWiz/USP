#include <stdio.h>
#include <stdlib.h>

//int SumOfElements(int A[])
int SumOfElements(int A[])
{
int size=sizeof(A)/sizeof(A[0]);
printf("size of A in SOE:=%d and size of A[0] in SOE:=%d\n", sizeof(A), sizeof(A[0]));
int i, sum=0;
for(i=0; i<size; i++)
sum+=A[i];

return sum;
}



int main()
{

int A[]= {1, 2, 3, 4, 5};
int size=sizeof(A)/sizeof(A[0]);
printf("size of A in main:=%d and size of A[0] in main:=%d\n", sizeof(A), sizeof(A[0]));
int total =SumOfElements(A);
//int total =SumOfElements(A);
printf("Sum of lelements = %d \n", total);
}

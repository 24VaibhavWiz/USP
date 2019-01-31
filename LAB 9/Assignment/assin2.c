#include"stdio.h"
#include"unistd.h"

int main(void)
{
	fork();
	printf("ITER\n");
	fork();
	printf("ITER\n");
	fork();
	printf("ITER\n");
	fork();
	
	printf("ITER\n");
	//printf("ITER\n");
	//sleep(5);
	return 0;
}

//2^n no. of times

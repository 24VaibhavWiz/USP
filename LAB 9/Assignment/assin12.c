#include"stdio.h"
#include"unistd.h"

int main()
{
	fork();
	fork() || fork();
	fork();
	printf("Really Interestingn\n");\
	sleep(3);
}

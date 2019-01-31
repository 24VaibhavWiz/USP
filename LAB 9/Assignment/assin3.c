#include"stdio.h"
#include"unistd.h"
#include"sys/types.h"

int main()
{
	printf("HELLO\n");
	fork();
	printf("HELLO\n");
	fork();
	printf("HELLO\n");
	fork();
	printf("HELLO\n");
	fork();
	sleep(2);	
}

//"HELLO is diplayed 15 times 2^n - 1"

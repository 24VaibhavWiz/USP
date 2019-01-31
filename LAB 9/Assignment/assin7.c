#include"stdio.h"
#include"stdlib.h"
#include"sys/types.h"
#include"unistd.h"

void forkexample()
{
	if(fork() == 0)
		printf("Hello from Child\n");
	else
		printf("Helo from Parent\n");
}

int main()
{
	forkexample();
}	

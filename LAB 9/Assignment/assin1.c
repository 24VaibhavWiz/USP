#include"stdio.h"
#include"unistd.h"

int main()
{
	int pid,pid2;
	pid = fork();
	if(pid)
	{
		pid2 = fork();
		printf("ITER\n");
	}
	
	else
	{
		printf("ITER\n");
		pid2 = fork();
	}
}

//No. of times "ITER" is displayesd is 3

#include"stdio.h"
#include"stdlib.h"
#include"sys/types.h"
#include"unistd.h"
#include"sys/wait.h"

int main()
{
	pid t pid, pid1;
	int status;
	pid = fork();
	if (pid < 0)
	{ 
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	else if (pid == 0)
	{ 
		pid1 = getpid();
		printf("child: pid = %d",pid);
		printf("child: pid1 = %d",pid1);

	}
	else
	{
		pid1 = getpid();
		printf("parent: pid = %d",pid);
		printf("parent: pid1 = %d",pid1);
		wait(&status);
	}
return 0;
}

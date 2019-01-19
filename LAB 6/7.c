//7 and 8
#include"stdio.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"

int main()
{
	int pid,pid2;
	pid=fork();
	if(pid)
	{
		printf("parent id : %d",getpid());
		pid2=fork();
		printf("chlid id : %d",getpid());
		printf("iter\n");
	}
	else
	{
	
		printf("parent id : %d",getpid());
		printf("iter\n");
		pid2=fork();
		printf("chlid id : %d",getpid());
	}
	
}

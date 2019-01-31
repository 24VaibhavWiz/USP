#include"stdio.h"
#include"stdlib.h"
#include"sys/types.h"
#include"unistd.h"

int main()
{
	pid_t childpid, mypid;
	mypid = getpid();
	childpid = fork();
	if (childpid == -1) 
	{
		perror("Failed to fork");
		return 1;
	}
	if (childpid == 0)
	printf("I am child %ld, ID = %ld\n",(long)getpid(),(long)mypid);
	else
	printf("I am parent %ld, ID = %ld\n", (long)getpid(), (long)mypid);
}

#include"stdio.h"
#include"stdlib.h"
#include"sys/types.h"
#include"unistd.h"
#include"sys/wait.h"
#include"errno.h"

pid_t waitForAllChld(int *loc);
int main (int argc, char *argv[])
{
	pid_t childpid = 0;
	int i, n;
	int status;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s processes\n", argv[0]);
		return 1;
	}
	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
	{
		childpid=fork();
		if (childpid <=0)
			break;
	}
	while(waitForAllChld(NULL)>0);
		fprintf(stderr, "i:%d process ID:%ld parent ID:%ldchild ID:%ld\n",i, (long)getpid(), (long)getppid(),
		(long)childpid);
		return 0;
	}
	
pid_t waitForAllChld(int *loc)
{
	int retval;
	while(((retval=wait(loc))==-1) && (errno==EINTR));
	return retval;
}

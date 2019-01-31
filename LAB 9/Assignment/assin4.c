#include"stdio.h"
#include"stdlib.h"
#include"unistd.h"

int main()
{
	pid_t childpid;
	int i, n = 3;
	for(i = 1; i < n; i++)
	{
		childpid = fork();
		if(childpid == -1)
			break;
	}
	printf(" i :- %d process ID :- %ld\n",i,(long)getpid());
}

//printf statement will be executed 4 times

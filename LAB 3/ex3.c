#include"stdio.h"
#include"unistd.h"
int main(void)
{
	int pid = fork();
	if(pid==0)
	{
		printf("I am child %ld\n",(long)getpid());
		printf("I am child %ld\n",(long)getppid());
		kill(pid);
	}
	
	else
	{	
		printf("I am parent %ld\n",(long)getpid());
		printf("I am parent %ld\n",(long)getppid());
		wait(NULL);
		//kill(pid);
	}
}	

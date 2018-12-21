#include"stdio.h"
#include"unistd.h"
int main(void)
{
	int pid = fork();
	if(pid==0)
	{
		printf("I am child\n");
		kill(pid);
	}
	
	else
	{	
		printf("I am parent\n");
		wait(NULL);
		//kill(pid);
	}
}	

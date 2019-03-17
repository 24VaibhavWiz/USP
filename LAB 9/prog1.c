#include"stdio.h"
#include"unistd.h"

int main()
{
	pid_t firstch, secondch;
	pid_t returnR;

	firstch = fork();
	
	if(firstch>0)
	{
		printf("I am Parent Proccess ID %d and my Child is in Execution...\n",getpid());
		returnR = wait(NULL);
		printf("I am Parent Proccess ID %d and my Child is in terminated... and wait rerurn value is %d\n",getpid(),returnR);
	}
	
	if(firstch == 0)
	{
		printf("I am Parent Proccess ID %d and my Child is in Execution1...\n",getpid());
		int sum = 99+99;
		printf("Sum is %d\n",sum);
	}
	
}

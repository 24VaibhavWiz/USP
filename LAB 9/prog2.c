#include"stdio.h"
#include"unistd.h"
#include"sys/wait.h"
#include"sys/types.h"

int main()
{
	pid_t firstch, secondch;
	pid_t waitpidReturn;
	int srtptr;

	firstch = fork();
	
	if(firstch > 0)
	{
		printf("I am Parent Proccess ID %d and my Child is in Execution...\n",getpid());

		secondch = fork();
		
		if(secondch > 0)
		{
			printf("I am Child Proccess ID %d and my mom %d\n",getpid());
			waitpidReturn = waitpid(firstch,NULL,0);
			printf("I am Parent Proccess ID %d and my Child is in terminated... and wait rerurn value is %d\n",getpid(),waitpidReturn);
		}
	}
	
	if(firstch == 0)
	{
		printf("I am Parent Proccess ID %d and my Child is in Execution1...\n",getpid(),getppid());
		int sum = 99+99;
		printf("Sum is %d\n",sum);
		
		if(secondch == 0)
		{
			int sum2 = 98+98;
			printf("I am Child Proccess ID %d and my mom %d\n",getpid());
			printf("Sum2 is %d\n",sum2);
		}
	}
	
}

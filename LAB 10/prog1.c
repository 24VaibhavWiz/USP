#include"stdio.h"
#include"unistd.h"
#include"sys/wait.h"
#include"stdlib.h"

main()
{
	pid_t childPID;
	childPID = fork();
	if(childPID == -1)
	{
		perror("FAiled to fork()\n");
		return 1;
	}
	
	if(childPID == 0)
	{	
		execl("/home/student/1641012206/a.out","","",NULL);
		return -1;
		print("child\n");
		perror("child failed to exec is\n");
		return 1;
	}

	if(childPID != wait(NULL))	
	{
		perror("Parent failed to wait due to signal error\n");
		return 1;		
	}
}

#include"stdio.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"
#include"sys/wait.h"

int main()
{
	int pid  = fork();
	if(pid == 0)
		execl("bin/ls","ls","-l",NULL);	
}

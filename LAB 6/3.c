#include"stdio.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"

int main()
{
	int pid  = fork();
	if(pid>0)
		sleep(5);
	else
		exit(0);
}

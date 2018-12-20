#include"stdio.h"
#include"unistd.h"

void main()
{
	printf("PID : %d\n",(long)getpid());
	printf("PPID : %d\n",(long)getppid());
	while(1){};
}

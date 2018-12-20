#include"stdio.h"
#include"unistd.h"

void main()
{
	printf("PID : %d\n",(long)getpid());
	printf("PPID : %d\n",(long)getppid());
	printf("UID : %d\n",(long)getuid());
	printf("GID : %d\n",(long)getgid());
	printf("EGID : %d\n",(long)getegid());
	printf("EUID : %d\n",(long)geteuid());
	while(1){};
}

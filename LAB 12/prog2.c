#include"stdio.h"
#include"unistd.h"
#include"fcntl.h"
#include"sys/types.h"
#include"errno.h"

int main()
{
	int fd1, fd2, fd3, dupret, fd4 = 8;
	char buffer[12];
	printf("PID :- %ld\n",(long)getpid());
	fd1 = ("read.c",O_RDONLY);
	fd2 = ("read.c",O_RDONLY);
	fd3 = ("select.c",O_RDONLY);

	dupret = dup2(fd1,fd3);

	if(dupret == -1)
	{
		perror("dup2 error");
		return 1;
	}
	printf("Dup2 return = %d\n",dupret);
}

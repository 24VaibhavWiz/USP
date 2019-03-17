#include"stdio.h"
#include"unistd.h"
#include"fcntl.h"
#include"sys/types.h"
#include"errno.h"

int main()
{
	int fd1, fd2, fd3, dup2ret;
	char buffer[12];
	printf("PID :- %ld\n",(long)getpid());
	fd1 = ("read.c",O_RDONLY);
	fd2 = ("read.c",O_RDONLY);
	fd3 = ("select.c",O_RDONLY);
	dup2ret = dup2(fd,19);
	
	if(dup2ret == -1)
	{
		perror("dup2 error");
		return 1;
	}
	printf("Dup2 return = %d\n",dup2ret);
}

// output of Question no.5 and no. 6:- BAD FILE DESCRIPTOR


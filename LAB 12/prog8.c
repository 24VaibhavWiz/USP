#include"stdio.h"
#include"unistd.h"
#include"fcntl.h"
#include"sys/types.h"
#include"errno.h"

int main()
{
	int fd1, fd2, n;
	printf("PID :- %ld\n",(long)getpid());
	fd1 = open("target.txt",O_RDONLY);
	close(2);
	printf("DO NOT ENTER ANYTHING\n");
	scanf("%d",&n);

	dup(fd1);
	printf("DO NOT ENTER ANYTHING\n");
	scanf("%d",&n);
	dup2(fd1,fd2);
	printf("DO NOT ENTER ANYTHING\n");
	scanf("%d",&n);
}

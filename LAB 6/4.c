#include"stdio.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"
#include"sys/wait.h"

int main()
{
	int pid = fork();
	if(!pid)
		execlp("pwd","pwd",NULL);
	else
		printf("Displaying long list current directory :- \n\n");
}

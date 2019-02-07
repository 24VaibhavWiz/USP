#include"stdio.h"
#include"sys/time.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"

int main (int argc, char *argv[])
{
	pid_t childpid = 0, master;
   	int i, n;
   	if (argc != 2)
   	{   
      	fprintf(stderr, "Usage: %s processes\n", argv[0]);
      	return 1;
   	}
   	
   	n = atoi(argv[1]);
	printf("Master id :- %ld \n", (long)getppid());
   	
   	for (i = 1; i < n; i++)
      if (childpid = fork())
      {
         printf("break \n");
         break;
      }
   
   fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n", i, (long)getpid(), (long)getppid(), 			 (long)childpid);
}

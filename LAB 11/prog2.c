#include"stdio.h"
#include"sys/time.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"
#include"string.h"

int main()
{
	fd_set rfds;
    //fd_set wfds;
    struct timeval tv;
    int sretval;
	int fd;
	char buffer[100];
	int ret;
	fd=0;
	while(1)
	{
 		FD_ZERO(&rfds);
    	FD_SET(fd, &rfds);
 		tv.tv_sec = 5;
    	tv.tv_usec = 0;
  		sretval = select(2, &rfds, NULL, NULL, &tv);
		if(sretval == 0)
			printf("Timeout\n");
		
		else
		{
			printf("sretval=%d\n",sretval);
			memset((void*)buffer,0,100);
			ret=read(fd,(void *) buffer,10);
			
			if (ret==-1)
				printf("error\n");			
			else
			{
				buffer[10]='\0';
				printf("Buffer = %s\n",buffer);
			}

		}
	}
}

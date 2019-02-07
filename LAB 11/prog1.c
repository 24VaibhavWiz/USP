#include"stdio.h"
#include"sys/time.h"
#include"sys/types.h"
#include"unistd.h"

int main()
{
	fd_set rfds, wfds, efds;
	struct timeval tv;
	int retval;
	
	FD_ZERO(&rfds);
	FD_SET(0, &rfds);
	//FD_ZERO(&wfds);
	//FD_SET(1, &wfds);
	FD_ZERO(&efds);
	FD_SET(1, &efds);
	
	tv.tv_sec = 5;
	tv.tv_usec = 0;
	retval = select(2, &rfds, NULL, NULL, &tv);
	
	if(retval == -1)
    	perror("select()");
    else if(retval)
    	printf("Data is available now value of retval = %d\n", retval);
    else
    	printf("No data within five seconds and value of retval = %d\n", retval);
    return 0;
}

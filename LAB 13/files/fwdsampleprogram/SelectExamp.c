#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    fd_set rfds;
    
    struct timeval tv;
    int retval;

    /* Watch stdin (fd 0) to see when it has input. */
    FD_ZERO(&rfds);
    FD_SET(0, &rfds);
      //FD_ZERO(&wfds);
  //  FD_SET(1, &wfds);
 //FD_ZERO(&efds);
    //FD_SET(1, &efds);

    /* Wait up to five seconds. */
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    retval = select(1, &rfds, NULL, NULL, &tv);
    /* Don’t rely on the value of tv now! */

    if (retval == -1)
        perror("select()");
    else if (retval)
 
       printf("Data is available now value of retval=%d.\n",retval);
        /* FD_ISSET(0, &rfds) will be true. */
    else
        printf("No data within five seconds and value of retval=%d.\n",retval);
    return 0;
}

#include <poll.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main()
{
  int ret_poll; ssize_t ret_read;
  struct pollfd input[1] = {{fd: 0, events: POLLIN}};
  char buff[100];
  while(1) {
    ret_poll = poll(input, 1, 10000);
    printf("ret_poll:\t%d\nerrno:\t%d\nstrerror:\t%s\n",
        ret_poll, errno, strerror(errno));
    ret_read = read(0, buff, 99);
    printf("ret_read:\t%zd\nerrno:\t%d\nstrerror:\t%s\nbuff:\t%s\n",
        ret_read, errno, strerror(errno), buff);
  }
}

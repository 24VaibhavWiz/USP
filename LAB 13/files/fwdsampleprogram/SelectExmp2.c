#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{


fd_set rfds;
    //fd_set wfds;
    struct timeval tv;
    int sretval;
int fd;
char buf[100];
int ret;
fd=0;
while(1)

{
 FD_ZERO(&rfds);
    FD_SET(fd, &rfds);

 tv.tv_sec = 5;
    tv.tv_usec = 0;
  sretval = select(2, &rfds, NULL, NULL, &tv);
if(sretval==0)
{
printf("timeout\n");
printf("Try Again\n");

}
else
{

printf("sretval=%d\n",sretval);
memset((void*)buf,0,100);
ret=read(fd,(void *) buf,10);
if (ret==-1)
{
printf("error\n");

}
else
{
//buf[10]='\0';
printf("buf=%s\n",buf);

}
}






}

return 0;

}

#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{

 printf("Hi:\n");
 printf("My process ID is:- %ld:\n", (long)getpid());
  while(1){}
    return 0;
}

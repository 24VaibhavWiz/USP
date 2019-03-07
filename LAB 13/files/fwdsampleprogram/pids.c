#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
  printf("My real user id is %5ld \n", (long)getuid());
  printf("My effective user id is %5ld \n", (long)geteuid()); 
printf("My real group id is %5ld \n", (long)getgid()); 
printf("My effective group id is %5ld \n", (long)getegid());
 
    return 0;
}

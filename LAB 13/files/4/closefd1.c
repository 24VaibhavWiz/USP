
// C program to illustrate close system Call
#include<stdio.h>
#include <fcntl.h>
int main()
{
    int fd1 = open("foo.txt", O_RDONLY);
    if (fd1 < 0) 
    {
        perror("c1");
       
    }
    printf("opened the fd = % d\n", fd1);
     
    // Using close system Call
   // close(fd1);
    
    printf("closed the fd.\n");
    
    
        int fd2 = open("foo1.txt", O_RDONLY);
    if (fd2 < 0) 
    {
        perror("c1");
       
    }
    printf("opened the fd = % d\n", fd2);
   //printf("after closing the fd = % d\n", fd1);
}

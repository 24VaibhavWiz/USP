// C program to illustrate
// read system Call
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
 
int main()
{
    char c;
    int fd1 = open("foobar.txt", O_RDONLY, 0);
    int fd2 = open("foobar.txt", O_RDONLY, 0);
    read(fd1, &c, 1);
    read(fd2, &c, 1);
     printf("fd1 = %d\n", fd1);
     printf("fd2 = %d\n", fd2);
    printf("c = %c\n", c);
    //exit(0);
return 0;
}

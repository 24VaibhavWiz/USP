// C program to illustrate close system Call
#include<stdio.h>
#include<fcntl.h>
int main()
{
    // assume that foo.txt is already created
    int fd1 = open("foo.txt", O_RDONLY | O_CREAT);
    printf("fd1 = % d\n", fd1); 
    //close(fd1);
     
    // assume that baz.tzt is already created
    int fd2 = open("baz1.txt", O_RDONLY | O_CREAT); 
     
    printf("fd2 = % d\n", fd2);
    close(fd2);
    return 0;
} 

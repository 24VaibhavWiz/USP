#include <errno.h> 
#include <fcntl.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/wait.h> 
#include <unistd.h> 
  
int main() 
{ 
    // array of 2 size a[0] is for reading  
    // and a[1] is for writing over a pipe  
    int a[2];  
  
    // opening of pipe using pipe(a)    
    char buff[11]; 
    if (pipe(a) == -1)  
    { 
        perror("error in pipe"); // error in pipe 
       return 1; 
    } 
  
    // writing a string "code" in pipe 
    write(a[1], "Blockchain", 11);  
     
  
    // reading pipe now buff is equal to "code" 
    read(a[0], buff, 11); 
  
    // it will print "code" 
    printf("The content inside buffer is :%s\n", buff);  
return 0; 
} 

#include"stdio.h"
#include"sys/types.h"
#include"unistd.h"
#include"stdlib.h"
#include"sys/wait.h"

int main() 
{ 
	int n;
	printf("Please enter the value of n\n");
	scanf("%d",&n);
    for(int i=0;i<n;i++) 
    { 
        if(fork() == 0) 
        { 
            printf("child_pid %d from parent_pid %d\n",getpid(),getppid()); 
            //exit(0); 
        } 
    } 
    for(int i=0;i<5;i++) 
    wait(NULL); 
      
} 

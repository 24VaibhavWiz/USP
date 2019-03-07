#include <stdio.h>
#include <unistd.h>
 
int main()
{
    int id;
    printf("Hello, World!\n");
   printf("main Process id: %d.\n",getpid());    
    id=fork();
    if(id>0)
    {
        /*parent process*/
        printf("This is parent section Process id: %d.\n",getpid());
        printf("fork parent process id: %d.\n",getppid());
        printf("fork id: %d.\n",id);
    }
    else if(id==0)
    {
        /*child process*/
        printf("fork created Process id: %d.\n",getpid());
        printf("fork parent process id: %d.\n",getppid());
                printf("fork id: %d.\n",id);
    }
    else
    {
        /*fork creation faile*/
        printf("fork creation failed!!!\n");
    }
 
    return 0;
}

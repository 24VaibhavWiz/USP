// C program to implement one side of FIFO 
// This side writes first, then reads 
#include <stdio.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main() 
{ 
	int fd, mkfd; 
 char    string[] = "Hello, world2\n";
	// FIFO file path 
	char * myfifo = "/home/student/Desktop/cseEF/6/mypipe"; 
  pid_t   childpid;
	// Creating the named file(FIFO) 
	// mkfifo(<pathname>, <permission>) 
	 mkfd=mkfifo(myfifo,  S_IRUSR| S_IWUSR ); 
	printf("mkfd: %d\n", mkfd); 
if(mkfd==-1) 
perror("Error:");
	char arr1[80], arr2[80];  

	       if((childpid = fork()) == -1)
        {
                perror("fork");
                return 1; 
        }

        if(childpid == 0)
        {	// Open FIFO for write only 
		fd = open(myfifo, O_WRONLY); 


		write(fd, string, strlen(string)+1); 
		close(fd); 
                return 1;
	}
        else
         {
		// Open FIFO for Read only 
		fd = open(myfifo, O_RDONLY); 

		// Read from FIFO 
		read(fd, arr1, sizeof(arr1)); 

		// Print the read message 
		printf("Data Recieved from child: %s\n", arr1); 
		close(fd); 
          }

	
	return 0; 
} 


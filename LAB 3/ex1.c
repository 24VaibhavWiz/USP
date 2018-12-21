#include"stdio.h"
#include"unistd.h"
int main(void)
{
	fork();
	printf("hello1 %ld \n",(long)getpid());
	//wait(NULL);
	fork();
	printf("hello2 %ld \n",(long)getpid());
	fork();
	printf("hello3 %ld \n",(long)getpid());
	fork();
	printf("hello4 %ld \n",(long)getpid());
	//return(0);
}

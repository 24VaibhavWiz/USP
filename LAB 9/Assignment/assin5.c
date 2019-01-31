#include"stdio.h"
#include"stdlib.h"
#include"unistd.h"

int main()
{
	printf("Fork create many confusion\n");
	fork();
	printf("We suppose to read and practise\n");
}

//"Fork create many confusion" is printed twice due fork() and "We suppose to read and practise" is printed once

#include"stdio.h"
#include"stdlib.h"
#include"unistd.h"

int main()
{
	int i;
	for(i = 0; i<4 ; i++)
		fork();
	printf("Learning by doing practise or !!!\n");
}

//2^n (n = 4)

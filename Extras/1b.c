#include"stdio.h"
#include"stdlib.h"
main()
{
	pid_t child1,child2;
	int i,j;
	for(i=0;i<=3;i++)
	{
		if((child1=fork())<=0)
		break;
	}	
	if (i==1||i==3)
	{fork();}
	if(i==2)
	{
		for(j=1;j<3;j++)
		{
			child2= fork();
			if(child2 <= 0)
				break;
		}
	}
	printf("process\n");
	return 0;
}

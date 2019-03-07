#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{

pid_t firstCh, secondCh;
pid_t waitpidReturn;
int statPtr;
firstCh=fork();


if(firstCh>0)
{
printf("I am parent process ID:%ld, & and my Children are in Execution....\n", (long)getpid());

secondCh=fork();
if(secondCh>0){

printf("I am parent process ID:%ld, & and my Child is in Execution....\n", (long)getpid());
waitpidReturn=waitpid(firstCh, NULL, 0); //here parent will be wait for second child

printf("I am parent process ID:%ld, my Child is terminated \n & wait() return value is= %ld  \n", (long)getpid(), (long) waitpidReturn);


}

}
if(firstCh==0)
{
printf("Hi CSE Sec A, I am first Child Process : %ld, My Mom is %ld  \n ", (long)getpid(), (long)getppid() );
int sum=2+3;
printf("sum=%d \n",sum);
return 0;

}

if(secondCh==0)
{
printf("Hi CSE Sec A, I am second Child Process : %ld, My Mom is %ld  \n ", (long)getpid(), (long)getppid() );
return 0;

}


}

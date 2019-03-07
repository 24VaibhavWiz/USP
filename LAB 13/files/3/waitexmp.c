#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{

pid_t firstCh, secondCh;
pid_t returnR;

firstCh=fork();


if(firstCh>0)
{
printf("I am parent process ID:%ld & and my Child is in Execution....\n", (long)getpid());
returnR= wait(NULL);

printf("I am parent process ID:%ld, my Child is terminated \n & wait() return value is= %ld  \n", (long)getpid(), (long)returnR);

}
if(firstCh==0)
{
printf("I am Child process ID:%ld & I am in Execution....\n", (long)getpid());
int sum=2+3;
printf("sum=%d \n",sum);
return 0;




}





}

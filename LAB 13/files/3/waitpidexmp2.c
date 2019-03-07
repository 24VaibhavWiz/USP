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
printf("before the child process termination within parent body\n");

secondCh=fork();
if(secondCh>0){

waitpidReturn=waitpid(secondCh, &statPtr, 0);
if (WIFEXITED(statPtr)>0)
{
printf("Normal Termination\n");
}
if (WIFSTOPPED(statPtr)>0)
{
printf("Kill with known Termination\n");
}
if (WIFSIGNALED(statPtr)>0)
{
printf("Kill with unknown Termination\n");
}

printf("After the child process termination within parent body and child process id : %ld  got terminated \n", (long) waitpidReturn);


}

}
if(firstCh==0)
{
printf("Within first child body and process id : %ld  \n ", (long)getpid());
int sum=2+3;
printf("sum=%d \n",sum);
return 0;

}

if(secondCh==0)
{
while(1)
printf("within second child body and process id : %ld   \n", (long) getpid());

return 0;



}





}

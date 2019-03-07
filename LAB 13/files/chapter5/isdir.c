#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

int isdirectory(char *path) {
struct stat statbuf;
if (stat(path, &statbuf) == -1)
return 0;
else
return S_ISDIR(statbuf.st_mode);
}

int main(){
int i=isdirectory("/home/iter/Downloads/5/b");
printf("i is=%d", i);
}

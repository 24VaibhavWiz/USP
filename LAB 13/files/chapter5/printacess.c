#include <stdio.h>
#include <time.h>
#include <sys/stat.h>
void printaccess(char *path) {
struct stat statbuf;
if (stat(path, &statbuf) == -1)
perror("Failed to get file status");
else{
printf("%s last accessed at %s", path, ctime(&statbuf.st_atime));
printf("modified: %s", ctime(&statbuf.st_mtime));
printf("Size is: %lld", (long long)statbuf.st_size);
printf("Device Id is: %lld\n",  (long long)statbuf.st_dev);
printf("Ownership:                UID=%ld   GID=%ld\n",
            (long) statbuf.st_uid, (long) statbuf.st_gid);
}
}

int main(){
printaccess("/home/iter/Downloads/5");
return 0;
}

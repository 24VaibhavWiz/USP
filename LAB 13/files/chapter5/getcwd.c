#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
char mycwd[2];
if (getcwd(mycwd, 2) == NULL) {
perror("Failed to get current working directory");
return 1;
}
printf("Current working directory: %s\n", mycwd);
return 0;
}

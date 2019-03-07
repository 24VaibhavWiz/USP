#include <stdio.h>

void bar()
{
    printf("How come you entered into bar ?\n");
}

void foo()
{
    char buffer[10];
    scanf("%s", buffer);
    printf("Hello ji %s \n", buffer);
}

int main()
{
    foo();
    return 0;
}

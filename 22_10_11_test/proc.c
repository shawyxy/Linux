#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exec函数之前\n");
    execl("/usr/bin/ls", "ls", "-l", "-a", "-i", "-d", NULL);
    printf("exec函数之后\n");
    return 0;
}

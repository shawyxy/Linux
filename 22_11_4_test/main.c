#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("hello world <- printf\n");
    fputs("hello world <- fputs\n", stdout);                                      

    write(1, "hello world <- write\n", 21);
    fork();
    return 0;
}

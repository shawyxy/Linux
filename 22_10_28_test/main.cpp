#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    printf("hello world\n");
    pid_t id = fork();
    if(id == 0){ //child
        while(1){
                printf("子进程:PID:%d, PPID:%d\n", getpid(), getppid());
                sleep(1);
        }
        exit(1);
    }
    else if(id > 0){ //father
    	int count = 3;
    	while(count){
      	printf("父进程PID:%d, PPID:%d, count:%d\n", getpid(), getppid(), count);
        sleep(1);
        count--;
        }
	}
    return 0;
} 


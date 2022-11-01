#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
	printf("fork之前\n");
	pid_t ret = fork();
	if(ret == 0)
	{
		printf("子进程：PID：%d，PPID：%d\n", getpid(),getppid());
		sleep(5);
	}
	else
	{
		printf("父进程：PID：%d，PPID：%d\n", getpid(), getppid());
		exit(0);
	}
	printf("fork之后\n");
	return 0;
}

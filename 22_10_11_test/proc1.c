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
		int count = 5;
		while(count--)
		{
			printf("子进程：PID：%d，PPID：%d\n", getpid(),getppid());
			sleep(1);
		}
		exit(0);
	}
	else
	{
		while(1)
		{
			printf("父进程：PID：%d，PPID：%d\n", getpid(), getppid());
			sleep(1);
		}
	}
	printf("fork之后\n");
	return 0;
}

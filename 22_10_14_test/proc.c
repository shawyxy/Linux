#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
	printf("fork之前\n");
	pid_t ret  = fork(); 
	if(ret < 0)
	{
		printf("子进程创建错误\n");
	}
	else if(ret == 0)
	{
		printf("子进程：PID：%d，PPID：%d\n", getpid(),getppid());
	}
	else
	{
		printf("父进程：PID：%d，PPID：%d\n", getpid(), getppid());
	}
	printf("fork之后\n");
	return 0;
}

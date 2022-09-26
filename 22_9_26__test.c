#include <stdio.h>
#include <unistd.h>
int main()
{
	printf("hello world");
	pid_t id = fork();
	if(id == 0)//子进程返回0
	{
		while(1)
		{
			printf("子进程：\n");
			sleep(1);
		}		
	}
	else if(id > 0)//父进程返回PID
	{
		while(1)
		{
			printf("父进程：\n");
			sleep(1);
		}
	}

	return 0;
}
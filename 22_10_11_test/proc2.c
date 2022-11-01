#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#define NUM 16

const char* myfile = "mycmd";
int main(int argc, char* agrv[], char* env[])
{
	char* const _env[NUM] = {
		(char*)"MY_CMD_VAL=1234567890",
		NULL
	};
	pid_t id = fork();

	if(id == 0)//子进程
	{
		printf("子进程：PID：%d，PPID：%d\n", getpid(),getppid());
		sleep(3);
		char* const _argv[NUM] = {
			(char*)"-a",
			NULL
		};
		execle(myfile, "mycmd", "-a", NULL, env);
		exit(1);
	}
	else//父进程
	{
		printf("父进程：PID：%d，PPID：%d\n", getpid(),getppid());
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[])//命令行参数个数，命令行参数数组
{
	if(argc != 2)
	{
		printf("无法运行\n");
		exit(1);
	}
	printf("环境变量：%s\n", getenv("PATH"));//新增
	if(strcmp(argv[1], "-a") == 0)
	{
		printf("hi -a\n");
	}
	else if(strcmp(argv[1], "-b") == 0)
	{
		printf("hi -b\n");
	}
	else
	{
		printf("运行失败\n");
	}
	return 0;
}

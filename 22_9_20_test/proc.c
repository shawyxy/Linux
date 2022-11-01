#include <stdio.h>
#include <stdlib.h>
//定义全局变量
//未定义
int g_unval;
//已定义
int g_val = 1;
int main(int argc, char* argv[], char *envp[])
{
    printf("代码区:%p\n", main);
    char* str = "hello";
    printf("只读常量区:%p\n", str);
    printf("初始化数据区:%p\n", &g_val);
    printf("未初始化数据区:%p\n", &g_unval);

    int* p = (int*)malloc(5);
    printf("堆区:%p\n", p);
    printf("栈区:%p\n", &str);
    printf("栈区:%p\n", &p);

    //命令行参数
    for(int i = 0; i < argc; i++)
    {
        printf("命令行参数:%p\n", argv[i]);
    }
    //环境变量
    int i = 0;
    while(envp[i])
    {
        printf("环境变量:%p\n", envp[i]);
        i++;
    }
    return 0;
}

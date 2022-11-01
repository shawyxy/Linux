#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
  pid_t id = fork();
  if(id == 0)// child
  {
    int count = 5;
    while(count--)
    {
      printf("I am child process\n");
    }
    sleep(5);
  }
  // praent
  int status = 0;
  pid_t ret =  wait(&status);
  if(ret > 0)
  {
    if(WIFEXITED(status))
      printf("子进程的退出码：%d\n", WEXITSTATUS(status));
  }
  return 0;
}

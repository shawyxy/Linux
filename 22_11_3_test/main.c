//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    FILE* fp = fopen("log.txt", "w");//创建log.txt新文件
//    if(fp == NULL) //
//    {
//        perror("fopen");
//        return 1;
//    }
//    int count = 5;
//    const char* text = "hello world\n";
//    while(count--)
//    {
//        fwrite(text, strlen(text), 1, fp);
//    }
//    fclose(fp);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("log.txt", "r");
//	if (fp == NULL){
//		perror("fopen");
//		return 1;
//	}
//	char buffer[64];
//	for (int i = 0; i < 5; i++){
//		fgets(buffer, sizeof(buffer), fp);
//		printf("%s", buffer);
//	}
//	fclose(fp);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//  FILE* fp = fopen("log.txt", "r");
//  if(fp == NULL)
//  {
//    perror("fopen");
//    return 1;
//  }
//
//  char line[64];
//  while(fgets(line, sizeof(line), fp) != NULL)
//  {
//    printf("%s", line);
//  }
//  fclose(fp);
//  return 0;
//}
//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//  umask(0);
//  int fd = open("log.txt", O_WRONLY | O_CREAT, 0666); // 以只读形式打开文件
//  if(fd < 0) // 打开文件失败
//  {
//    perror("open");
//    return 1;
//  }
//
//  // 打开文件成功
//  printf("open success, fd: %d\n", fd);
//  close(fd);
//  return 0;
//}
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//	umask(0);
//	int fd1 = open("log1.txt", O_RDONLY | O_CREAT, 0666);
//	int fd2 = open("log2.txt", O_RDONLY | O_CREAT, 0666);
//	int fd3 = open("log3.txt", O_RDONLY | O_CREAT, 0666);
//  if(fd1 == -1 || fd2 == -1 || fd3 == -1)
//  {
//    perror("open");
//  }
//  printf("fd1:%d\n", fd1);
//	printf("fd2:%d\n", fd2);
//	printf("fd3:%d\n", fd3);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <stdlib.h>
//#include <fcntl.h>
//int main()
//{
//  umask(0);
//
//  int fd = open("log.txt", O_RDONLY);
//  if(fd < 0) // 打开失败
//  {
//    perror("open");

//  }
//  printf("open succsee, fd:%d\n", fd);
//
//  char buffer[64];
//  memset(buffer, '\0', sizeof(buffer));
//  read(fd, buffer, sizeof(buffer));
//  printf("%s\n", buffer);
//  return 0;
//}
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{ 
//    close(0); // 关闭标准输入
//    close(2); // 关闭标准错误
//  umask(0);
//  int fd1 = open("log1.txt", O_RDONLY | O_CREAT, 0666);
//  int fd2 = open("log2.txt", O_RDONLY | O_CREAT, 0666);
//  int fd3 = open("log3.txt", O_RDONLY | O_CREAT, 0666);
//    if(fd1 == -1 || fd2 == -1 || fd3 == -1)
//    {
//        perror("open");
//    }
//  	printf("fd1:%d\n", fd1);
//  printf("fd2:%d\n", fd2);
//  printf("fd3:%d\n", fd3);
//  return 0;
//}
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//	close(1);
//	int fd = open("log.txt", O_WRONLY | O_CREAT, 0666);
//	if (fd < 0)
//    {
//		perror("open");
//		return 1;
//	}
//    
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//
//  //fflush(stdout);
//	close(fd);
//	return 0;
//}
//
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//  printf("stdin, %d\n", stdin->_fileno);
//  printf("stdout, %d\n", stdout->_fileno);
//  printf("stderr, %d\n", stderr->_fileno);
//  return 0;
//}  
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//	close(1);
//	int fd = open("log.txt", O_WRONLY | O_CREAT, 0666);
//	if (fd < 0)
//    {
//		perror("open");
//		return 1;
//	}
//    
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	
//  //fflush(stdout); // 此处会在后面解释,[问题]，fd=1的下标对应的还是stdout吗
//	//close(fd);
//	return 0;
//}
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//	close(0);
//	int fd = open("log.txt", O_RDONLY | O_CREAT, 0666);
//	if (fd < 0)
//    {
//		perror("open");
//		return 1;
//	}
//	char buffer[64];
//	while (scanf("%s", buffer) != EOF)
//  {
//		printf("%s\n", buffer);
//	}
//	close(fd);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//  int i = 0;
//  scanf("%d", &i, stdin);
//  printf("%d\n", i, stdout);
//  return 0;
//}
//#include <stdio.h>
//int main()
//{
//  
//  printf("stdout printf\n");
//  perror("stderr perror");
//
//  fprintf(stdout, "stdout fprintf\n");
//  fprintf(stderr, "stderr fprintf\n");
//  return 0;                
//}                          
                     
//#include <stdio.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//int main()
//{
//  int fd = open("log.txt", O_WRONLY | O_CREAT, 0666);
//  if(fd < 0)
//  {
//    perror("open");
//    return 1;
//  }
//  close(1); // 关闭stdout文件
//  dup2(fd, 1); // 将数据重定向到log.txt中
//  printf("hello, world <- printf\n");
//  fprintf(stdout, "hello, world <- fprintf\n");
//  return 0;
//}


int main()
{
  printf("he\n");
  return 0;
}
#include <stdio.h>
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     

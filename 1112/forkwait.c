#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>
int main()
{
	int pid, child,status;
	printf("[%d] 부모 프로세스 시작\n",getpid());
	pid = fork();
	if( pid == 0){
		printf("[%d] 자식 프로세스 시작\n",getpid());
		exit(1);
	}
	child = wait(&status);
	printf("[%d]자식 프로세스 종료: %d\n",getpid(),status>>8);
}

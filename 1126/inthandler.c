#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void inthandler(int signo);

int main()
{
	signal(SIGINT,inthandler);

	while(1)
		pause();

	
	printf("실행 되지 않음\n");
}

void inthandler(int signo){
	printf(" 인터럽트 시그널 처리\n");
	printf(" 시그널 번호 : %d\n",signo);
	exit(0);
}

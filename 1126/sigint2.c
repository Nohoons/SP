#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sigint_handler(int signo);

struct sigaction
{
	void (*sa_handler)(int);
	void (*sa_sigcation)(int,siginfo_t*,void*);
	sigset_t sa_mask;
	int sa_flags;
}

struct sigaction newact;
struct sigaction oldact;

int main(void)
{
	newact.sa_handler = signal_handler;
	sigfillset(&newact.sa_mask);


	sigaction(SIGINT,&newact,&oldact);

	while(1)
	{
		printf(" ctrl_C 를 눌러보세요 !\n");
		sleep(1);
	}

}


void sigint_handler(int signo)
{
	printf(" %d 번 시그널 처리!\n",signo);
	printf(" 또 누르면 종료 합니다!\n");
	sigaction(SIGINT,&oldact,NULL);
}


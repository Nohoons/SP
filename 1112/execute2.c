#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	printf("부모 프로세스 시작\n");
	if(fork() == 0){
		execl("/bin/echo","echo","hello",NULL);
		fprintf(stderr," first fail");
		exit(1);
	}
	if(fork() == 0){
		execl("/bin/echo","date",NULL);
		fprintf(stderr,"second fail");
		exit(2);
	}

	if(fork() == 0){
		execl("/bin/ls","ls","-l",NULL);
		fprintf(stderr,"triple fail");
		exit(3);
	}
	printf("부모 프로세스 끝\n");
}

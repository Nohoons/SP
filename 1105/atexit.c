#include<stdio.h>
#include<stdlib.h>
static void exit_handler1(void),exit_handler2(void);

int main(int argc,char*argv[]){
	if(atexit(exit_handler1) != 0)
		perror("exit_handler1 등록할수 없음 ");
	if(atexit(exit_handler2) != 0)
		perror("exit_handler2 등록할수 없음");
	printf("main 끝\n");
	exit(0);
}

static void exit_handler1(void){
	printf("첫번째 처리기\n");
	}

static void exit_handler2(void){
	printf("두번쨰 처리기\n");
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "student.h"

int main(int argc, char*argv[])
{
	int id,fd;
	char c,b;
	struct student rec;
					
	if(argc <2)					
        {									
		fprintf(stderr,"사용법:%s file\n",argv[0]);				
		exit(1);
	}
	if((fd = open(argv[1],O_RDWR)) == -1){
	perror(argv[1]);
	exit(2);
	}

	do{
	printf("정말로 삭제 하시겠습니까?(Y/N)");
	scanf(" %c",&b);
	if(b =='Y')
	   fd =open(argv[1],O_TRUNC);
	
	
	else printf("입력 오류");									
       printf(" 계속 하시겠습니까 ?(Y/N)");	
	scanf(" %c",&c);
	 }while( c == 'Y');

		close(fd);
		exit(0);
}


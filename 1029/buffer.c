include<stdio.h>
int main(int argc,char* argv[]){

	int max=0;
	int lt=0;
	char c;

	printf("반복 횟수를 입력하시오:");
	scanf(" %d",&max);
	for(int i=0;i<max;i++){

		printf("문자와 출력횟수 입력");
		scanf(" %c %d",&c,&lt);
		for(int j=0;j<lt;j++){
		 		printf(" %c",c);
			};
		printf("\n");
	};
}
	

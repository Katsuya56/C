/*ツリーを出力*/
#include <stdio.h>

int main(void){
	int n = 10;
	for(int i = 0; i<=n; i++){
		/* 空白の出力*/
		for(int j=0; j<n-i; j++){
			printf(" ");
		}
		for(int j=0; j<=i*2; j++){
			printf("*");
		}
		printf("\n");

	}
	return 0;
}

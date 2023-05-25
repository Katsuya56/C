#include <stdio.h>
#include <stdlib.h>
int main(void){
	int N=5;
    int *hoge;

	// 配列サンプルコード
    hoge = (int*)malloc( sizeof(int) * N );
	// 入力
	for(int i=0;i<N;i++){
		set(hoge,i,i);
	}
	// 出力
	for(int i=0;i<N;i++){
		printf("%d\n",get(hoge,i));
	}
	return 0;
}

void set(int* arraypoint,int index,int n){
	int *p;
	p = arraypoint + sizeof(int)*index;
	*p = n;
}

int get(int* arraypoint,int index){
	int n;
	int *p;
	p = arraypoint + sizeof(int)*index;
	return *p;
}
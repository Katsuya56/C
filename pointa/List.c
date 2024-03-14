#include<stdio.h>
#include<stdbool.h>

// List用の構造体
struct List
{
	int num;
	struct List *p;
};

// Listが循環参照しているか判定する
bool isLoop(struct List *list_0){
	// 要素数が1つの時
	if(list_0 -> p == NULL){return false;}

	// 検索用構造体
	struct List *list_n;
	list_n = list_0 -> p;

	while(list_n != NULL){
		
		// 比較用構造体
		struct List *list_i;
		list_i = list_0;

		// 探索
		while(list_i != list_n){
			if(list_i -> p == list_n){return true;}
			list_i = list_i -> p;
		}

		list_n = list_n -> p;
	}

	return false;
}


int main(void){
	// Listの要素
	struct List l1;
	struct List l2;
	struct List l3;
	struct List l4;
	struct List l5;

	l1.num = 10;
	l1.p = &l2;
	l2.num = 20;
	l2.p = &l3;
	l3.num = 30;
	l3.p = &l4;
	l4.num = 40;
	l4.p = &l5;
	l5.num = 50;
	l5.p = NULL;

	if(isLoop(&l1)){
		printf("循環参照しています\n");
	}else{
		printf("循環参照していません\n");
	}

	return 0;
}

#include<stdio.h>
#include<stdbool.h>

// List用の構造体
struct box
{
	int x;
	int y;
};

// Listが循環参照しているか判定する
bool isLoop(struct box *b){
	printf("%d:%d\n",b->x,b->y);
	return true;
}


int main(void){
	// Listの要素
	struct box b;
	b.x = 1;
	b.y = 1;
	

	if(isLoop(&b)){
		printf("a\n");
	}

	return 0;
}

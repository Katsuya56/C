#include<stdio.h>
int main(void){
	int n;
	int *p1, *p2;

	n = 0;
	p1 = &n;
	p2 = &n;

	if(p1 == p2){
		printf("a\n");
	}	

	return 0;
}

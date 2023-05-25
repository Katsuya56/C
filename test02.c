#include <stdio.h>
int main(void)
{
	int N, A, B, ans;
	ans = 1;

	// 入力
	scanf("%d", &N);
	scanf("%d %d", &A, &B);

	// 探索
	for (int n = 1; n < N; n++){

		int x = 0;
		while (A * x <= n){

			int y = 0;
			while (A * x + B * y <= n){

				if (A * x + B * y == n){
					ans++;
					goto DONE;
				}

				y++;
			}
			x++;
		}
		DONE:
		;
	}

	printf("%d",N - ans);
	return 0;
}
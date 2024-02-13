// 読み込んだ整数値以下の偶数を表示
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("整数値：");
	scanf("%d", &n);

	for (int i = 2; i <= n; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}

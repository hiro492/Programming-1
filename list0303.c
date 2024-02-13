// 読み込んだ整数値は５で割り切れないか割り切れるか
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("整数を入力せよ：");
	scanf("%d", &n);

	if (n % 5)
		puts("その数は５で割り切れません。");
	else
		puts("その数は５で割り切れます。");

	return 0;
}

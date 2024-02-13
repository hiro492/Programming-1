// 3つの整数の最小値を求める
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//--- 3つの整数の最大値を返す ---//
int min3(int a, int b, int c)
{
	int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	return min;
}

int main(void)
{
	int n1, n2, n3;

	puts("3つの整数を入力せよ。");
	printf("整数n1：");   scanf("%d", &n1);
	printf("整数n2：");   scanf("%d", &n2);
	printf("整数n3：");   scanf("%d", &n3);


	printf("最も小さい値は%dです。\n", min3(n1, n2, n3));

	return 0;
}

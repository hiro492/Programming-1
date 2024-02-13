// 読み込んだ三つの整数値の最大値を求めて表示
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("三つの整数を入力せよ。");
	printf("整数１：");   scanf("%d", &n1);
	printf("整数２：");   scanf("%d", &n2);
	printf("整数３：");   scanf("%d", &n3);

	// とりあえず最大値をn1にする
	 max = n1;
	// n2と比較して入れ替え
	 if (n2 > max) {
		 max = n2;
	}
	// n3と比較して入れ替え
	 if (n3 > max) {
		 max = n3;
	 }

	printf("最大値は%dです。\n", max);

	return 0;
}

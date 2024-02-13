// ⼊⼒された数値の階乗を計算して出⼒する。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, f;
	printf("正の整数を入力してください: ");
	scanf("%d", &n);
	f = 1;
	// for⽂で階乗を算出する
	for (int i = n; 0 < i; i--) {
		f = i * f;
	}
	printf("%dの階乗は%dです。\n", n, f);
	return 0;
}
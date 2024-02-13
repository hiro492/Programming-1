// ⼊⼒した数値を超えるまでのフィボナッチ数列を表⽰する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 1, b = 1; // 初項, 2項
	int tmp, n;
	printf("整数を入力：");
	scanf("%d", &n);
	printf("%d %d ", a, b); // 初めの2つの数字を表⽰
	// while⽂による数列の表⽰
	while (a <= n) {
		tmp = a + b;
		b = tmp;
		printf("%d ", b);
		tmp = a + b;
		a = tmp;
		printf("%d ", a);
	}
	return 0;
}
// ユーグリッドの互除法を⽤いて最⼤公約数を計算する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 最⼤公約数を計算する関数
int gcd(int a,int b) {
	while (b != 0) {
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}
int main() {
	int num1, num2;
	printf("２つの整数を入力してください。\n");
	printf("1:"); scanf("%d", &num1);
	printf("2:"); scanf("%d", &num2);
	printf("最大公約数は%dです\n", gcd(num1, num2));
	return 0;
}
// 1〜10までの数字を⼊⼒すると、⼊⼒された数字を出⼒する。
// その範囲外の数字が⼊⼒された場合は、エラーメッセージを表⽰して、
// 再度数字の⼊⼒を求める。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	do {
		printf("1から10までの数字を入力してください: ");
		scanf("%d", &num);
		if (num <= 0 || num > 10) {
			printf("エラー：不正な値が入力されました。\n");
		}
		else {
			printf("入力された数字は%dです。\n", num);
		}
	} while (1);

	return 0;
}
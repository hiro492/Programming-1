// Prg13-2
#include<stdio.h>
#define	NUM	5

int main(void) {
	int tmp, i;
	int n[NUM]= { 1, 2, 3, 4, 5 };

	// 全部を繰り返す必要はない
	for (i = 0; i < 2; i++) {
		// まず、0番目と5番目を入れ替えることを考える
		// 仮の変数に5番目の配列の中身をコピー（退避）する
		tmp = n[NUM - 1 - i];
		// 5番目の配列に0番目の配列の中身を代入する
		n[NUM - 1 - i] = n[i];
		// 0番目の配列に5番目の配列の中身を代入する。コピーしていた変数を使う。
		n[i] = tmp;
	}

	for (i = 0; i < NUM; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");

	return 0;
}

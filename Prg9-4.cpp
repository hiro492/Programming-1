// タイルを塗りつぶそう
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int flag = 0, no,count;
	count = 0;
	int data[] = {
		0, 1, 0,
		1, 1, 0,
		0, 0, 1,
	};

	// ①タイル表示　配列の値が0のとき□、1のとき■を表示する
	for (int i = 0; i < 9; i++) {
		if (data[i] == 1) {
			printf("■ ");
		}
		else {
			printf("□ ");
		}

		if ((i + 1) % 3 == 0) printf("\n");		// 3の倍数のとき改行
	}

	while (flag == 0) {
		printf("何番目を塗る？");
		scanf("%d", &no);
		// ②指定されたタイルを１にする
		data[no-1] = 1;

		// ①タイル表示　上記と同じ処理でOK
		for (int i = 0; i < 9; i++) {

			if (data[i] == 1) {
				printf("■ ");
			}
			else {
				printf("□ ");
			}
			if ((i + 1) % 3 == 0) printf("\n");		// 3の倍数のとき改行
		}

		// すべて塗ったかどうか
		for (int i = 0; i < 9; i++) {
			if (data[i] == 0) {
				break;
			}
			// ③すべて塗れている場合はフラグを立てる		
			if (i == 8) {
				flag = 1;
			}
		}
		
	}

	return 0;
}

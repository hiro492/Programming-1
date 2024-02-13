// タイルを塗りつぶそう
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, flag = 0, no;
	// ①2次元配列の初期化 data[][]
	int data[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	// タイル表示
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (data[i][j] == 0) 
				printf("□ ");
			else 
				printf("■ ");
		}
		printf("\n");
	}

	while (flag == 0) {
		printf("何番目を塗る？");
		scanf("%d", &no);
		no = no - 1;
		/* 1次元配列　＞　2次元配列
		   0 1 2  >  [0][0] [0][1] [0][2]
		   3 4 5  >  [1][0] [1][1] [1][2]
		   6 7 8  >  [2][0] [2][1] [2][2]
		*/
		// ②data[][] = 1;
		if (no <= 2) {
			data[0][no] = 1;
		}
		else if (no <= 5) {
			data[1][no - 3] = 1;
		}
		else {
			data[2][no - 6] = 1;
		}
		// タイル表示
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (data[i][j] == 0)
					printf("□ ");
				else
					printf("■ ");
			}
			printf("\n");
		}

		// すべて塗ったかどうか
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (data[i][j] == 0) break;
			}
		}
		// ③すべて塗れている場合はフラグを立てる
		if (i == 3 && j == 3) {
			flag = 1;
		}
	}

	return 0;
}

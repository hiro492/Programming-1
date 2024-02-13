// 読み込んだ整数の個数だけ＊を連続表示（for文）
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数：");
	scanf("%d", &no);

	for (int i = 1; i <= no; i++) {
		putchar('*');
		putchar('\n');
		for (int i = 2; i == 7; i++) {
			putchar('*');
		}
	}
		
	putchar('\n');

	return 0;
}

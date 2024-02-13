// 読み込んだ整数の個数だけ＊を連続表示
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	printf("正の整数：");
	scanf("%d", &no);

	while (no-- > 0)
		//putchar('*');
		printf("日本工業大学");

	//putchar('\n');
	printf("\n");

	return 0;
}

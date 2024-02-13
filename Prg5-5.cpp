#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hp = 10;
	int damege = 0;
	puts("スライムがあらわれた。");
	printf("スライムのHP:%d\n", hp );
	printf("\n");
	do{
		printf("ゆうしゃが与えるダメージ:");
			scanf("%d", & damege);
			hp = hp - damege;
			printf("スライムのダメージ:%d\n",hp);
			printf("\n");

	} while (hp > 0 );

	printf("スライムを倒した。");
	return 0;
}
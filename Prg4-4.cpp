#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y; int cnt = 0;
	printf("2つの整数を入力してください。\n");
	printf("整数 x : ");
	scanf("%d", &x);
	printf("整数 y : ");
	scanf(" %d", &y);
	if (x % 2 == 0) {
		cnt = cnt + 1;
	}
	if (y % 2 == 0) {
		cnt = cnt + 1;
	}
	switch (cnt) {
	case 0: printf("両⽅とも奇数です。\n");
		break;
	case 1: printf("偶数と奇数です。\n");
		break;
	case 2: printf("両方とも偶数です。\n");
		break;
	}
	return 0;
}
#include<stdio.h>
int main() {
	int SlimeHp, YusyaHp, damege;
	SlimeHp = 10;
	YusyaHp = 10;
	printf("スライムのHP: 10\n");
	printf("勇者のHP: 10\n");
	printf("\n");
	for(;;)
	{
		printf("勇者のターン\n");
		printf("ダメージを入力してください:");
		scanf_s("%d", &damege);
		SlimeHp = SlimeHp - damege;
		if (SlimeHp <= 0) {
			break;
		}
		printf("スライムのターン\n");
		YusyaHp -= 3;
		printf("勇者は3ダメージ受けた。\n");
		if (YusyaHp <= 0) {
			break;
		}
		printf("スライムのhp: %d\n", SlimeHp);
		printf("勇者のhp: %d\n", YusyaHp);
		printf("\n");
	}
	if (SlimeHp <= 0 && YusyaHp > 0) {
		printf("スライムを倒した。");
	}
	if (SlimeHp > 0 && YusyaHp <= 0)
	{
		printf("勇者が倒れた。");
	}
}
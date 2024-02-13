#include<stdio.h>
int main() {
	int SlimeHp, YusyaHp, damege;
	SlimeHp = 10;
	YusyaHp = 10;
	printf("スライムのHP:");
	for (int i = 0; i < SlimeHp; i++) {
		printf("■");
	}
	printf("\n");
	printf("勇者のHP:");
	for (int i = 0; i < YusyaHp; i++) {
		printf("■");
	}
	printf("\n");
	printf("\n");
	for (;;)
	{
		printf("勇者のターン\n");
		printf("ダメージを入力してください:");
		scanf_s("%d", &damege);
		SlimeHp = SlimeHp - damege;
		printf("勇者はスライムに%dダメージを与えた。\n", damege);
		if (SlimeHp <= 0) {
			break;
		}
		printf("スライムのターン\n");
		if (SlimeHp == 1) {
			printf("スライムは水を吸収して5回復した。\n");
			SlimeHp += 5;
			printf("スライムのhp: %d ", SlimeHp);
			for (int i = 0; i < SlimeHp; i++) {
				printf("■");
			}
			printf("\n");
			printf("勇者のhp: %d ",YusyaHp);
			for (int j = 0; j < YusyaHp; j++) {
				printf("■");
			}
			printf("\n");
			continue;
		}
		YusyaHp -= 3;
		printf("勇者は3ダメージ受けた。\n");
		if (YusyaHp <= 0) {
			break;
		}
		printf("スライムのhp: %d ",SlimeHp);
		for (int i = 0; i < SlimeHp; i++) {
			printf("■");
		}
		printf("\n");
		printf("勇者のhp: %d ",YusyaHp);
		for (int j = 0; j < YusyaHp; j++) {
			printf("■");
		}
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
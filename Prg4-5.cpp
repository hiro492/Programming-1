#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hp1, hp2, time;
	printf("プレイヤー1のHP:");
		scanf("%d", &hp1);
	printf("プレイヤー2のHP:");
		scanf("%d", &hp2);
	printf("残り時間:");
		scanf("%d", &time);
		if (hp1 == hp2 && time == 0) {
			printf("引き分け");
	}
}
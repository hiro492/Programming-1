#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hp1, hp2, time;
	printf("�v���C���[1��HP:");
		scanf("%d", &hp1);
	printf("�v���C���[2��HP:");
		scanf("%d", &hp2);
	printf("�c�莞��:");
		scanf("%d", &time);
		if (hp1 == hp2 && time == 0) {
			printf("��������");
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0 ,sum = 0;
	do {
		printf("��������͂��Ă�������(0�ŏI��):");
		scanf("%d", &num);
		sum = sum + num;
	} while (num != 0);
	printf("���v��%d�ł��B\n", sum);
	return 0;
}
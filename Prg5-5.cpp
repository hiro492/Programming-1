#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int hp = 10;
	int damege = 0;
	puts("�X���C���������ꂽ�B");
	printf("�X���C����HP:%d\n", hp );
	printf("\n");
	do{
		printf("�䂤���Ⴊ�^����_���[�W:");
			scanf("%d", & damege);
			hp = hp - damege;
			printf("�X���C���̃_���[�W:%d\n",hp);
			printf("\n");

	} while (hp > 0 );

	printf("�X���C����|�����B");
	return 0;
}
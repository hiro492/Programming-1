// �������p�̒��p�񓙕ӎO�p�`��\���i�֐��Łj
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//--- �L������'*'��n�A�����ĕ\�� ---//
void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int len;

	printf("�������p�񓙕ӎO�p�`�����܂��B\n");
	printf("�Z�ӁF");
	scanf("%d", &len);

	for (int i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}

// �ǂݍ��񂾐����l�͊�ł��邩�����ł��邩
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("��������͂���F");
	scanf("%d", &n);

	if (n % 2)
		puts("���̐��͊�ł��B");
	else
		puts("���̐��͋����ł��B");

	return 0;
}

// �ǂݍ��񂾐����l�͂T�Ŋ���؂�Ȃ�������؂�邩
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("��������͂���F");
	scanf("%d", &n);

	if (n % 5)
		puts("���̐��͂T�Ŋ���؂�܂���B");
	else
		puts("���̐��͂T�Ŋ���؂�܂��B");

	return 0;
}

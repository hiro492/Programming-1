// 3�̐����̍ŏ��l�����߂�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//--- 3�̐����̍ő�l��Ԃ� ---//
int min3(int a, int b, int c)
{
	int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	return min;
}

int main(void)
{
	int n1, n2, n3;

	puts("3�̐�������͂���B");
	printf("����n1�F");   scanf("%d", &n1);
	printf("����n2�F");   scanf("%d", &n2);
	printf("����n3�F");   scanf("%d", &n3);


	printf("�ł��������l��%d�ł��B\n", min3(n1, n2, n3));

	return 0;
}

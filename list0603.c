// ��̐����̂Q��l�̍������߂�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//--- n�̂Q��l��Ԃ� ---//
int sqr(int n)
{
	return n * n;
}

//--- a��b�̍���Ԃ� ---//
int diff(int a, int b)
{
	return a > b ? a - b : b - a;		// �傫���ق����珬�����ق�������
}

int main(void)
{
	int x, y;

	puts("��̐�������͂���B");
	printf("����x�F");   scanf("%d", &x);
	printf("����y�F");   scanf("%d", &y);

	printf("x��2���y��2��̍���%d�ł��B\n", diff(sqr(x), sqr(y)));

	return 0;
}

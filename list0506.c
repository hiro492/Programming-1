// �z��̗v�f�̏�����

#include <stdio.h>

int main(void)
{
	int a[4] = {
		1868,		// �����̍ŏ��̐���N
		1912,		// �吳�̍ŏ��̐���N
		1926,		// ���a�̍ŏ��̐���N
		1989,		// �����̍ŏ��̐���N
	};

	int b[] = {1, 2, 3};  // �v�f����3�ƂȂ�

	int c[5] = {1, 2};	  // int c[5] = {1, 2, 0, 0, 0}; �Ɠ��� 

	int d[5] = {0};		  // �S�v�f��0�ŏ�����

	for (int i = 0; i < 4; i++)
		printf("a[%d] = %d\n", i, a[i]);
	putchar('\n');

	for (int i = 0; i < 3; i++)
		printf("b[%d] = %d\n", i, b[i]);
	putchar('\n');

	for (int i = 0; i < 5; i++)
		printf("c[%d] = %d\n", i, c[i]);
	putchar('\n');

	for (int i = 0; i < 5; i++)
		printf("d[%d] = %d\n", i, d[i]);
	putchar('\n');

	return 0;
}

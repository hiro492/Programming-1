// �ǂݍ��񂾎O�̐����l�̍ő�l�����߂ĕ\��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("�O�̐�������͂���B");
	printf("�����P�F");   scanf("%d", &n1);
	printf("�����Q�F");   scanf("%d", &n2);
	printf("�����R�F");   scanf("%d", &n3);

	// �Ƃ肠�����ő�l��n1�ɂ���
	 max = n1;
	// n2�Ɣ�r���ē���ւ�
	 if (n2 > max) {
		 max = n2;
	}
	// n3�Ɣ�r���ē���ւ�
	 if (n3 > max) {
		 max = n3;
	 }

	printf("�ő�l��%d�ł��B\n", max);

	return 0;
}

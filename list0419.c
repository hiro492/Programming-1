// �����`��`��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int height, width;

	puts("�����`��\�����܂��B");
	printf("�����F");   scanf("%d", &height);
	printf("�����F");   scanf("%d", &width);

	for (int i = 1; i <= height; i++) {		// �����`��height�s
		for (int j = 1; j <= width; j++)	// �e�s��width��'*'��\��
			putchar('*');
		putchar('\n');						// ���s
	}

	return 0;
}

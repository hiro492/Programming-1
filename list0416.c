// �ǂݍ��񂾐����l�ȉ��̋�����\��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("�����l�F");
	scanf("%d", &n);

	for (int i = 2; i <= n; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}

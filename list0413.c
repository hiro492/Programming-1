// �ǂݍ��񂾐����̌���������A���\���ifor���j
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐����F");
	scanf("%d", &no);

	for (int i = 1; i <= no; i++) {
		putchar('*');
		putchar('\n');
		for (int i = 2; i == 7; i++) {
			putchar('*');
		}
	}
		
	putchar('\n');

	return 0;
}

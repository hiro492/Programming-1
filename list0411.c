// ���������X�Ɠǂݍ���Ő��̐����l�݂̂̍��v�����߂�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	puts("���̐����l�����Z���܂��i�I����-9999�j�B");

	int sum = 0;
	while (1) {
		int no;

		printf("�����l�F");
		scanf("%d", &no);
		if (no == -9999)
			break;
		else if (no <= 0)
			continue;
		sum += no;
	} 

	printf("���̐����̍��v��%d�ł��B", sum);

	return 0;
}

// �ǂݍ��񂾌��̋G�߂�\��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month;					// ��

	printf("�����ł����F");
	scanf("%d", &month);

	if (month >= 3 && month <= 5)					// �t�F3�ȏォ��5�ȉ�
		printf("%d���͏t�ł��B\n", month);
	else if (month >= 6 && month <= 8)				// �āF6�ȏォ��8�ȉ�
		printf("%d���͉Ăł��B\n", month);
	else if (month >= 9 && month <= 11)				// �H�F9�ȏォ��11�ȉ�
		printf("%d���͏H�ł��B\n", month);
	else if (month == 1 || month == 2 || month == 12)	// �~�F1�܂���2
		printf("%d���͓~�ł��B\n", month);				//      �܂���12
	else
		printf("%d���͂���܂����!!\a\n", month);

	return 0;
}

// �ǂݍ��񂾐��̐����l�܂ŃJ�E���g�A�b�v
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	int i = 0;
	while (i <= no)
		printf("%d ", i++);		// i�̒l��\��������ɃC���N�������g
	printf("\n");				// ���s

	return 0;
}

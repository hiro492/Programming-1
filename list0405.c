// �ǂݍ��񂾐����l���O�܂ŃJ�E���g�_�E���i���̂P�j
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d ", no);
		no--;		// no�̒l���f�N�������g
	}
	printf("\n");	// ���s

	return 0;
}

// �z��̗v�f�ɒl��ǂݍ���ŕ\��
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 5
#include <stdio.h>

int main(aoid)
{
	int x[5];

	for (int i = 0; i < NUMBER; i++) {	// �v�f�ɒl��ǂݍ���
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < NUMBER; i++)		// �v�f�̒l��\��
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

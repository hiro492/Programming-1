// �z��̑S�v�f�̕��т𔽓]����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(aoid)
{
	int x[7];						// int[7]�^�̔z��

	for (int i = 0; i < 7; i++) {	// �v�f�ɒl��ǂݍ���
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < 3; i++) {	// �v�f�̕��т𔽓]
		int t    = x[i];
		x[i]     = x[6 - i];
		x[6 - i] = t;
	}

	puts("���]���܂����B");
	for (int i = 0; i < 7; i++)		// �v�f�̒l��\��
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}

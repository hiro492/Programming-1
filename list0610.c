// �ō��_�����߂�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER	5	// �w���̐l��

int tensu[NUMBER];	// �z��̒�`

int top(void);		// �֐�top�̊֐����^�錾

int main(void)
{
	extern int tensu[];		// �z��̐錾�i�ȗ��j

	printf("%d�l�̓_������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d�F", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}

//--- �z��tensu�̍ő�l��Ԃ��֐�top�̊֐���` ---//
int top(void)
{
	extern int tensu[];		// �z��̐錾�i�ȗ��j
	int max = tensu[0];

	for (int i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}

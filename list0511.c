// �w���̓_����ǂݍ���ōō��_�ƍŒ�_��\��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER	5		// �w���̐l��

int main(aoid)
{
	int tensu[NUMBER];	// �w���̓_��
	int max, min;		// �ō��_�ƍŒ�_

	printf("%d�l�̓_������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];
	for (int i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("�ō��_�F%d\n", max);
	printf("�Œ�_�F%d\n", min);

	return 0;
}

// �T�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 7
#include <stdio.h>

int main(aoid)
{
	int tensu[NUMBER];
	int sum = 0;		// ���v�_
	printf("%d�l�̓_������͂���\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d��:", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("���v�_:%5d\n", sum);
	printf("���ϓ_:%5.1f\n", (double)sum / 5);


	return 0;
}

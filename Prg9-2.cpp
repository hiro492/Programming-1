// �T�l�̊w���̓_����ǂݍ���ō��v�_�ƕ��ϓ_��\��
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 5
#include <stdio.h>

int main(void)
{
	int tensu[NUMBER];
	//int sum = 0;		// ���v�_
	int tmp = 0;
	int count = 0;
	//printf("%d�l�̓_������͂���\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d��:", i + 1);
		scanf("%d", &tensu[i]);
		tmp = tensu[i];
		if (tmp%2 == 0)
		{
			count++;
		}
	}

	printf("�����̐�:%d\n", count);
	//printf("���ϓ_:%5.1f\n", (double)sum / 5);


	return 0;
}
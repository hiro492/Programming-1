// �w�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\���i���f����j
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("�����͉��F");
	scanf("%d", &num);
	printf("�I����-9999\n");

	int i;
	int sum = 0;			// ���v�l
	for (i = 0; i < num; i++) {
		int tmp;
		printf("No.%d�F", i + 1);
		scanf("%d", &tmp);
		if (tmp == -9999) break;
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / i);

	return 0;
}

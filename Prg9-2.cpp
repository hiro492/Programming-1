// ５人の学生の点数を読み込んで合計点と平均点を表示
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 5
#include <stdio.h>

int main(void)
{
	int tensu[NUMBER];
	//int sum = 0;		// 合計点
	int tmp = 0;
	int count = 0;
	//printf("%d人の点数を入力せよ\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d番:", i + 1);
		scanf("%d", &tensu[i]);
		tmp = tensu[i];
		if (tmp%2 == 0)
		{
			count++;
		}
	}

	printf("偶数の数:%d\n", count);
	//printf("平均点:%5.1f\n", (double)sum / 5);


	return 0;
}
// ５人の学生の点数を読み込んで合計点と平均点を表示
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 7
#include <stdio.h>

int main(aoid)
{
	int tensu[NUMBER];
	int sum = 0;		// 合計点
	printf("%d人の点数を入力せよ\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%d番:", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("合計点:%5d\n", sum);
	printf("平均点:%5.1f\n", (double)sum / 5);


	return 0;
}

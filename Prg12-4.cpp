#include<stdio.h>
#define NUMBER 10
int main() {
	int num[NUMBER];
	int max, min;
	printf("���l��10���͂��Ă�������:");
	for(int i = 0; i <= 9; i++) {
		scanf_s("%d", &num[i]);
	}
	min = max = num[0];
	for (int i = 1; i < NUMBER; i++) {
		if (num[i] > max) 	max = num[i];
		
		if (num[i] < min) 	min = num[i];
		
	}
	printf("�ő�l: %d\n", max);
	printf("�ŏ��l: %d\n", min);
	return 0;
}
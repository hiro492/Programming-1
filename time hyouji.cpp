#include<stdio.h>]
#define TIME_SECOND 3600
#define SECOND 60
#define NUMBER 5
int main() {
	int time[NUMBER], h[NUMBER], m[NUMBER], s[NUMBER];
	for (int i = 0; i < NUMBER; i++) {
		do {
			printf("�Ζ����Ԃ���͂��Ă�������(�P�ʁ@�b):");
			scanf_s("%d", &time[i]);
		} while (time[i] < 0);
		h[i] = time[i] / TIME_SECOND;

		time[i] = time[i] - h[i] * TIME_SECOND;
		m[i] = time[i] / SECOND;
		time[i] = time[i] - m[i] * SECOND;
		s[i] = time[i];
		printf("�Ζ����Ԃ� %d:%d:%d �ł��B\n", h[i], m[i], s[i]);
	}
	return 0;
}
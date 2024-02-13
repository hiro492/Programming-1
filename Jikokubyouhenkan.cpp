#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Time_adopter(int time, int minite, int second) {
	int sum = time * 3600 + minite * 60 + second;
	return sum;
}
int main() {
	int time, minite, second;
	printf("ŽžŠÔ:•ª:•b");
	scanf("%d  %d %d", &time, & minite, & second);
	printf("%d•b\n", Time_adopter(time, minite, second));
	return 0;
}
#include<stdio.h>
#define NUMBER 10
int main() {
	int num[NUMBER];
	int max, min;
	printf("”’l‚ğ10ŒÂ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	for(int i = 0; i <= 9; i++) {
		scanf_s("%d", &num[i]);
	}
	min = max = num[0];
	for (int i = 1; i < NUMBER; i++) {
		if (num[i] > max) 	max = num[i];
		
		if (num[i] < min) 	min = num[i];
		
	}
	printf("Å‘å’l: %d\n", max);
	printf("Å¬’l: %d\n", min);
	return 0;
}
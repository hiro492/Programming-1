#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0 ,sum = 0;
	do {
		printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(0‚ÅI—¹):");
		scanf("%d", &num);
		sum = sum + num;
	} while (num != 0);
	printf("‡Œv‚Í%d‚Å‚·B\n", sum);
	return 0;
}
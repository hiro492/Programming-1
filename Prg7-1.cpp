#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int score;
	printf("®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &score);

	if (score >= 60) {
		printf("‡Ši‚Å‚·B\n");
	}
	else if (score > 0 && score < 60)
	{
		printf("•s‡Ši‚Å‚·B\n");
	}
	else  {
		printf("•]‰¿‚È‚µ");
	}
		
	return 0;
}
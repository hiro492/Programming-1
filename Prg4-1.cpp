
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("®”‚ğ“ü—Í‚¹‚æF");
	scanf("%d", &n);

	if (n % 3)
		return 0;
	else
		printf("%d‚Í3‚Ì”{”‚Å‚·B\n",n);

	return 0;
}

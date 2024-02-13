#include<stdio.h>
int main() {
	int num;
	do {
		printf("”’l‚ğ“ü—Í (0‚ÅI—¹) :");
		scanf_s("%d", &num);
		if (num % 2 == 0 && num > 0) {
			puts("Even");
		}
		else if (num > 0) {
			puts("Odd");
		}
	} while (num > 0);

	return 0;
}
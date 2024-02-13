#include<stdio.h>
int main() {
	int num;
	printf("”’l‚ğ“ü—Í:");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		puts("Even");
	}
	else {
		puts("Odd");
	}
	return 0;
}
#include<stdio.h>
int main() {
	int num;
	do {
		printf("���l����� (0�ŏI��) :");
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
#include<stdio.h>
int main() {
	int n;
	printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf_s("%d", &n);
	int h = n - 1;
	for (int i = 1; i <= n; i++) {
		//*‚ğ•\¦
		for (int s = 1; s <= n ; s++) {
			putchar('*');
			printf(" ");
		}
		printf("\n");
	}
}
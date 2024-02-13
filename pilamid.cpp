#include<stdio.h>
int main() {
	int i, j;
	for (i = 0; i < 10; j++) {
		for (j = i; j < 10; j++) {
			printf("-");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
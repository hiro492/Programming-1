#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j;
	printf("�J�n:");
	scanf("%d", &i);
	printf("�I��:");
	scanf("%d", &j);
	while (j >= i)
	{
		printf("%d ", i);
		i++;
		if (j == i) {
			break;
		}
	}
	while (j <= i) {
		printf("%d ", i);
		i--;
		if (i == j ) {
			printf("%d ", i);
			break;
		}
	}
	return 0;
}
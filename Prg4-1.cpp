
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("��������͂���F");
	scanf("%d", &n);

	if (n % 3)
		return 0;
	else
		printf("%d��3�̔{���ł��B\n",n);

	return 0;
}

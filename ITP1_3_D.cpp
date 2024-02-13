#include<stdio.h>
int main() {
	int a, b,c;
	int count = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	for (int x = a; a <= b; a++)
	{
		if (a % c == 0) count++;
	}
	printf("%d\n", count);
}
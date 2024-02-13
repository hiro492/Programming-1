// Prg13-3
#include<stdio.h>

int kansu(int x) {
	x = 10;
	return x;
}

int main(void) {
	int x = 0;
	x = kansu(x);
	printf("%d", x);
	x = 5;

	return 0;
}

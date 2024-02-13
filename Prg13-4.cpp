// Prg13-4
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double enmen(double r);

int main(void) {
	double r;
	scanf("%lf", &r);

	printf("�ʐρF%f\n", enmen(r));
	
	return 0;
}

double enmen(double r) {
	return r * r * 3.14;
}

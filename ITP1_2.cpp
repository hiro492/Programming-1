#define _CRT_NO_SECURE_WARINGS
#include<stdio.h>
int a, b, c,tmp,max;
int main() {
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b) {
   	tmp = b;
		b = a;
		a = tmp;
	}
	 if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	 }
	 if (b > c) {
		 tmp = c;
		 c = b;
		 b = tmp;
}

	printf("%d %d %d", a, b);
}
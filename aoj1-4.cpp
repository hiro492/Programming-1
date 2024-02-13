#include<stdio.h>
int main() {
	int S, H, M, SEC;
	scanf_s("%d", &S);
	H = S / 3600;
	M = H % 60;
	S = H / 3600;
	printf("%d:%d:%d", H, M, S);
}
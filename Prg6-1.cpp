//#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
int main() {
	int i,number;
	int sum = 0;
	printf("��������͂��Ă�������:");
		scanf_s("%d", &number);
		for (i = 1; i <= number; i++) {
			sum += i;
	}
		printf("1����%d�܂ł̑��a��%d�ł��B", number,sum);
}

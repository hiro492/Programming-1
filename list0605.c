// �ׂ�������߂�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//--- x��n���Ԃ� ---//
double power(double x, int n)
{
	double tmp = 1.0;

	for (int i = 1; i <= n; i++)
		tmp *= x;	// tmp��x���|����
	return tmp;
}

int main(void)
{
	double a;
	int b;

	printf("a��b������߂܂��B\n");
	printf("����a�F");   scanf("%lf", &a);
	printf("����b�F");   scanf("%d",  &b);

	printf("%.2f��%d���%.2f�ł��B\n", a, b, power(a, b));

	return 0;
}

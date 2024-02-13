#include<stdio.h>
int Sum(int x) {
	int sum = 0;
	for (int i = 0; i <= x; i++) {
		 sum = sum + i;
	}
	return sum;
}
int main() {
	int num,su;
	printf("”’l‚ğ“ü—Í:");
	scanf_s("%d", &num);
	su = Sum(num);
	printf("1‚©‚ç%d‚Ì‡Œv‚ÍA%d",num,su);
	return 0;
}
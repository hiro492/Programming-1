#include<stdio.h>
int main() {
	int n;
	printf("�����l����͂��Ă�������:");
	scanf_s("%d", &n);
	int h = n - 1;
	for (int i = 1; i <= n; i++) {
		//*��\��
		for (int s = 1; s <= n ; s++) {
			putchar('*');
			printf(" ");
		}
		printf("\n");
	}
}
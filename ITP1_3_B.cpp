#include<stdio.h>

int main() {
	int x;
	int i = 0;
	for (;;) {

		scanf_s("%d", &x);
		if (x == 0) break;
		i++;
		printf("Case %d: %d\n", i, x);
}

	return 0;
}

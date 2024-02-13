#include<stdio.h>
int main() {
	int x, y, tmp;
	for (; ;) {
		scanf_s("%d%d", &x, &y);
		if (x == 0 && y == 0) break;
		if (x > y) {
			tmp = y;
			y = x;
			x = tmp;
		}
		printf("%d %d\n", x, y);
	}
		return 0;
	}

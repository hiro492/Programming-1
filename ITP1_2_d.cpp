#define _CRT_NO_SECURE_WARINGS
#include<stdio.h>
#include<math.h>
int W, H, x, y, r;
int main() {
	scanf_s("%d%d%d%d%d", &W, &H, &x, &y, &r);
	if (W >= (x + r) && (x - r) >= 0 && H >= (y + r) && (y - r) >= 0) {
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
// ある配列において隣り合う数値で⽚⽅が重複する要素を表⽰する
#include <stdio.h>
int main(void)
{
	int aryData[10] = { 1, 2, 3, 4, 4, 5, 6, 6, 7, 1 };
	for (int i = 1; i < 10; i++) {
		if (aryData[i] == aryData[i - 1]) {
			printf("%d ", aryData[i]);
	}
	}
	printf("\n");
	return 0;
}
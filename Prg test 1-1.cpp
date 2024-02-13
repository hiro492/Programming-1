#include<stdio.h>
int Order(void) {
	int num,flag;
	flag = 0;
	while (flag == 0)
	{
		printf("1 ~ 4までの番号を選択してください:");
		scanf_s("%d", &num);
		if (num >= 1 && num <= 4) {
			flag = 1;
		}
		else {
			printf("正しい番号を入力してください\n");
		}
	}
	return num;
}
void main() {
	int a = Order();
	switch (a)
	{
	case 1: printf("ハンバーグです\n"); break;
	case 2: printf("シチューです\n"); break;
	case 3: printf("カレーです\n"); break;
	case 4: printf("ドリアです\n"); break;
	}
}
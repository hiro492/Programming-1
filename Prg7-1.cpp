#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int score;
	printf("��������͂��Ă�������:");
	scanf("%d", &score);

	if (score >= 60) {
		printf("���i�ł��B\n");
	}
	else if (score > 0 && score < 60)
	{
		printf("�s���i�ł��B\n");
	}
	else  {
		printf("�]���Ȃ�");
	}
		
	return 0;
}
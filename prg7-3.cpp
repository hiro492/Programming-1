#include<stdio.h>
int main(void) {
	int PasswordNumber, AnswerNumber;
	PasswordNumber = 5678;
	do {
		printf("パスワードを入力:");
		scanf_s("%d", &AnswerNumber);
	} while (PasswordNumber != AnswerNumber);
		
	puts("認証ok");
	return 0;


}
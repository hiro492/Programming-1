#include<stdio.h>
int main(void) {
	int PasswordNumber, AnswerNumber;
	PasswordNumber = 5678;
	do {
		printf("�p�X���[�h�����:");
		scanf_s("%d", &AnswerNumber);
	} while (PasswordNumber != AnswerNumber);
		
	puts("�F��ok");
	return 0;


}
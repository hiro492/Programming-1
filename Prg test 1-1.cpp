#include<stdio.h>
int Order(void) {
	int num,flag;
	flag = 0;
	while (flag == 0)
	{
		printf("1 ~ 4�܂ł̔ԍ���I�����Ă�������:");
		scanf_s("%d", &num);
		if (num >= 1 && num <= 4) {
			flag = 1;
		}
		else {
			printf("�������ԍ�����͂��Ă�������\n");
		}
	}
	return num;
}
void main() {
	int a = Order();
	switch (a)
	{
	case 1: printf("�n���o�[�O�ł�\n"); break;
	case 2: printf("�V�`���[�ł�\n"); break;
	case 3: printf("�J���[�ł�\n"); break;
	case 4: printf("�h���A�ł�\n"); break;
	}
}
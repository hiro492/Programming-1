// Prg13-2
#include<stdio.h>
#define	NUM	5

int main(void) {
	int tmp, i;
	int n[NUM]= { 1, 2, 3, 4, 5 };

	// �S�����J��Ԃ��K�v�͂Ȃ�
	for (i = 0; i < 2; i++) {
		// �܂��A0�Ԗڂ�5�Ԗڂ����ւ��邱�Ƃ��l����
		// ���̕ϐ���5�Ԗڂ̔z��̒��g���R�s�[�i�ޔ��j����
		tmp = n[NUM - 1 - i];
		// 5�Ԗڂ̔z���0�Ԗڂ̔z��̒��g��������
		n[NUM - 1 - i] = n[i];
		// 0�Ԗڂ̔z���5�Ԗڂ̔z��̒��g��������B�R�s�[���Ă����ϐ����g���B
		n[i] = tmp;
	}

	for (i = 0; i < NUM; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");

	return 0;
}

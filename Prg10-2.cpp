// �^�C����h��Ԃ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, flag = 0, no;
	// �@2�����z��̏����� data[][]
	int data[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	// �^�C���\��
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (data[i][j] == 0) 
				printf("�� ");
			else 
				printf("�� ");
		}
		printf("\n");
	}

	while (flag == 0) {
		printf("���Ԗڂ�h��H");
		scanf("%d", &no);
		no = no - 1;
		/* 1�����z��@���@2�����z��
		   0 1 2  >  [0][0] [0][1] [0][2]
		   3 4 5  >  [1][0] [1][1] [1][2]
		   6 7 8  >  [2][0] [2][1] [2][2]
		*/
		// �Adata[][] = 1;
		if (no <= 2) {
			data[0][no] = 1;
		}
		else if (no <= 5) {
			data[1][no - 3] = 1;
		}
		else {
			data[2][no - 6] = 1;
		}
		// �^�C���\��
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (data[i][j] == 0)
					printf("�� ");
				else
					printf("�� ");
			}
			printf("\n");
		}

		// ���ׂēh�������ǂ���
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (data[i][j] == 0) break;
			}
		}
		// �B���ׂēh��Ă���ꍇ�̓t���O�𗧂Ă�
		if (i == 3 && j == 3) {
			flag = 1;
		}
	}

	return 0;
}

// �^�C����h��Ԃ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2�����z��̏�����
int data[3][3] = { {0, 1, 0}, {1, 1, 0}, {0, 0, 1} };
void Draw_a_tile(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (data[i][j] == 0)
				printf("�� ");
			else
				printf("�� ");
		}
		printf("\n");
	}
}
int main(void)
{
	int i, j, flag = 0, no;

	// �^�C���\��
	Draw_a_tile();

	while (flag == 0) {
		printf("���Ԗڂ�h��H");
		scanf("%d", &no);
		no = no - 1;
		/* 1�����z��@���@2�����z��
		   0 1 2  >  [0][0] [0][1] [0][2]
		   3 4 5  >  [1][0] [1][1] [1][2]
		   6 7 8  >  [2][0] [2][1] [2][2]
		*/
		data[no / 3][no % 3] = 1;

		// �^�C���\��
		Draw_a_tile();

		// ���ׂēh�������ǂ���
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (data[i][j] == 0) break;
			}
		}
		// ���ׂēh��Ă���ꍇ�̓t���O�𗧂Ă� ������
		if (i == 3 && j == 3) flag = 1;
	}

	return 0;
}

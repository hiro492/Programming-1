// �^�C����h��Ԃ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int flag = 0, no,count;
	count = 0;
	int data[] = {
		0, 1, 0,
		1, 1, 0,
		0, 0, 1,
	};

	// �@�^�C���\���@�z��̒l��0�̂Ƃ����A1�̂Ƃ�����\������
	for (int i = 0; i < 9; i++) {
		if (data[i] == 1) {
			printf("�� ");
		}
		else {
			printf("�� ");
		}

		if ((i + 1) % 3 == 0) printf("\n");		// 3�̔{���̂Ƃ����s
	}

	while (flag == 0) {
		printf("���Ԗڂ�h��H");
		scanf("%d", &no);
		// �A�w�肳�ꂽ�^�C�����P�ɂ���
		data[no-1] = 1;

		// �@�^�C���\���@��L�Ɠ���������OK
		for (int i = 0; i < 9; i++) {

			if (data[i] == 1) {
				printf("�� ");
			}
			else {
				printf("�� ");
			}
			if ((i + 1) % 3 == 0) printf("\n");		// 3�̔{���̂Ƃ����s
		}

		// ���ׂēh�������ǂ���
		for (int i = 0; i < 9; i++) {
			if (data[i] == 0) {
				break;
			}
			// �B���ׂēh��Ă���ꍇ�̓t���O�𗧂Ă�		
			if (i == 8) {
				flag = 1;
			}
		}
		
	}

	return 0;
}

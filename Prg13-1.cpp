// Prg13-1
#include<stdio.h>

int main(void) {
	int i;
	int kinsyu[9], table[9];	// table:����i���D��d�݁j�𐔂���z��
	int okane = 258321;

	kinsyu[0] = 10000;
	kinsyu[1] = 5000;
	kinsyu[2] = 1000;
	kinsyu[3] = 500;
	kinsyu[4] = 100;
	kinsyu[5] = 50;
	kinsyu[6] = 10;
	kinsyu[7] = 5;
	kinsyu[8] = 1;

	for (i = 0; i < 9; i++) {
		// 1���~�D����1�~�ʂ܂ŁA���Ԃɐ�����
		// ��F25���~�Ȃ�1���~�D25���Ȃ̂Ł@table[0]�@�ɑ΂��ā@25�@����������Ηǂ�
		table[i] = okane / kinsyu[i];
		// 1���~�D�������I�������A��5��~�D�𐔂��邽�߂ɁAokane�̎c�������炷
		// ��F258321�Ȃ�Aokane�@�ɑ΂��ā@8321�@����������Ηǂ�
		okane = okane - table[i] * kinsyu[i];
	}

	for (i = 0; i < 9; i++) {
		printf("%d�~�̐��F%d\n", kinsyu[i], table[i]);
	}

	return 0;
}

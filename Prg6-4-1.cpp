#include<stdio.h>
int main() {
	int SlimeHp, YusyaHp, damege;
	SlimeHp = 10;
	YusyaHp = 10;
	printf("�X���C����HP: 10\n");
	printf("�E�҂�HP: 10\n");
	printf("\n");
	for(;;)
	{
		printf("�E�҂̃^�[��\n");
		printf("�_���[�W����͂��Ă�������:");
		scanf_s("%d", &damege);
		SlimeHp = SlimeHp - damege;
		if (SlimeHp <= 0) {
			break;
		}
		printf("�X���C���̃^�[��\n");
		YusyaHp -= 3;
		printf("�E�҂�3�_���[�W�󂯂��B\n");
		if (YusyaHp <= 0) {
			break;
		}
		printf("�X���C����hp: %d\n", SlimeHp);
		printf("�E�҂�hp: %d\n", YusyaHp);
		printf("\n");
	}
	if (SlimeHp <= 0 && YusyaHp > 0) {
		printf("�X���C����|�����B");
	}
	if (SlimeHp > 0 && YusyaHp <= 0)
	{
		printf("�E�҂��|�ꂽ�B");
	}
}
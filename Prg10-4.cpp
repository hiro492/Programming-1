// Prg10-4 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // �@�X���C���Q�C��HP��z��ŏ���������
    int slimeHP[] = { 10,10 };
    int target = 0;
    int heroHP = 10;
    int damage, sATK = 2;

    while ((slimeHP[0] > 0 || slimeHP[1] > 0) && heroHP > 0) {
        printf("�E�҂�HP: %d�@", heroHP);
        for (int i = 1; i <= heroHP; i++)
            printf("��");
        printf("\n");

        for (int i = 0; i <= 1; i++) {
            if (slimeHP[i] <= 0) continue;
            printf("�X���C��%d��HP: %d�@", i + 1, slimeHP[i]);
            for (int j = 1; j <= slimeHP[i]; j++)
                printf("��");
            printf("\n");
        }
        printf("\n");

        printf("�E�҂̃^�[��\n");
        printf("�_���[�W����͂��Ă��������F");
        scanf("%d", &damage);

        // �A�X���C���P�����Ȃ��ꍇ target��1�ɂ���
        if (slimeHP[0] <= 0) {
            target = 1;
        }
        printf("�X���C��%d��%d�_���[�W��^�����B\n", target+1, damage);
        slimeHP[target] -= damage;
        if (slimeHP[target] <= 0) {
            printf("�X���C��%d��|�����B\n", target+1);
            // �A�X���C�����Q�C�Ƃ����Ȃ���Ώ����ibreak�j����

        }

        for (int i = 0; i <= 1; i++) {
            // �B�X���C����HP��0�ȉ��̏ꍇ�́A�Y���X���C���̃^�[�����΂�
            if (slimeHP[i] <= 0) {
                continue;
            }
            printf("�X���C��%d�̃^�[��\n", i+1);
            if (slimeHP[i] == 1) {
                printf("�X���C��%d�͐����z������5�񕜂����B\n", i+1);
                slimeHP[i] += 5;
            } else {
                printf("�E�҂�%d�_���[�W���󂯂��B\n", sATK);
                heroHP -= sATK;
            }
        }

        if (heroHP <= 0) {
            printf("�E�҂͓|�ꂽ�B\n");
            break;
        }

    }

    return 0;
}


// Prg10-4 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Indicate_Damege(int heroHP) {
    printf("�E�҂�HP: %d�@", heroHP);
    for (int i = 1; i <= heroHP; i++)
        printf("��");
    printf("\n");
}
void Indicaite_Slime_HP(int sHP) {
    int i = 0;
    printf("�X���C��%d��HP: %d�@", i + 1, sHP);
    for (int j = 1; j <= sHP; j++)
        printf("��");
    printf("\n");
}
int attack() {
    int damege,dam;
    printf("�E�҂̃^�[��\n");
    printf("�_���[�W����͂��Ă��������F");
    scanf("%d", &dam);
    return dam;
}
int main() {
    int slimeHP[2] = { 10, 10 };
    int sHP = 0;
    int target = 0;
    int heroHP = 10;
    int damage, sATK = 2;

    while ((slimeHP[0] > 0 || slimeHP[1] > 0) && heroHP > 0) {
       

        for (int i = 0; i <= 1; i++) {
            sHP = slimeHP[i];
            if (sHP <= 0) continue;
            Indicaite_Slime_HP(sHP);
        }
        printf("\n");

        damage = attack();

        if (slimeHP[0] <= 0) target = 1;
        printf("�X���C��%d��%d�_���[�W��^�����B\n", target+1, damage);
        slimeHP[target] -= damage;
        if (slimeHP[target] <= 0) {
            printf("�X���C��%d��|�����B\n", target+1);
            if (slimeHP[1] <= 0) break;
        }

        for (int i = 0; i <= 1; i++) {
            if (slimeHP[i] <= 0) continue;
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


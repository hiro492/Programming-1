// Prg10-4 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ①スライム２匹のHPを配列で初期化する
    int slimeHP[] = { 10,10 };
    int target = 0;
    int heroHP = 10;
    int damage, sATK = 2;

    while ((slimeHP[0] > 0 || slimeHP[1] > 0) && heroHP > 0) {
        printf("勇者のHP: %d　", heroHP);
        for (int i = 1; i <= heroHP; i++)
            printf("■");
        printf("\n");

        for (int i = 0; i <= 1; i++) {
            if (slimeHP[i] <= 0) continue;
            printf("スライム%dのHP: %d　", i + 1, slimeHP[i]);
            for (int j = 1; j <= slimeHP[i]; j++)
                printf("■");
            printf("\n");
        }
        printf("\n");

        printf("勇者のターン\n");
        printf("ダメージを入力してください：");
        scanf("%d", &damage);

        // ②スライム１が居ない場合 targetを1にする
        if (slimeHP[0] <= 0) {
            target = 1;
        }
        printf("スライム%dに%dダメージを与えた。\n", target+1, damage);
        slimeHP[target] -= damage;
        if (slimeHP[target] <= 0) {
            printf("スライム%dを倒した。\n", target+1);
            // ②スライムが２匹ともいなければ勝利（break）する

        }

        for (int i = 0; i <= 1; i++) {
            // ③スライムのHPが0以下の場合は、該当スライムのターンを飛ばす
            if (slimeHP[i] <= 0) {
                continue;
            }
            printf("スライム%dのターン\n", i+1);
            if (slimeHP[i] == 1) {
                printf("スライム%dは水を吸収して5回復した。\n", i+1);
                slimeHP[i] += 5;
            } else {
                printf("勇者は%dダメージを受けた。\n", sATK);
                heroHP -= sATK;
            }
        }

        if (heroHP <= 0) {
            printf("勇者は倒れた。\n");
            break;
        }

    }

    return 0;
}


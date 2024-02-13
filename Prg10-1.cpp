// 野球のスコア結果を確認する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int team, inning;
	int score[2][9] = { {1, 0, 3, 0, 1, 0, 2, 7, 0},
	{0, 2, 0, 0, 5, 0, 0, 0, 6} };
	printf("確認したいスコアのチームとイニング（試合の回）を入力\n");
	printf("チーム 先攻:1, 後攻:2：");
	scanf("%d", &team);
	printf("イニング 1 ~ 9：");
	scanf("%d", &inning);
	// スコア結果の表⽰（先⾏or後攻の表⽰、イニングのスコア）
	
	if (team == 1) {
		printf("先攻チーム%d回目の攻撃：", inning);
		printf("%d点", score[0][inning-1]);
	}

	else {
		printf("後攻チーム%d回目の攻撃：", inning);
		printf("%d点", score[1][inning-1]);
	}

	return 0;
}
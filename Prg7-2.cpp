// 1〜7までの数値に応じて曜⽇を表⽰する 1が⽇曜⽇、7が⼟曜⽇
// 範囲外の数値が⼊⼒された場合は、不正な数値です。と表⽰して終了する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int no;
	printf("1から7までの整数を入力してください：");
	scanf("%d", &no);
	// switch⽂で曜⽇を表⽰
	switch (no) {
	case 1: puts("日曜日"); break;
	case 2: puts("月曜日"); break;
	case 3: puts("火曜日"); break;
	case 4: puts("水曜日"); break;
	case 5: puts("木曜日"); break;
	case 6: puts("金曜日"); break;
	case 7: puts("土曜日"); break;
	default:puts("不正な数値です。"); break;
	}
	return 0;
}
// Prg13-1
#include<stdio.h>

int main(void) {
	int i;
	int kinsyu[9], table[9];	// table:‹àíi‚¨D‚âd‰İj‚ğ”‚¦‚é”z—ñ
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
		// 1–œ‰~D‚©‚ç1‰~‹Ê‚Ü‚ÅA‡”Ô‚É”‚¦‚é
		// —áF25–œ‰~‚È‚ç1–œ‰~D25–‡‚È‚Ì‚Å@table[0]@‚É‘Î‚µ‚Ä@25@‚ª‘ã“ü‚³‚ê‚ê‚Î—Ç‚¢
		table[i] = okane / kinsyu[i];
		// 1–œ‰~D‚ª”‚¦I‚í‚Á‚½‚çA‚Â‚¬5ç‰~D‚ğ”‚¦‚é‚½‚ß‚ÉAokane‚Ìc‹à‚ğŒ¸‚ç‚·
		// —áF258321‚È‚çAokane@‚É‘Î‚µ‚Ä@8321@‚ª‘ã“ü‚³‚ê‚ê‚Î—Ç‚¢
		okane = okane - table[i] * kinsyu[i];
	}

	for (i = 0; i < 9; i++) {
		printf("%d‰~‚Ì”F%d\n", kinsyu[i], table[i]);
	}

	return 0;
}

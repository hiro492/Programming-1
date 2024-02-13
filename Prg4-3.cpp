// 身⻑と体重からBMIを算出し、BMIに応じた体型を表示する
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	double h, w, BMI;// 身⻑と体重
	printf("身長(m)：");  scanf("%lf", &h);
	printf("体重(kg)："); scanf("%lf", &w);
	BMI = w/pow(h,2.0);/// 体重÷(身⻑)^2

	printf("あなたのBMIは、%0.1fです。\n",BMI);
	if (BMI<=18.5 ) {
		printf("痩せています。\n");
	}
	else if (BMI >= 18.5 && BMI <= 22.9) {
		printf("普通の体型です。\n");
	}
	else {
		printf("肥満のようです。\n");
	}
	return 0;
}
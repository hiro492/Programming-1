#include<stdio.h>
int no;
int main() {	
	scanf_s("%d", &no);
	while (no > 0)
	{
		printf("%d", no % 10);
		no /= 10;
	}
	return 0;
}

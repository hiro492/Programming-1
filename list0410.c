// �ǂݍ��񂾐��̐����l���t���ɕ\��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;

	do {
		printf("���̐�������͂���F");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���łȂ�������͂��Ȃ��ł��������B");
	} while (no <= 0);

	// no��0���傫���Ȃ��Ă���
	printf("���̐����t����ǂނ�");
	while (no > 0) {
		printf("%d", no % 10);	// �ŉ��ʂ̌��̒l��\�� 
		no /= 10;				// �E�ɂP�����炷
	}
	puts("�ł��B");

	return 0;
}

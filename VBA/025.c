#include<stdio.h>
main()
{
	char ch;
	printf("��������́F");
	scanf("%c", &ch);
	if ('a' <= ch && 'z' >= ch || 'A' <= ch && 'Z' >= ch) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if (0 <= ch && '9' >= ch) {
			printf("�����ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}
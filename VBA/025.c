#include<stdio.h>
main()
{
	char ch;
	printf("文字を入力：");
	scanf("%c", &ch);
	if ('a' <= ch && 'z' >= ch || 'A' <= ch && 'Z' >= ch) {
		printf("アルファベットです");
	}
	else {
		if (0 <= ch && '9' >= ch) {
			printf("数字です");
		}
		else {
			printf("その他の文字です");
		}
	}
}
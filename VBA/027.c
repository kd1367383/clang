#include<stdio.h>
main()
{
	char d;
	printf("文字を入力：");
	scanf("%c", &d);
	if ('a' <= d && 'z' >= d) {
		printf("変換すると%c\n", d-0x20);
	}
	else{
		if ('A' <= d && 'Z' >= d) {
			printf("変換すると%c\n", d+0x20);
		}
		else {
			printf("error");
		}
	}
}
#include<stdio.h>
main()
{
	int i;
	printf("整数");
	scanf("%d", &i);
	if (i < 0) {
		printf("入力値は「マイナス」です");
	}
	else {
		if (i == 0) {
			printf("入力値は「0」です");
		}
		else {
			printf("入力値は「プラス」です");
		}
	}
}
#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("処理を入力：");
	scanf("%c", &flg);
	printf("整数を入力：");
	scanf("%d", &d1);
	printf("整数を入力：");
	scanf("%d", &d2);
	printf("整数を入力：");
	scanf("%d", &d3);
	switch (flg) {
	case 'd':
	case 'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("最大値は%d",d1);
			}
			else {
				printf("最大値は%d",d3);
			}
		}
		else {
			if (d2 > d3) {
				printf("最大値は%d",d2);
			}
			else {
				printf("最大値は%d",d3);
			}
		}
		break;
	case 's':
	case 'S':
		if (d1 < d2) {
			if (d1 < d3) {
				printf("最大値は%d", d1);
			}
			else {
				printf("最大値は%d", d3);
			}
		}
		else {
			if (d2 < d3) {
				printf("最大値は%d", d2);
			}
			else {
				printf("最大値は%d", d3);
			}
		}
		break;
	case 'g':
	case 'G':
		printf("合計は%d", d1 + d2 + d3);
		break;
	case 'h':
	case 'H':
		printf("平均は%d", (d1 + d2 + d3) / 3);
		break;
	default:
		printf("ERROR");
	}
}
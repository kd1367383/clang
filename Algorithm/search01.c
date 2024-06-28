#include<stdio.h>
main()
{
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;
	printf("探索値を入力してください");
	scanf("%d", &s);
	for (i=0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つかりませんでしたｗｗｗ\n");
	}
	else {
		printf("探索値%dを、d[%d]で発見！\n", s, i);
	}
}
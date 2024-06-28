#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k, i;
	printf("何を出しますか\n");
	printf("1：グー 2：チョキ 3：パー");
	scanf("%d", &i);
	srand(time(0));
	k = rand() % 3 + 1;
	if (i == 1) {
		printf("プレイヤーはグーです\n");
	}
	else {
		if (i == 2) {

			printf("プレイヤーはチョキです\n");
		}
		else {
			if (i == 3) {
				printf("プレイヤーはパーです\n");
			}
		}
	}
	if (k == 1) {
		printf("コンピューターはグーです\n\n");
	}
	else {
		if ( k== 2) {

			printf("コンピューターはチョキです\n\n");
		}
		else {
			if (k == 3) {
				printf("コンピューターはパーです\n\n");
			}
		}
	}
	if (i == 1 && k == 2 || i == 2 && k == 3 || i == 3 && k == 1) {
		printf("プレイヤーの勝ちです\n");
	}
	else {
		if (i == 1 && k == 1 || i == 2 && k == 2 || i == 3 && k == 3) {
			printf("引き分けです");
		}
		else {
			printf("プレイヤーの負けです");
		}
	}
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,i;
	srand(time(0));
	k = rand() % 5 + 1;
	printf("今日のあなたの運勢は、");
	for (i = 0; k > i; i++) {
		printf("☆ ");
	}
	printf("です\n");
}
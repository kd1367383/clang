#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,i;
	srand(time(0));
	for (i = 0; 100 > i; i++) {
		k = rand()%100 + 1;
		if (k <= 3) {
			printf("超激レア ");
		}
		else {
			if (k <= 20 && k > 3) {
				printf("激レア  ");
			}
			else {
				if (k <= 50 && k > 20) {
					printf("レア   ");
				}
				else {
					printf("ノーマル ");
				}
			}
		}
	}
	printf("\n");
}
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
			printf("�������A ");
		}
		else {
			if (k <= 20 && k > 3) {
				printf("�����A  ");
			}
			else {
				if (k <= 50 && k > 20) {
					printf("���A   ");
				}
				else {
					printf("�m�[�}�� ");
				}
			}
		}
	}
	printf("\n");
}
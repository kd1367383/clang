#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,i;
	srand(time(0));
	k = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; k > i; i++) {
		printf("�� ");
	}
	printf("�ł�\n");
}
#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;//���[�v�E�o
		}
		printf("%3d", i);
	}
	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;//���̏������΂�
		}
		printf("%3d", i);
	}
}
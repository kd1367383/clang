#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;//ループ脱出
		}
		printf("%3d", i);
	}
	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;//下の処理を飛ばす
		}
		printf("%3d", i);
	}
}
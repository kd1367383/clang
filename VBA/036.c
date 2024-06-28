#include<stdio.h>
main()
{
	int i;
	printf("break test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;//ƒ‹[ƒv’Eo
		}
		printf("%3d", i);
	}
	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;//‰º‚Ìˆ—‚ð”ò‚Î‚·
		}
		printf("%3d", i);
	}
}
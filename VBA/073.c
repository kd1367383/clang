#include<stdio.h>
coi error_msg(void);

main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d/%d=%d・・・%d\n", a, b, a / b, a % b);
	}
	void error_msg(coid) {
		printf("０で割り算はできません\n");
		return;
	}
}
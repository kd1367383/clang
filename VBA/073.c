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
		printf("%d/%d=%d�E�E�E%d\n", a, b, a / b, a % b);
	}
	void error_msg(coid) {
		printf("�O�Ŋ���Z�͂ł��܂���\n");
		return;
	}
}
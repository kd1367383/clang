#include<stdio.h>
main()
{
	int su,d;
	printf("数を入れて：");
	scanf("%d", &su);
	d = 0;
	while (su >d) {
		printf("*");
		d++;
	}
}
#include<stdio.h>
main()
{
	int su, d, k;
	printf("数を入れて：");
	scanf("%d", &su);
	d = 0;
	k = 0;
	while (d <=10) 
	{
		k = su + d;
		printf("%d+%d=%d\n", su, d, k);
		d++;
	}
}
#include<stdio.h>
main()
{
	int su, d, k;
	printf("�������āF");
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
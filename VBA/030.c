#include<stdio.h>
main()
{
	int su, d, k;
	printf("”‚ğ“ü‚ê‚ÄF");
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
#include<stdio.h>
main()
{
	int su, i;
	printf("”‚ÍH");
	scanf("%d", &su);
	do {
		for (i = 0; i < 5; i++)
		{
			printf("*");

		}
		printf("\n");
		su--;
	} while (su > 0);
}
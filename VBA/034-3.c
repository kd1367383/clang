#include<stdio.h>
main()
{
	int i,j,d;
	printf("”‚ÍH");
	scanf("%d", &i);
	d = i + 1;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j<d-i);
		printf("\n");
			i--;
	} while (i>0);
}
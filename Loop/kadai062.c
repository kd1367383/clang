#include<stdio.h>
main()
{
	int i = 20, j = 0, k;
	do {
		for (k = 0; k < 10; i--, k++) {
			printf("%2d ", i);
		}
		printf("\n");
		j++;
	} while (j < 2);
}
#include<stdio.h>
main()
{
	int i, g;
	printf("	1 2 3 4 5 6 7 8 9\n\n"); 
	printf(" =====================\n");
	for (i = 1; i <= 9; i++) {
		printf("%d | ", i);
		for (g = 1; g <= 9; g++) {
			printf("%d ", i * g);
		}
		printf("\n");
	}
}
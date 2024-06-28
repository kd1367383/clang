#include<stdio.h>
main()
{
	int i = 1,g=0;
	for (int j = 0; j < 3; j++) {
		for (g=0;g<20; i++,g++) {
			printf("%2d ", i);
		}
		printf("\n");
	}
}
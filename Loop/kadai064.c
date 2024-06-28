#include<stdio.h>
main()
{
	int i = 100, j = 0, k;
	while(j<10){
		for (k = 0; k < 10; i--, k++) {
			printf("%3d ", i);
		}
		printf("\n");
		j++;
	} 
}
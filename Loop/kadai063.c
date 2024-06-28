#include<stdio.h>
main()
{
	int i, j,k;
	i = 1;
	j = 0;
	k = 0;
	while (j <2) {
		while(k<10){
			printf("%2d ", i);
			i++;
			k++;
		}
		printf("\n");
		j++;
		k = 0;
	}
}
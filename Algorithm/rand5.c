#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,i;
	srand(time(0));
	for (i = 0; 100 > i; i++) {
		k = rand()%300 + 1;
		printf("%d ", k);
	}
}
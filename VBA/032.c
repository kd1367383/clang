#include<stdio.h>
main()
{
	int su, k, i;
	printf("数を入れて：");
	scanf("%d", &su);
	k = 1;
	for (i = 1; i <= 5; i++) 
	{
		printf("%d ", i*su);
	
	}
}
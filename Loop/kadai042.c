#include<stdio.h>
main()
{
	int i,j,g;
	i = 0;
	printf("%d", i);
	j = 0;
	g = 0;
	while (g <= 300) {
		i++;
		g = g + i;
		j++;
		printf("+%d", i);
	}
	printf("=%d", g);
}
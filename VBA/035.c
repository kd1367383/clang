#include<stdio.h>
main()
{
	int su, g;
	g = 0;
	while (1)
	{
		printf("�������āF");
		scanf("%d", &su);
		if (su == -999) break;
		g += su;
	} 
	printf("���v��%d\n", g);
}
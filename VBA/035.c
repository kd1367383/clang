#include<stdio.h>
main()
{
	int su, g;
	g = 0;
	while (1)
	{
		printf("数を入れて：");
		scanf("%d", &su);
		if (su == -999) break;
		g += su;
	} 
	printf("合計＝%d\n", g);
}
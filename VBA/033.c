#include<stdio.h>
main()
{
	int g, h, su,i;
	printf("数は？");
	scanf("%d", &su);
	g = 0;
	h = 0;
	for(i=0;su!=-999;i++)
	{
		g += su;
		printf("数は？");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("合計＝%d 平均＝%.2f", g,(float)g/i);
	}
}
#include<stdio.h>
main()
{
	int g, h, su,i;
	printf("”‚ÍH");
	scanf("%d", &su);
	g = 0;
	h = 0;
	for(i=0;su!=-999;i++)
	{
		g += su;
		printf("”‚ÍH");
		scanf("%d", &su);
	}
	if (i != 0) {
		printf("‡Œv%d •½‹Ï%.2f", g,(float)g/i);
	}
}